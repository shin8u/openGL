#include <iostream>
#include <glut.h>
#include <math.h>

float WinWid = 400, WinHei = 400;
float angle = 0.0, scale = 1.0;
float PI = 3.14159265358979323846;

using namespace std;

void draw()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);
		glColor3f(0.0f, 0.5f, 0.2f);
		glVertex2f(-1, 1);
		glVertex2f(0, 1);
		glVertex2f(0, -1);
		glVertex2f(-1, -1);
	glEnd();

	float x, y, l = 0.6, a = PI * 2 / 100;


	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.7, 0, 0);
		glVertex2f(0.0, 0.0);
		for (int i = -1; i < 100; i++) 
		{
			x = sin(a * i) * l;
			y = cos(a * i) * l;
			glVertex2f(x, y);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	l = 0.5;
	glColor3f(0, 0.5, 0.2);
	glVertex2f(0.0, 0.0);
	for (int i = -1; i < 1000; i++)
	{
		x = sin(a * i) * l + 0.13;
		y = cos(a * i) * l;
		if (x > 0) x = 0;
		glColor3f(0, 0.5, 0.2);
		glVertex2f(x, y);
	}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	l = 0.5;
	glColor3f(1, 1, 1);
	glVertex2f(0.0, 0.0);
	for (int i = -1; i < 1000; i++)
	{
		x = sin(a * i) * l + 0.13;
		y = cos(a * i) * l;
		if (x < 0) x = 0;
		glColor3f(1, 1, 1);
		glVertex2f(x, y);
	}
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.7, 0, 0);

	glVertex2f(0, 0.20);
	glVertex2f(0.13, 0);
	glVertex2f(0.23, 0.13);

	glVertex2f(0, -0.20);
	glVertex2f(0.13, 0);
	glVertex2f(0.23, -0.13);

	glVertex2f(0.27, 0);
	glVertex2f(0.13, 0);
	glVertex2f(0.23, -0.13);

	glVertex2f(0.27, 0);
	glVertex2f(0.13, 0);
	glVertex2f(0.23, 0.13);

	glVertex2f(0.27, 0);
	glVertex2f(0.38, 0.08);
	glVertex2f(0.23, 0.13);

	glVertex2f(0.27, 0);
	glVertex2f(0.38, 0.08);
	glVertex2f(0.38, -0.08);

	glVertex2f(0.27, 0);
	glVertex2f(0.23, -0.13);
	glVertex2f(0.38, -0.08);

	glVertex2f(0.38, -0.08);
	glVertex2f(0.23, -0.13);
	glVertex2f(0.38, -0.31);

	glVertex2f(0.38, 0.08);
	glVertex2f(0.61, 0);
	glVertex2f(0.38, -0.08);

	glVertex2f(0.23, 0.13);
	glVertex2f(0.38, 0.08);
	glVertex2f(0.38, 0.31);
	glEnd();

	glutSwapBuffers();
}

void init() 
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1000, 1000);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("ind 1");
	glutDisplayFunc(draw);
	init();
	glutMainLoop();
	return 0;
}
