! MPACT options for Core III
  vis_edits         none
  ray_spacing       0.01
!quad_set
  quad_type         CHEBYSHEV-YAMAMOTO
  polars_octant     3
  azimuthals_octant 32
!iteration_control
  flux_tolerance    1e-6
  num_inners        1
  k_tolerance       1e-6
  up_scatter        1
  num_outers        100
  scattering        TCP0
!cmfd
  cmfd              cmfd
  cmfd_solver       mgnode
  k_shift           1.5
  cmfd_num_outers   20
!parallel
  num_space         25
  num_angle         1
  num_energy        1
  num_threads       1
!xs_library
  xs_filename       mpact51g_71_v4.2m5_12062016_sph.fmt
  xs_type           ORNL
  subgroup_set      4
!mesh

  mesh fuel         10 1 1 8 / 10*16 16 16 8*16 16
  mesh gtube        10 8     / 10*16       8*16 16

  axial_mesh        1.0000

 par_method        EXPLICITRADIAL
 par_map
     1  2  3  4  5
     6  7  8  9 10
    11 12 13 14 15
    16 17 18 19 20
    21 22 23 24 25

