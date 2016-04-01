/******************************************************************************
 *                      Code generated with sympy 0.7.6                       *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                       This file is part of 'project'                       *
 ******************************************************************************/
#include "ring_metacarpal_ring_metacarpal_side_1.h"
#include <math.h>

double ring_metacarpal_ring_metacarpal_side_1(double fore_arm_bend, double fore_arm_side, double hind_arm_bend, double hind_arm_side, double local_x, double local_y, double local_z, double ring_metacarpal_bend, double ring_metacarpal_length, double ring_metacarpal_side, double root_scale) {

   double ring_metacarpal_ring_metacarpal_side_1_result;
   ring_metacarpal_ring_metacarpal_side_1_result = local_x*(-((sin(fore_arm_side)*cos(hind_arm_side) + sin(hind_arm_side)*cos(fore_arm_side)*cos(hind_arm_bend))*cos(fore_arm_bend) - sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side))*sin(ring_metacarpal_side) + (-sin(fore_arm_side)*sin(hind_arm_side)*cos(hind_arm_bend) + cos(fore_arm_side)*cos(hind_arm_side))*cos(ring_metacarpal_side))*cos(ring_metacarpal_bend) + local_y*(-((sin(fore_arm_side)*cos(hind_arm_side) + sin(hind_arm_side)*cos(fore_arm_side)*cos(hind_arm_bend))*cos(fore_arm_bend) - sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side))*cos(ring_metacarpal_side) - (-sin(fore_arm_side)*sin(hind_arm_side)*cos(hind_arm_bend) + cos(fore_arm_side)*cos(hind_arm_side))*sin(ring_metacarpal_side)) + local_z*(-((sin(fore_arm_side)*cos(hind_arm_side) + sin(hind_arm_side)*cos(fore_arm_side)*cos(hind_arm_bend))*cos(fore_arm_bend) - sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side))*sin(ring_metacarpal_side) + (-sin(fore_arm_side)*sin(hind_arm_side)*cos(hind_arm_bend) + cos(fore_arm_side)*cos(hind_arm_side))*cos(ring_metacarpal_side))*sin(ring_metacarpal_bend) + ring_metacarpal_length*root_scale*(-((sin(fore_arm_side)*cos(hind_arm_side) + sin(hind_arm_side)*cos(fore_arm_side)*cos(hind_arm_bend))*cos(fore_arm_bend) - sin(fore_arm_bend)*sin(hind_arm_bend)*sin(hind_arm_side))*sin(ring_metacarpal_side) + (-sin(fore_arm_side)*sin(hind_arm_side)*cos(hind_arm_bend) + cos(fore_arm_side)*cos(hind_arm_side))*cos(ring_metacarpal_side))*cos(ring_metacarpal_bend);
   return ring_metacarpal_ring_metacarpal_side_1_result;

}