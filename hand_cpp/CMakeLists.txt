CMAKE_MINIMUM_REQUIRED (VERSION 2.8.6)

PROJECT(LibHand)

# configure the compiler.
SET(CMAKE_CXX_COMPILER "/usr/bin/g++")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Og -ggdb" )

SET(HAND_LIB_DIST_DIR "${CMAKE_SOURCE_DIR}/dist")

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/modules)

list(APPEND CMAKE_MODULE_PATH "/usr/share/OGRE/cmake/modules")

SUBDIRS(source third_party)
