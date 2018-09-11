#include "pch.h"
#include <iostream>
#include <glut.h>

#include "ActionsUser.h"

void EspecificaParametrosVisualizacao(void) {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(angle, fAspect, 0.5, 500);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(0, 80, 200, 0, 0, 0, 0, 1, 0);
}

void GerenciaMouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON)
		if (state == GLUT_DOWN) {  // Zoom-in
			if (angle >= 10) angle -= 5;
		}
	if (button == GLUT_RIGHT_BUTTON)
		if (state == GLUT_DOWN) {  // Zoom-out
			if (angle <= 130) angle += 5;
		}
	EspecificaParametrosVisualizacao();
	glutPostRedisplay();
}