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

# Troubleshooting

## Could not load dynamic library `/usr/lib/OGRE/RenderSystem_GL.so`

If you installed OGRE using the package manager, it was installed to `/usr/lib/x86_64-linux-gnu/OGRE-1.9.0/`.
Simply link it to `/usr/lib/`: `sudo ln -s /usr/lib/x86_64-linux-gnu/OGRE-1.9.0/ /usr/lib/OGRE`.

## undefined reference to `uuid_unparse_lower@UUID_1.0`

If you cannot build `posedesigner` due to the following errors:
```
//usr/lib/x86_64-linux-gnu/libSM.so.6: undefined reference to `uuid_unparse_lower@UUID_1.0'
//usr/lib/x86_64-linux-gnu/libSM.so.6: undefined reference to `uuid_generate@UUID_1.0'
```

You need to temporarily remove Anaconda from your path. See [https://stackoverflow.com/questions/45584275/getting-error-usr-lib-lib64-libsm-so-undefined-reference-to-uuid-unparse-l](this thread) for more information.
