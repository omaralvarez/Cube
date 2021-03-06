#ifndef __CUBE__file__
#define __CUBE__file__

#include <iostream>
#include <GL/glew.h>

#include "vao.h"

using namespace std;

/**
 Returns a buffer with file data
 @param[in] fname path to file
 @param[out] fSize file size
 @returns memblock
 */
char* loadFile(string fname, GLint &fSize);


/**
 Returns a buffer with file data
 @param[in] fname path to file
 @param[out] fSize file size
 @returns memblock
 */
VAO loadCloud(string pathFile);

#endif
