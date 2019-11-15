// LR1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <GL/glut.h>
#define M_PI acos(-1.0)

void Triangle() {
	glColor3ub(255, 255, 0);
	glBegin(GL_TRIANGLES);
	glVertex2f(108, 49);
	glVertex2f(381, 49);
	glVertex2f(245, 382);
	glEnd();

	glColor3ub(0, 255, 128);
	glBegin(GL_TRIANGLES);
	glVertex2f(110, 50);
	glVertex2f(380, 50);
	glVertex2f(245, 380);
	glEnd();
}

void drawCircle(float x, float y, float r, int amountSegments)
{
		glBegin(GL_LINE_LOOP);

		for (int i = 0; i < amountSegments; i++)
		{
			float angle = 2.0 * 3.1415926 * float(i) / float(amountSegments);

			float dx = r * cosf(angle);
			float dy = r * sinf(angle);

			glVertex2f(x + dx, y + dy);
		}
		glEnd();
	
}
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	
	
	glColor3ub(128, 128, 128);
	glBegin(GL_QUADS);
		glVertex2f(90.0, 80.0);
	    glVertex2f(400.0, 80.0);
	    glVertex2f(400.0, 400.0);
		glVertex2f(90.0, 400.0);
		glEnd();
	



		


		glColor3ub(0, 255, 128);

		for(int i=0;i<5;i++)
		drawCircle(240, 400, 80, 50);
		


		glColor3ub(255, 0, 0);
		
		for (float i = 0; i <= 79; i+=0.7) {
			drawCircle(240, 400, i, 50);
		}

		Triangle();

	glFlush();
}


void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(5.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 499.0, 0.0, 499.0);
}

void main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("LR1");
	glutDisplayFunc(display);

	myinit();
	glutMainLoop();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
