! B&W 1810 fuel and cell definitions

  ppitch 1.636   ! [cm]

  fuel U246  10.223  99.2 / 2.459
  fuel GDU4  10.112  99.2 / 1.944 / gad=4.0
  fuel U402   9.454  99.2 / 4.02

  cell 1  0.5149    0.5217    0.6030   0.81 / U246 he alum61 mod
  cell 2  0.5639              0.6039   0.81 / U402 ss mod
  cell 3  0.5150    0.5220    0.6033   0.81 / GDU4 he alum63 mod
  cell 4                      0.6030   0.81 / mod mod               ! empty tube
  cell W                      0.60325  1.62 / mod mod / large4      ! empty tube (CE16 instrument tube)
  cell 5  0.508     0.52197   0.60325  0.81 / AgInCd he alum63 mod  ! rod tube
  cell 6  0.46736 0.55626              0.81 / b4c alum61 mod

  cell 7  0.1651 0.5150 0.5220 0.6033  0.81 / he GDU4 he alum63 mod   ! annular gad

  cell 9  0.5150    0.5220    0.6033   0.81 / he he alum63 mod  ! void tube

