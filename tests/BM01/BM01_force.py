def create_simulation (step,stop, N_archi):
   #step=1.E-4
   #stop=5.
   #Dir_out='out/LE-302_Grosier_1e-3'
   Dir_out='out_serie/LE-302_fin_'+'step_'+str(step)+'s'
   GEOMETRIC_EPSILON (1E-5)
   
   solfec=SOLFEC ('QUASI_STATIC', step, Dir_out)
   Nodes_M1=[
         0.1000000E+02, 0.0000000E+00, 0.0000000E+00,
         0.0000000E+00, 0.0000000E+00, 0.1000000E+02,
         0.0000000E+00, 0.1000000E+02, 0.0000000E+00,
         0.7071068E+01, 0.7071068E+01, 0.0000000E+00,
         0.0000000E+00, 0.7071068E+01, 0.7071068E+01,
         0.7071068E+01, 0.0000000E+00, 0.7071068E+01,
         0.5773502E+01, 0.5773502E+01, 0.5773504E+01,
         0.0000000E+00, 0.9238795E+01, 0.3826834E+01,
         0.0000000E+00, 0.3826834E+01, 0.9238795E+01,
         0.3826834E+01, 0.0000000E+00, 0.9238795E+01,
         0.9238795E+01, 0.0000000E+00, 0.3826834E+01,
         0.9238795E+01, 0.3826834E+01, 0.0000000E+00,
         0.3826834E+01, 0.9238795E+01, 0.0000000E+00,
         0.6738873E+01, 0.6738873E+01, 0.3029055E+01,
         0.3594536E+01, 0.8677977E+01, 0.3431040E+01,
         0.8677977E+01, 0.3594536E+01, 0.3431040E+01,
         0.7063607E+01, 0.2925842E+01, 0.6445534E+01,
         0.2925842E+01, 0.7063607E+01, 0.6445534E+01,
         0.3851180E+01, 0.3851180E+01, 0.8386705E+01,
         0.9807853E+01, 0.0000000E+00, 0.1950903E+01,
         0.9138941E+01, 0.1817848E+01, 0.3629764E+01,
         0.9097509E+01, 0.3768312E+01, 0.1742171E+01,
         0.9807853E+01, 0.1950903E+01, 0.0000000E+00,
         0.7868797E+01, 0.5257762E+01, 0.3230785E+01,
         0.6987525E+01, 0.6987525E+01, 0.1532635E+01,
         0.8314696E+01, 0.5555702E+01, 0.0000000E+00,
         0.5257762E+01, 0.7868797E+01, 0.3230785E+01,
         0.3768312E+01, 0.9097509E+01, 0.1742171E+01,
         0.5555702E+01, 0.8314696E+01, 0.0000000E+00,
         0.1817848E+01, 0.9138941E+01, 0.3629764E+01,
         0.0000000E+00, 0.9807853E+01, 0.1950903E+01,
         0.1950903E+01, 0.9807853E+01, 0.0000000E+00,
         0.8314696E+01, 0.0000000E+00, 0.5555702E+01,
         0.7223458E+01, 0.1436835E+01, 0.6764403E+01,
         0.7993030E+01, 0.3310821E+01, 0.5014971E+01,
         0.6578934E+01, 0.4395903E+01, 0.6115036E+01,
         0.6330986E+01, 0.6330986E+01, 0.4453901E+01,
         0.4395903E+01, 0.6578934E+01, 0.6115036E+01,
         0.3310821E+01, 0.7993030E+01, 0.5014971E+01,
         0.1436835E+01, 0.7223458E+01, 0.6764403E+01,
         0.0000000E+00, 0.8314696E+01, 0.5555702E+01,
         0.5555702E+01, 0.0000000E+00, 0.8314696E+01,
         0.5337232E+01, 0.3566224E+01, 0.7667855E+01,
         0.4086215E+01, 0.1692566E+01, 0.8968727E+01,
         0.3566224E+01, 0.5337232E+01, 0.7667855E+01,
         0.0000000E+00, 0.5555702E+01, 0.8314696E+01,
         0.1692566E+01, 0.4086215E+01, 0.8968727E+01,
         0.1950903E+01, 0.0000000E+00, 0.9807853E+01,
         0.0000000E+00, 0.1950903E+01, 0.9807853E+01,
         0.1917351E+01, 0.9639176E+01, 0.1846632E+01,
         0.5480711E+01, 0.8202464E+01, 0.1637495E+01,
         0.8202464E+01, 0.5480711E+01, 0.1637495E+01,
         0.9639176E+01, 0.1917351E+01, 0.1846632E+01,
         0.1655819E+01, 0.8324364E+01, 0.5288028E+01,
         0.4892879E+01, 0.7322711E+01, 0.4736840E+01,
         0.7322711E+01, 0.4892879E+01, 0.4736840E+01,
         0.8324364E+01, 0.1655819E+01, 0.5288028E+01,
         0.1740573E+01, 0.5737900E+01, 0.8002931E+01,
         0.5737900E+01, 0.1740573E+01, 0.8002931E+01,
         0.2008292E+01, 0.2008292E+01, 0.9588198E+01,
         0.4867402E+01, 0.4867402E+01, 0.7253744E+01,
         0.1039618E+02, 0.3901986E-01, 0.3901986E-01,
         0.3901986E-01, 0.3901986E-01, 0.1039618E+02,
         0.3901986E-01, 0.1039618E+02, 0.3901986E-01,
         0.7354430E+01, 0.7354430E+01, 0.3089152E-01,
         0.3042015E-01, 0.7354571E+01, 0.7354479E+01,
         0.7354571E+01, 0.3042015E-01, 0.7354479E+01,
         0.5996189E+01, 0.5996189E+01, 0.6031122E+01,
         0.3691318E-01, 0.9608573E+01, 0.3979971E+01,
         0.3553196E-01, 0.3980134E+01, 0.9608713E+01,
         0.3980134E+01, 0.3553196E-01, 0.9608713E+01,
         0.9608573E+01, 0.3691318E-01, 0.3979971E+01,
         0.9608699E+01, 0.3980053E+01, 0.3514535E-01,
         0.3980053E+01, 0.9608699E+01, 0.3514535E-01,
         0.7011628E+01, 0.7011628E+01, 0.3145917E+01,
         0.3736298E+01, 0.9030777E+01, 0.3564600E+01,
         0.9030777E+01, 0.3736298E+01, 0.3564600E+01,
         0.7348481E+01, 0.3032989E+01, 0.6710774E+01,
         0.3031185E+01, 0.7348674E+01, 0.6711161E+01,
         0.3996832E+01, 0.3996832E+01, 0.8733646E+01,
         0.1020022E+02, 0.3876124E-01, 0.2028935E+01,
         0.9509945E+01, 0.1887242E+01, 0.3771415E+01,
         0.9465180E+01, 0.3918523E+01, 0.1814003E+01,
         0.1020035E+02, 0.2028976E+01, 0.3727041E-01,
         0.8187479E+01, 0.5466168E+01, 0.3364362E+01,
         0.7269480E+01, 0.7269480E+01, 0.1591723E+01,
         0.8647753E+01, 0.5778244E+01, 0.3301891E-01,
         0.5467309E+01, 0.8189186E+01, 0.3356209E+01,
         0.3918664E+01, 0.9465521E+01, 0.1809803E+01,
         0.5778244E+01, 0.8647753E+01, 0.3301891E-01,
         0.1895948E+01, 0.9509467E+01, 0.3770471E+01,
         0.3876124E-01, 0.1020022E+02, 0.2028935E+01,
         0.2028976E+01, 0.1020035E+02, 0.3727041E-01,
         0.8647738E+01, 0.3402057E-01, 0.5778180E+01,
         0.7518394E+01, 0.1484242E+01, 0.7034844E+01,
         0.8320535E+01, 0.3439335E+01, 0.5210924E+01,
         0.6846404E+01, 0.4557890E+01, 0.6370185E+01,
         0.6588675E+01, 0.6588675E+01, 0.4625920E+01,
         0.4557890E+01, 0.6846404E+01, 0.6370185E+01,
         0.3452489E+01, 0.8317901E+01, 0.5208754E+01,
         0.1493525E+01, 0.7519379E+01, 0.7032863E+01,
         0.3402057E-01, 0.8647738E+01, 0.5778180E+01,
         0.5778173E+01, 0.3632864E-01, 0.8647532E+01,
         0.5550522E+01, 0.3696392E+01, 0.7983676E+01,
         0.4254226E+01, 0.1763281E+01, 0.9329664E+01,
         0.3696392E+01, 0.5550522E+01, 0.7983676E+01,
         0.3632864E-01, 0.5778173E+01, 0.8647532E+01,
         0.1763281E+01, 0.4254226E+01, 0.9329664E+01,
         0.2028930E+01, 0.4066374E-01, 0.1020002E+02,
         0.4066374E-01, 0.2028930E+01, 0.1020002E+02,
         0.1992791E+01, 0.1002892E+02, 0.1918489E+01,
         0.5700365E+01, 0.8534447E+01, 0.1700902E+01,
         0.8534159E+01, 0.5700171E+01, 0.1705111E+01,
         0.1002892E+02, 0.1992791E+01, 0.1918489E+01,
         0.1730726E+01, 0.8664586E+01, 0.5492886E+01,
         0.5086576E+01, 0.7623561E+01, 0.4921368E+01,
         0.7623561E+01, 0.5086576E+01, 0.4921368E+01,
         0.8664501E+01, 0.1716201E+01, 0.5495234E+01,
         0.1814357E+01, 0.5973340E+01, 0.8322429E+01,
         0.5973403E+01, 0.1814955E+01, 0.8322321E+01,
         0.2090846E+01, 0.2090846E+01, 0.9975138E+01,
         0.5058944E+01, 0.5058944E+01, 0.7552207E+01,]
   #ELEM_TETRA4
   ############
   #ELEM_TETRA5
   ############
   #ELEM_TETRA6
   ############
   #ELEM_TETRA8
   ############
   M49      = [8,     62,    109,    120,    108,      1,     48,     59,     47,      1]
   M50      = [8,     70,    108,    120,    104,      9,     47,     59,     43,      2]
   M51      = [8,    120,    109,     69,    107,     59,     48,      8,     46,      3]
   M52      = [8,    107,     69,    106,    118,     46,      8,     45,     57,      4]
   M53      = [8,    118,    106,     65,    100,     57,     45,      4,     39,      5]
   M54      = [8,    100,     65,    101,    114,     39,      4,     40,     53,      6]
   M55      = [8,    114,    101,     68,     90,     53,     40,      7,     29,      7]
   M56      = [8,     90,     68,     91,    110,     29,      7,     30,     49,      8]
   M57      = [8,    110,     91,     63,     92,     49,     30,      2,     31,      9]
   M58      = [8,    110,     92,     73,     88,     49,     31,     12,     27,     10]
   M59      = [8,     88,     73,     89,    111,     27,     12,     28,     50,     11]
   M60      = [8,    111,     89,     64,     85,     50,     28,      3,     24,     12]
   M61      = [8,     85,     64,     86,    112,     24,      3,     25,     51,     13]
   M62      = [8,    112,     86,     72,     82,     51,     25,     11,     21,     14]
   M63      = [8,     82,     72,     83,    113,     21,     11,     22,     52,     15]
   M64      = [8,    113,     83,     61,     80,     52,     22,      0,     19,     16]
   M65      = [8,    113,     80,     71,     81,     52,     19,     10,     20,     17]
   M66      = [8,     81,     71,     93,    117,     20,     10,     32,     56,     18]
   M67      = [8,    117,     93,     66,     94,     56,     32,      5,     33,     19]
   M68      = [8,     94,     66,    102,    119,     33,      5,     41,     58,     20]
   M69      = [8,    119,    102,     70,    104,     58,     41,      9,     43,     21]
   M70      = [8,     79,    104,    120,    107,     18,     43,     59,     46,     22]
   M71      = [8,     79,    107,    118,    105,     18,     46,     57,     44,     23]
   M72      = [8,    118,    100,     78,    105,     57,     39,     17,     44,     24]
   M73      = [8,     78,    100,    114,     99,     17,     39,     53,     38,     25]
   M74      = [8,     99,    114,     90,     75,     38,     53,     29,     14,     26]
   M75      = [8,     75,     90,    110,     88,     14,     29,     49,     27,     27]
   M76      = [8,     75,     88,    111,     87,     14,     27,     50,     26,     28]
   M77      = [8,     87,    111,     85,     74,     26,     50,     24,     13,     29]
   M78      = [8,     74,     85,    112,     84,     13,     24,     51,     23,     30]
   M79      = [8,     84,    112,     82,     76,     23,     51,     21,     15,     31]
   M80      = [8,     76,     82,    113,     81,     15,     21,     52,     20,     32]
   M81      = [8,     76,     81,    117,     95,     15,     20,     56,     34,     33]
   M82      = [8,     95,    117,     94,     77,     34,     56,     33,     16,     34]
   M83      = [8,     77,     94,    119,    103,     16,     33,     58,     42,     35]
   M84      = [8,    103,    119,    104,     79,     42,     58,     43,     18,     36]
   M85      = [8,     79,    105,    121,    103,     18,     44,     60,     42,     37]
   M86      = [8,     98,    121,    105,     78,     37,     60,     44,     17,     38]
   M87      = [8,     78,     99,    115,     98,     17,     38,     54,     37,     39]
   M88      = [8,     99,     75,     87,    115,     38,     14,     26,     54,     40]
   M89      = [8,    115,     87,     74,     97,     54,     26,     13,     36,     41]
   M90      = [8,     97,     74,     84,    116,     36,     13,     23,     55,     42]
   M91      = [8,    116,     84,     76,     95,     55,     23,     15,     34,     43]
   M92      = [8,    116,     95,     77,     96,     55,     34,     16,     35,     44]
   M93      = [8,     96,     77,    103,    121,     35,     16,     42,     60,     45]
   M94      = [8,    121,     98,     67,     96,     60,     37,      6,     35,     46]
   M95      = [8,     96,     67,     97,    116,     35,      6,     36,     55,     47]
   M96      = [8,     97,     67,     98,    115,     36,      6,     37,     54,     48]
     #ELEM_TETRA4
     ############
     #ELEM_TETRA5
     ############
     #ELEM_TETRA6
     ############
     #ELEM_TETRA8
     ############
   Mesh_M1 = M49      + \
           M50      + \
           M51      + \
           M52      + \
           M53      + \
           M54      + \
           M55      + \
           M56      + \
           M57      + \
           M58      + \
           M59      + \
           M60      + \
           M61      + \
           M62      + \
           M63      + \
           M64      + \
           M65      + \
           M66      + \
           M67      + \
           M68      + \
           M69      + \
           M70      + \
           M71      + \
           M72      + \
           M73      + \
           M74      + \
           M75      + \
           M76      + \
           M77      + \
           M78      + \
           M79      + \
           M80      + \
           M81      + \
           M82      + \
           M83      + \
           M84      + \
           M85      + \
           M86      + \
           M87      + \
           M88      + \
           M89      + \
           M90      + \
           M91      + \
           M92      + \
           M93      + \
           M94      + \
           M95      + \
           M96    
   S199     = [48,  4,     1,     48,     59,     47,     11]
   S200     = [     4,     9,     47,     59,     43,     11]
   S201     = [     4,    59,     48,      8,     46,     11]
   S202     = [     4,    46,      8,     45,     57,     11]
   S203     = [     4,    57,     45,      4,     39,     11]
   S204     = [     4,    39,      4,     40,     53,     11]
   S205     = [     4,    53,     40,      7,     29,     11]
   S206     = [     4,    29,      7,     30,     49,     11]
   S207     = [     4,    49,     30,      2,     31,     11]
   S208     = [     4,    49,     31,     12,     27,     11]
   S209     = [     4,    27,     12,     28,     50,     11]
   S210     = [     4,    50,     28,      3,     24,     11]
   S211     = [     4,    24,      3,     25,     51,     11]
   S212     = [     4,    51,     25,     11,     21,     11]
   S213     = [     4,    21,     11,     22,     52,     11]
   S214     = [     4,    52,     22,      0,     19,     11]
   S215     = [     4,    52,     19,     10,     20,     11]
   S216     = [     4,    20,     10,     32,     56,     11]
   S217     = [     4,    56,     32,      5,     33,     11]
   S218     = [     4,    33,      5,     41,     58,     11]
   S219     = [     4,    58,     41,      9,     43,     11]
   S220     = [     4,    18,     43,     59,     46,     11]
   S221     = [     4,    18,     46,     57,     44,     11]
   S222     = [     4,    57,     39,     17,     44,     11]
   S223     = [     4,    17,     39,     53,     38,     11]
   S224     = [     4,    38,     53,     29,     14,     11]
   S225     = [     4,    14,     29,     49,     27,     11]
   S226     = [     4,    14,     27,     50,     26,     11]
   S227     = [     4,    26,     50,     24,     13,     11]
   S228     = [     4,    13,     24,     51,     23,     11]
   S229     = [     4,    23,     51,     21,     15,     11]
   S230     = [     4,    15,     21,     52,     20,     11]
   S231     = [     4,    15,     20,     56,     34,     11]
   S232     = [     4,    34,     56,     33,     16,     11]
   S233     = [     4,    16,     33,     58,     42,     11]
   S234     = [     4,    42,     58,     43,     18,     11]
   S235     = [     4,    18,     44,     60,     42,     11]
   S236     = [     4,    37,     60,     44,     17,     11]
   S237     = [     4,    17,     38,     54,     37,     11]
   S238     = [     4,    38,     14,     26,     54,     11]
   S239     = [     4,    54,     26,     13,     36,     11]
   S240     = [     4,    36,     13,     23,     55,     11]
   S241     = [     4,    55,     23,     15,     34,     11]
   S242     = [     4,    55,     34,     16,     35,     11]
   S243     = [     4,    35,     16,     42,     60,     11]
   S244     = [     4,    60,     37,      6,     35,     11]
   S245     = [     4,    35,      6,     36,     55,     11]
   S246     = [     4,    36,      6,     37,     54,     11]
    
   Surf_M1_INT = S199     + \
           S200     + \
           S201     + \
           S202     + \
           S203     + \
           S204     + \
           S205     + \
           S206     + \
           S207     + \
           S208     + \
           S209     + \
           S210     + \
           S211     + \
           S212     + \
           S213     + \
           S214     + \
           S215     + \
           S216     + \
           S217     + \
           S218     + \
           S219     + \
           S220     + \
           S221     + \
           S222     + \
           S223     + \
           S224     + \
           S225     + \
           S226     + \
           S227     + \
           S228     + \
           S229     + \
           S230     + \
           S231     + \
           S232     + \
           S233     + \
           S234     + \
           S235     + \
           S236     + \
           S237     + \
           S238     + \
           S239     + \
           S240     + \
           S241     + \
           S242
           
   bulk = BULK_MATERIAL (solfec,
                         model = 'KIRCHHOFF',
                         young = 210E+09,
                         poisson = 0.3,
                         density = 7.850E+03)
                                              
   Msh_M1 = MESH(Nodes_M1,Mesh_M1,Surf_M1_INT)
   
   Msh_M2 = MESH(Nodes_M1,Mesh_M1,1)
   
   Mesh_final = Msh_M1
   
   Node=[]
   for i in Mesh_final.nodes_on_surface(11):
     Node.append(Mesh_final.node(i))
     
   #Point_A=Mesh_final.node(0)
   #Point_B=Mesh_final.node(2)
   Point_A = Mesh_final.node(0)
   Point_B = Mesh_final.node(2)
   Point_C = Mesh_final.node(1)
   Point_D=Mesh_final.node(113)
   
   FIX246=[]  
   FIX246.append(Mesh_final.node(0))
   FIX246.append(Mesh_final.node(19))
   FIX246.append(Mesh_final.node(10))
   FIX246.append(Mesh_final.node(32))
   FIX246.append(Mesh_final.node(5))
   FIX246.append(Mesh_final.node(41))
   FIX246.append(Mesh_final.node(9))
   FIX246.append(Mesh_final.node(47))
   
   
   FIX156=[]
   FIX156.append(Mesh_final.node(2))
   FIX156.append(Mesh_final.node(30))
   FIX156.append(Mesh_final.node(7))
   FIX156.append(Mesh_final.node(40))
   FIX156.append(Mesh_final.node(4))
   FIX156.append(Mesh_final.node(45))
   FIX156.append(Mesh_final.node(8))
   FIX156.append(Mesh_final.node(48))
   
   
   Bod_M1 = BODY (solfec, 'FINITE_ELEMENT',Mesh_final,bulk)
   #Bod_M1.scheme = 'DEF_EXP'
   #Bod_M1.damping = 1E-4
   
   data =[]
   time=[]
   vite=[]
   st=step
   n=int(stop/step)*2 #stop/step
   for i in range (1, n):
     x=i*st
     time.append(x)
     y=1E-20
     vite.append(y)  
     
   for (tt,vv) in zip (time,vite):
   	data += [tt,vv]
      
   Serie = TIME_SERIES (data)
   
   for i in range (0,len(Node)):
     DISPLAY_POINT (Bod_M1, Node[i], 'N%d'%i) # press 'D' in the viewer to see display points
   
   FIX_POINT (Bod_M1,Point_C)
   
   Fix_direc_Y=(0.,1.,0.)
   for fix in FIX246:
     FIX_DIRECTION (Bod_M1, fix, Fix_direc_Y)
   #  SET_DISPLACEMENT(Bod_M1,fix, Fix_direc_Y, Serie)
   #	FIX_POINT (Bod_M1,fix)
     
   Fix_direc_X=(1.,0.,0.)
   for fix in FIX156:
     FIX_DIRECTION (Bod_M1, fix, Fix_direc_X)
    # SET_DISPLACEMENT(Bod_M1,fix, Fix_direc_X, Serie)  
   #	FIX_POINT (Bod_M1,fix)
      
   P=2.0E+03  #N/m2
   surface=11
   #PRESSURE (Bod_M1, surface, -P)
   
   F=2E+06   #N
   FORCE(Bod_M1,'SPATIAL', Point_A,(1,0,0),F)
   FORCE(Bod_M1,'SPATIAL', Point_B,(0,-1,0),F)
   
   #GRAVITY (solfec, (0, 0, -10))
   
   gs= GAUSS_SEIDEL_SOLVER (1E-3 , 1000)
   gs_imp= GAUSS_SEIDEL_SOLVER (1E-6 , 1000, 1E-6)
   nt = NEWTON_SOLVER ()
   nt_imp= NEWTON_SOLVER (1E-9, 1000, delta = 1E-6)
   OUTPUT(solfec,N_archi*step)
   RUN (solfec, gs_imp, stop)


stop=20.
if not VIEWER():
  tw1 = create_simulation (2.E-2, stop, 1 )
  tw2 = create_simulation (1.E-2, stop, 1 )
  tw3 = create_simulation (1.E-3, stop, 10)
  tw4 = create_simulation (2.E-3, stop, 5 )
  tw5 = create_simulation (5.E-3, stop, 2 )
  tw6 = create_simulation (1.E-4, stop, 100)
  tw7 = create_simulation (2.E-4, stop, 50)  
  tw8 = create_simulation (5.E-4, stop, 20)  
  
  
  
  
  
