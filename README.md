# libhand-public
Modifications to the LibHand Library

+ provide segmentations 
+ provide keypoint locations (HandRenderer::walk_bones, output in centimeters). 
+ provide depth images
+ Inverse-Kinematics refinement system

Original version here: http://www.libhand.org/index.html

If you find this useful, please cite
+ J. Supancic, G. Rogez, Y. Yang, D. Ramanan, J. Shotton. "Depth-based hand pose estimation: data, methods, and challenges" International Conference on Computer Vision (ICCV), Santiago, Chile, December 2015.
+ M. Saric. Libhand: A library for hand articulation, 2011.

# Compiling and building libhand-public

## Dependencies
OpenCV 3.2 `apt install libopencv-dev`
Ogre 1.9 `apt install libogre-1.9-dev`

## CMake Modifications
Added target link to `libtiff.so.5` for project `pose_designer`.
