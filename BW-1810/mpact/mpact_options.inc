  vis_edits         none
  ray_spacing       0.01
!quad_set
  quad_type         CHEBYSHEV-YAMAMOTO
  polars_octant     3
  azimuthals_octant 32
  axial_buckling    0.00041   ! problem dependent
!iteration_control
  flux_tolerance    1e-6
  num_inners        1
  k_tolerance       1e-6
  up_scatter        1
  num_outers        25
!cmfd
  cmfd              cmfd
  cmfd_solver       mgnode
  k_shift           1.5
  cmfd_num_outers   20
!parallel
  num_space         121
  num_angle         1 
  num_energy        1
  num_threads       1 
!xs_library
  scattering        TCP0
  xs_filename       mpact51g_71_v4.2m5_12062016_sph.fmt
  xs_type           ORNL
  subgroup_set      4
!mesh
                              
  mesh fuel         10 1 1 8 / 10*16 16 16 8*16 16
  mesh gtube        5 1 8  / 5*16 16 5*16 16

  mesh cell_2         10   1 8 /    10*16    16 8*16 16  ! U402 fuel with no gap
  mesh cell_4         10     8 /    10*16       8*16 16  ! empty - 2 regions
  mesh cell_W         10    20 /    10*16      20*16 16  ! empty - 2 regions large water rod
  mesh cell_5         10 1 1 8 /    10*16 16 16 8*16 16  ! AIC
  mesh cell_6         10   1 8 /    10*16    16 8*16 16  ! B4C
  mesh cell_7       1 10 1 1 8 / 16 10*16 16 16 8*16 16  ! annular gad
  mesh cell_9         10 1 1 8 /    10*16 16 16 8*16 16  ! void tube

! cell 1  0.514858  0.521716  0.602996 0.80 / U246 he alum61 mod
! cell 2  0.56388             0.603885 0.80 / U402 ss mod
! cell 3  0.514985  0.52197   0.60325  0.80 / GDU4 he alum63 mod
! cell 4                      0.60325  0.80 / mod mod  ! empty tube
! cell 5  0.508     0.52197   0.60325  0.80 / AgInCd he alum63 mod  ! rod tube
! cell 6  0.46736 0.55626              0.80 / b4c alum61 mod
! cell 7  0.1651 0.514985 0.52197 0.60325 0.80 / he GDU4 he alum63 mod   ! annular gad
! cell 9  0.508     0.52197   0.60325  0.80 / he he alum63 mod  ! void tube

  axial_mesh        1.0000

  par_method        EXPLICITRADIAL
  par_map
      1   2   3   4   5   6   7   8   9  10  11
     12  13  14  15  16  17  18  19  20  21  22
     23  24  25  26  27  28  29  30  31  32  33
     34  35  36  37  38  39  40  41  42  43  44
     45  46  47  48  49  50  51  52  53  54  55
     56  57  58  59  60  61  62  63  64  65  66
     67  68  69  70  71  72  73  74  75  76  77
     78  79  80  81  82  83  84  85  86  87  88
     89  90  91  92  93  94  95  96  97  98  99
    100 101 102 103 104 105 106 107 108 109 110
    111 112 113 114 115 116 117 118 119 120 121

