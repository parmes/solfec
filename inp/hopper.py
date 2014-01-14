from math import pi
num = 25 # number of spheres
rad = 0.5/num
den = 1000.0
kn = 1E6
vol = (4./3.)*pi*rad**3
mass = den*vol
omega = (kn/mass)**0.5
hcrit = 2.0/omega

solfec = SOLFEC ('DYNAMIC', 0.1*hcrit, 'out/hopper')

bulk = BULK_MATERIAL (solfec, model = 'KIRCHHOFF', young = 1E9, poisson = 0.25, density = den)

SURFACE_MATERIAL (solfec, model = 'SPRING_DASHPOT', friction = 0.0, restitution = 0.0, spring = kn, dashpot = -1.0)

for i in range (0,num):
  for j in range (0,num):
    for k in range (0,num):
      sph = SPHERE ((2*i*rad+rad,2*j*rad+rad,2*k*rad+rad), rad, 1, 1)
      BODY (solfec, 'RIGID', sph, bulk)

triangles = [(0.0,0.0,0.0, 1.0,0.0,0.0, 0.0,0.0,1.0), (0.0,0.0,1.0, 1.0,0.0,0.0, 1.0,0.0,1.0),
             (1.0,1.0,0.0, 0.0,1.0,0.0, 0.0,1.0,1.0), (1.0,1.0,0.0, 0.0,1.0,1.0, 1.0,1.0,1.0),
	     (0.0,1.0,0.0, 0.0,0.0,0.0, 0.0,0.0,1.0), (0.0,1.0,0.0, 0.0,0.0,1.0, 0.0,1.0,1.0),
	     (1.0,0.0,0.0, 1.0,1.0,0.0, 1.0,0.0,1.0), (1.0,0.0,1.0, 1.0,1.0,0.0, 1.0,1.0,1.0),
	     (1.0,0.0,0.0, 0.0,0.0,0.0, 0.4,0.4,-1.0), (1.0,0.0,0.0, 0.4,0.4,-1.0, 0.6,0.4,-1.0),
	     (0.0,0.0,0.0, 0.0,1.0,0.0, 0.4,0.4,-1.0), (0.4,0.4,-1.0, 0.0,1.0,0.0, 0.4,0.6,-1.0),
	     (0.0,1.0,0.0, 1.0,1.0,0.0, 0.4,0.6,-1.0), (0.4,0.6,-1.0, 1.0,1.0,0.0, 0.6,0.6,-1.0),
	     (1.0,1.0,0.0, 1.0,0.0,0.0, 0.6,0.4,-1.0), (1.0,1.0,0.0, 0.6,0.4,-1.0, 0.6,0.6,-1.0),
	     (-1.0,-1.0,-2.0, 2.0,-1.0,-2.0, -1.0,2.0,-2.0), (-1.0,2.0,-2.0, 2.0,-1.0,-2.0, 2.0,2.0,-2.0),
	     (-1.0,-1.0,-2.0, 2.0,-1.0,-2.0, -1.0,-1.0,-1.0), (-1.0,-1.0,-1.0, 2.0,-1.0,-2.0, 2.0,-1.0,-1.0),
	     (-1.0,-1.0,-2.0, -1.0,-1.0,-1.0, -1.0,2.0,-2.0), (-1.0,2.0,-2.0, -1.0,-1.0,-1.0, -1.0,2.0,-1.0),
	     (-1.0,2.0,-2.0, 2.0,2.0,-2.0, -1.0,2.0,-1.0), (-1.0,2.0,-1.0, 2.0,2.0,-2.0, 2.0,2.0,-1.0),
	     (2.0,-1.0,-2.0, 2.0,-1.0,-1.0, 2.0,2.0,-2.0), (2.0,2.0,-2.0, 2.0,-1.0,-1.0, 2.0,2.0,-1.0)]

for t in triangles:
  a0 = t[3]-t[0]
  a1 = t[4]-t[1]
  a2 = t[5]-t[2]
  b0 = t[6]-t[3]
  b1 = t[7]-t[4]
  b2 = t[8]-t[5]
  n0 = a1*b2-a2*b1
  n1 = a2*b0-a0*b2
  n2 = a0*b1-a1*b0
  le = (n0*n0+n1*n1+n2*n2)**0.5
  n0 /= le
  n1 /= le
  n2 /= le
  v = list(t) + [t[0]+rad*n0,t[1]+rad*n1,t[2]+rad*n2,
                 t[3]+rad*n0,t[4]+rad*n1,t[5]+rad*n2,
	         t[6]+rad*n0,t[7]+rad*n1,t[8]+rad*n2]
  cvx = HULL (v, 2, 2)
  BODY (solfec, 'OBSTACLE', cvx, bulk)

GRAVITY (solfec, (0, 0, -10))

sv = PENALTY_SOLVER ('EXPLICIT')

OUTPUT (solfec, 0.02)

RUN (solfec, sv, 2.0)