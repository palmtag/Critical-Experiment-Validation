! MPACT Settings for IPEN/MB-01 Reactor
!Mesh settings for each cell
  mesh fuel 		    10 1 1 8 / 10*16 16 16 8*16 16
  mesh gad		      10 1 1 8 / 10*16 16 16 8*16 16
  mesh cell_m       10 2 2 / 10*8 2*8 2*8 8
  mesh cell_s       10 2 2 / 10*8 2*8 2*8 8
!Quadrature type
  quad_type         CHEBYSHEV-YAMAMOTO
!Ray Spacing
 ray_spacing 		    0.05
!Number of polar angles per octant (theta)
  polars_octant		  3
!Number of azimuthal angles per octant (gamma)
  azimuthals_octant	32
!Scattering type 
  scattering 		    TCP0
  res_up_scatter    false
  axial_mesh        1.0
!XS file 
  xs_filename       mpact51g_71_4.3m3_01222019.fmt
  
  axial_buckling    0.002173629

