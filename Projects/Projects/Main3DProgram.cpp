#include "pch.h"
#include <iostream>
#include <glut.h>

//External files
#include "ActionsUser.h"

//GLfloat angle, fAspect;

// Função callback chamada para fazer o desenho
void Desenha(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0f, 0.0f, 1.0f);
	glutWireTeapot(50.0f);
	glutSwapBuffers();
}

void Inicializa(void){
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	angle = 45;
}

//void EspecificaParametrosVisualizacao(void){
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluPerspective(angle, fAspect, 0.5, 500);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	gluLookAt(0, 80, 200, 0, 0, 0, 0, 1, 0);
//}


void AlteraTamanhoJanela(GLsizei w, GLsizei h){
	if (h == 0) h = 1;
	glViewport(0, 0, w, h);
	fAspect = (GLfloat)w / (GLfloat)h;
	EspecificaParametrosVisualizacao();
}

//void GerenciaMouse(int button, int state, int x, int y){
//	if (button == GLUT_LEFT_BUTTON)
//		if (state == GLUT_DOWN) {  
//			if (angle >= 10) angle -= 5;
//		}
//	if (button == GLUT_RIGHT_BUTTON)
//		if (state == GLUT_DOWN) {  
//			if (angle <= 130) angle += 5;
//		}
//	EspecificaParametrosVisualizacao();
//	glutPostRedisplay();
//}

int main(void){
	/*glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(350, 300);
	glutCreateWindow("Visualizacao 3D");
	glutDisplayFunc(Desenha);
	glutReshapeFunc(AlteraTamanhoJanela);
	glutMouseFunc(GerenciaMouse);
	Inicializa();
	glutMainLoop();*/
	printf("Hello");
}