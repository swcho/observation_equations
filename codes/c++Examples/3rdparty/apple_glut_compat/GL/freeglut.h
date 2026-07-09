#pragma once
// Apple GLUT compatibility shim.
//
// Homebrew's freeglut on macOS is an X11/Mesa build whose GLX context creation
// fails on Apple Silicon (glutCreateWindow returns without a valid GL context,
// so the first GL call segfaults). These examples only use standard GLUT
// symbols, so on macOS we redirect <GL/freeglut.h> to the native Apple
// GLUT.framework, which pulls in <OpenGL/gl.h> and <OpenGL/glu.h> as well.
//
// Note: Apple GLUT does not provide freeglut extensions such as
// glutMouseWheelFunc(); such calls must be guarded (e.g. #ifdef __FREEGLUT_EXT_H__).
#include <GLUT/glut.h>
