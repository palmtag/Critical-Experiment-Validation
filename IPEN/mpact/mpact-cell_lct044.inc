  mat ssClad 7.9207 ss 1.0
  mat ssGT 7.7150 ss 1.0
  mat ssRod 8.0348 ss 1.0
  mat CuRod 8.870 cu-63 -0.6915 cu-65 -0.3085 


  fuel U43 0.0 94.5 / 0.0 U-234   7.85E-06
                          U-235   9.99E-04
                          U-238   2.17E-02
                          O-16    4.55E-02
                           

  cell 1 0.42447 0.42873 0.49037 0.59 / U43 he ssClad mod
  cell m 0.565 0.6 0.61 / mod mod mod
  cell s 0.565 0.6 0.61 / mod ssGT mod
  cell f 0.475 0.6 0.61 / ssRod mod mod
  cell c 0.475 0.6 0.61 / CuRod mod mod


