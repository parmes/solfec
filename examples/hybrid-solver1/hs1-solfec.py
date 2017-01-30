from shutil import copyfile

M = 2 # must be same as hs1-paremc.py
N = 3 # must be same as hs1-paremc.py
gap = 0.002 # must be same as hs1-paremc.py
step = 1E-3
stop = 20

sol = SOLFEC ('DYNAMIC', step, 'out/hybrid-solver1')

mat = BULK_MATERIAL (sol, model = 'KIRCHHOFF', young = 1E6, poisson = 0.25, density = 100)

SURFACE_MATERIAL (sol, model = 'SIGNORINI_COULOMB', friction = 0.1)

nodes = [0.0, 0.0, 0.0,
         0.1, 0.0, 0.0,
	 0.1, 0.1, 0.0,
	 0.0, 0.1, 0.0,
	 0.0, 0.0, 0.1,
	 0.1, 0.0, 0.1,
	 0.1, 0.1, 0.1,
	 0.0, 0.1, 0.1]

for i in [M-1, M+N]:
  msh = HEX (nodes, 1, 1, 1, 0, [0, 1, 2, 3, 4, 5])
  TRANSLATE (msh, (i*(0.1+gap), 0, 0))
  bod1 = BODY (sol, 'OBSTACLE', msh, mat) # boundary bodies need to be obstacles

for i in range(0,N):
  msh = HEX (nodes, 2, 2, 2, 0, [0, 1, 2, 3, 4, 5])
  TRANSLATE (msh, ((M+i)*(0.1+gap), 0, 0))
  bod2 = BODY (sol, 'RIGID', msh, mat)

ns = NEWTON_SOLVER ()

# parmec's output files are written to the same location as the input path
# for that to be the solfec's output directory, we copy parmec's input file there
copyfile('examples/hybrid-solver0/hs0-parmec.py', 'out/hybrid-solver0/hs0-parmec.py')

# nubering of bodies in Parmec starts from 0 while in Solfec from 1
# hence below we used dictionary {0 : 1} as the parmec2solfec mapping
hs = HYBRID_SOLVER ('out/hybrid-solver1/hs0-parmec.py', step, {M-1:1, M:2}, ns, 0.03)

import solfec as solfec # we need to be specific when using the OUTPUT command
solfec.OUTPUT (sol, 0.03) # since 'OUTPUT' in Solfec collides with 'OUTPUT' in Parmec

RUN (sol, hs, stop)
