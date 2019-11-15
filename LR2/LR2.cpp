// LR2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <GL/glut.h>
#define body 255, 166, 0
#define cube glutSolidCube
#define sphere glutSolidSphere
#define color glColor3ub
#define mainColor color(body);
#define eyeColor color(0, 255, 51);
void resize(int width, int height)
{
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-5, 5, -5, 5, 2, 12);
	gluLookAt(0, 0, 5, 0, 0, 0, 0, 1, 0);
	glMatrixMode(GL_MODELVIEW);
}


void display(void)
{
	glClearColor(0, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glPushMatrix();

	glTranslated(0.5, 4, 0);
	glColor3d(0, 0, 1);
	glutSolidCube(1);          // куб

	glTranslated(0, -2, 0);
	glColor3d(0, 1, 0);
	//glutSolidBox(1, 0.75, 0.5);  // коробка

	glTranslated(0, -2, 0);
	glColor3d(0, 1, 1);
	glutSolidTorus(0.2, 0.5, 1, 1);   // тор

	glTranslated(0, -2, 0);
	glColor3d(1, 0, 0);
	//glutSolidCylinder(0.5, 1);  // цилиндр

	glTranslated(0, -2, 0);
	glColor3d(0, 1, 0);
	glutSolidCone(1, 1, 1, 1);       // конус

	glTranslated(2, 8, 0);
	glColor3d(1, 0, 1);
	glutSolidIcosahedron();  // многогранники

	glTranslated(0, -2, 0);
	glColor3d(1, 1, 1);
	glutSolidOctahedron();

	glTranslated(0, -2, 0);
	glColor3d(0, 1, 1);
	glutSolidTeapot(0.7);      // чайник

	glTranslated(0, -2, 0);
	glColor3d(0, 1, 0);
	glutSolidTetrahedron();

	glTranslated(0, -2, 0);
	glColor3d(1, 1, 0);
	glutSolidDodecahedron();

	glTranslated(-6, 8, 0);
	glColor3d(0, 0, 1);
	glutWireCube(1);          // каркасная модель куба

	glTranslated(0, -2, 0);
	glColor3d(0, 1, 0);
//	glutWireBox(1, 0.75, 0.5);  // каркасная модель параллелограмма

	glTranslated(0, -2, 0);
	glColor3d(0, 1, 1);
	glutWireTorus(0.2, 0.5, 1, 1);   // каркасная модель тора

	glTranslated(0, -2, 0);
	glColor3d(1, 0, 0);
//	glutWireCylinder(0.5, 1); // каркасная модель цилиндра

	glTranslated(0, -2, 0);
	glColor3d(0, 1, 0);
	glutWireCone(1, 1, 1, 1);       // каркасная модель конуса

	glTranslated(2, 8, 0);
	glColor3d(1, 0, 1);
	glutWireIcosahedron(); // каркасные модели многогранников

	glTranslated(0, -2, 0);
	glColor3d(1, 1, 1);
	glutWireOctahedron();

	glTranslated(0, -2, 0);
	glColor3d(0, 1, 1);
	glutWireTeapot(0.7);     // каркасная модель чайника

	glTranslated(0, -2, 0);
	glColor3d(0, 1, 0);
	glutWireTetrahedron();

	glTranslated(0, -2, 0);
	glColor3d(1, 1, 0);
	glutWireDodecahedron();

	glPopMatrix();
	glutSwapBuffers();
}

void martian() {
	glClearColor(0.133,0.168,0.15, 1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glPushMatrix();

	//Праве око
	glTranslated(0.1, 0.4, 0);
	eyeColor
	sphere(0.07, 90, 50);
	
	//Ліве око
	glTranslated(-0.2, 0.0, 0);
	eyeColor
	sphere(0.07, 90, 50);
	 
	//Голова
	glTranslated(0.1, 0.0, 0.5);
	mainColor
	sphere(0.2, 90, 50);

	//Шия
	glTranslated(0, -0.2, 0.5);
	glScaled(0.4, 1.1, 0.1);
	mainColor
	cube(0.2);

	//Тіло
	glTranslated(0, -0.4, 0);
	glScaled(0.9, 0.8, 1);
	mainColor
	sphere(0.5, 50, 8);

	//Ліва нижня лапка
	glTranslated(-0.4, -0.6, 0.1);
	//glScaled(0.9, 1.9, -5);
	//glRotated(190, -10, -10, 80);
	color(171, 162, 145);
	cube(0.2);

	////Права нижня лапка
	//glTranslated(0.3, -0.4, 0.1);
	//glScaled(0.5, 0.5, 0.9);
	////glRotated(69, 100, -10, 80);
	//color(171, 162, 145);
	//sphere(0.2, 90, 50);

	//glTranslated(0.1, 0.1, 0);		//Перемістити
	//glRotated(90,0.1,-0.5,0.1);		//Повернути
	//glScaled(0.1, 0.5, 0.1);		//Змінити розмір
	//glColor3ub(132, 240, 157);		
	//glutSolidCube(0.2);
	//glutSolidTorus(0.08, 0.02, 50, 10);
	
	glPopMatrix();
	glutSwapBuffers();
}
void main()
{
	float pos[4] = { 3,3,3,1 };
	float dir[3] = { -1,-1,-1 };
	float hrenb[4] = { -1,0,-2,0 };
	glutInitWindowPosition(50, 10);
	glutInitWindowSize(400, 400);

	glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);

	glutCreateWindow("LR2");
	glutDisplayFunc(display);
	glutReshapeFunc(resize);
	//glutDisplayFunc(display);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	//glLightfv(GL_LIGHT0, GL_POSITION,hrenb);
	glLightfv(GL_LIGHT0, GL_POSITION, pos);
	glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, dir);
	

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
