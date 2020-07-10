#include<Windows.h>
#include<gl/glut.h>

void init(void);
void tampil(void);
void keyboard(unsigned char, int,int);
void ukuran(int,int);

int is_depth;

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(250, 80);
	glutCreateWindow("Tama Pramindo - 672018169");
	init();
	glutDisplayFunc(tampil);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(ukuran);
	glutMainLoop();
	return 0;

}

void init(void)
{
	glClearColor (0.5,0.5,0.5,0.5);
	glMatrixMode(GL_PROJECTION);
	glEnable(GL_DEPTH_TEST);
	is_depth=1;
	glMatrixMode(GL_MODELVIEW);
	glPointSize(9.0);
	glLineWidth(6.0f);
}

void tampil (void)
{
	if (is_depth)
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	else
	glClear(GL_COLOR_BUFFER_BIT);
	
	
	//pintu
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0,0.0,0.0);
	glVertex3f(-15.0,-25.0,10.0);
	glVertex3f(-15.0,4.0,10.0);
	glVertex3f(-0.0,4.0,10.0);
	glVertex3f(-0.0,-25.0,10.0);
	glEnd();
	
	//pintu
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0,0.0,0.0);
	glVertex3f(-13.0,-8.0,10.0);
	glVertex3f(-13.0,-6.0,10.0);
	glEnd();

	//pintu
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-15.0,-25.0,10.0);
	glVertex3f(-15.0,4.0,10.0);
	glVertex3f(-0.0,4.0,10.0);
	glVertex3f(-0.0,-25.0,10.0);
	glEnd();
	
	//jendela
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-40.0,-15.0,10.0);
	glVertex3f(-40.0,4.0,10.0);
	glVertex3f(-30.0,4.0,10.0);
	glVertex3f(-30.0,-15.0,10.0);
	glEnd();
	
	//jendela
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0,0.0,0.0);
	glVertex3f(-40.0,-15.0,10.0);
	glVertex3f(-40.0,4.0,10.0);
	glVertex3f(-30.0,4.0,10.0);
	glVertex3f(-30.0,-15.0,10.0);
	glVertex3f(-40.0,-15.0,10.0);
	glEnd();
	
	//jendela
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(10.0,-15.0,10.0);
	glVertex3f(10.0,4.0,10.0);
	glVertex3f(20.0,4.0,10.0);
	glVertex3f(20.0,-15.0,10.0);
	glEnd();
	
	//jendela
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0,0.0,0.0);
	glVertex3f(10.0,-15.0,10.0);
	glVertex3f(10.0,4.0,10.0);
	glVertex3f(20.0,4.0,10.0);
	glVertex3f(20.0,-15.0,10.0);
	glVertex3f(10.0,-15.0,10.0);
	glEnd();
	
	
	//depan
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(-50.0,-25.0,10.0);
	glVertex3f(-50.0,10.0,10.0);
	glVertex3f(30.0,10.0,10.0);
	glVertex3f(30.0,-25.0,10.0);
	glEnd();
	
	
	//belakang jendela
	glBegin(GL_QUADS);
	glColor3f(1.0,0.0,0.0);
	glVertex3f(10.0,-15.0,-35.0);
	glVertex3f(10.0,4.0,-35.0);
	glVertex3f(20.0,4.0,-35.0);
	glVertex3f(20.0,-15.0,-35.0);
	glEnd();
	
	//belakang jendela
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0,1.0,0.0);
	glVertex3f(10.0,-15.0,-35.0);
	glVertex3f(10.0,4.0,-35.0);
	glVertex3f(20.0,4.0,-35.0);
	glVertex3f(20.0,-15.0,-35.0);
	glVertex3f(10.0,-15.0,-35.0);
	glEnd();

	//belakang
	glBegin(GL_QUADS);
	glColor3f(1.0,1.0,0.0);
	glVertex3f(-50.0,-25.0,-35.0);
	glVertex3f(-50.0,10.0,-35.0);
	glVertex3f(30.0,10.0,-35.0);
	glVertex3f(30.0,-25.0,-35.0);
	glEnd();
	
	//belakang jendela
	glBegin(GL_QUADS);
	glColor3f(1.0,0.0,0.0);
	glVertex3f(30.0,-25.0,-35.0);
	glVertex3f(30.0,5.0,-25.0);
	glVertex3f(15.0,5.0,-25.0);
	glVertex3f(15.0,-25.0,-25.0);
	glEnd();
	
	//belakang jendela
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(30.0,-25.0,-35.0);
	glVertex3f(30.0,5.0,-25.0);
	glVertex3f(15.0,5.0,-25.0);
	glVertex3f(15.0,-25.0,-25.0);
	glEnd();
	
	//belakang jendela
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(27.0,-7.0,-35.0);
	glVertex3f(27.0,-5.0,-25.0);
	glEnd();
	
		//belakang jendela
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(25.0,-25.0,-35.0);
	glVertex3f(24.0,5.0,-25.0);
	glVertex3f(25.0,-25.0,-35.0);
	glEnd();
	
	//jendela kanan
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0,0.0,0.0);
	glVertex3f(30.0,4.0,-10.0);
	glVertex3f(30.0,-15.0,-10.0);
	glVertex3f(30.0,-15.0,-25.0);
	glVertex3f(30.0,4.0,-25.0);
	glVertex3f(30.0,4.0,-10.0);
	glEnd();
	
	//jendela kanan
	glBegin(GL_QUADS);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(30.0,4.0,-10.0);
	glVertex3f(30.0,-15.0,-10.0);
	glVertex3f(30.0,-15.0,-25.0);
	glVertex3f(30.0,4.0,-25.0);
	glEnd();

	//kanan
	glBegin(GL_QUADS);
	glColor3f(1.5,1.5,0.5);
	glVertex3f(30.0,10.0,10.0);
	glVertex3f(30.0,-25.0,10.0);
	glVertex3f(30.0,-25.0,-35.0);
	glVertex3f(30.0,10.0,-35.0);
	glEnd();


	//jendela kiri
	glBegin(GL_QUADS);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-50.0,4.0,-10.0);
	glVertex3f(-50.0,-15.0,-10.0);
	glVertex3f(-50.0,-15.0,-25.0);
	glVertex3f(-50.0,4.0,-25.0);
	glEnd();
	
	//jendela kiri
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0,0.0,0.0);
	glVertex3f(-50.0,4.0,-10.0);
	glVertex3f(-50.0,-15.0,-10.0);
	glVertex3f(-50.0,-15.0,-25.0);
	glVertex3f(-50.0,4.0,-25.0);
	glEnd();

	//kiri
	glBegin(GL_QUADS);
	glColor3f(1.5,1.5,0.5);
	glVertex3f(-50.0,10.0,10.0);
	glVertex3f(-50.0,-25.0,10.0);
	glVertex3f(-50.0,-25.0,-35.0);
	glVertex3f(-50.0,10.0,-35.0);
	glEnd();

	//atas kiri
	glBegin(GL_QUADS);
	glColor3f(0.5,1.5,1.5);
	glVertex3f(-50,10.0,30.0);
	glVertex3f(-50,10.0,-50.0);
	glVertex3f(-30,20.0,-30.0);
	glVertex3f(-30,20.0,10.0);
	glEnd();
	
	//atas kiri
	glBegin(GL_QUADS);
	glColor3f(0.0,0.5,0.5);
	glVertex3f(22,10.0,30.0);
	glVertex3f(20,10.0,30.0);
	glVertex3f(20,-25.0,30.0);
	glVertex3f(22,-25.0,30.0);
	glEnd();
	
	//atas kiri
	glBegin(GL_QUADS);
	glColor3f(0.0,0.5,0.5);
	glVertex3f(-40,10.0,30.0);
	glVertex3f(-38,10.0,30.0);
	glVertex3f(-38,-25.0,30.0);
	glVertex3f(-40,-25.0,30.0);
	glEnd();
	

	
	//atas kanan
	glBegin(GL_QUADS);
	glColor3f(0.5,1.5,1.5);
	glVertex3f(30,10.0,30.0);
	glVertex3f(30,10.0,-50.0);
	glVertex3f(5,20.0,-30.0);
	glVertex3f(5,20.0,10.0);
	glEnd();
	
	//atas depan
	glBegin(GL_QUADS);
	glColor3f(0.0,1.5,1.0);
	glVertex3f(-50,10.0,30.0);
	glVertex3f(-30,20.0,10.0);
	glVertex3f(5,20.0,10.0);
	glVertex3f(30,10.0,30.0);
	glEnd();
	
	//atas belakang
	glBegin(GL_QUADS);
	glColor3f(0.0,1.5,1.0);
	glVertex3f(-30,20.0,-30.0);
	glVertex3f(5,20.0,-30.0);
	glVertex3f(30,10.0,-50.0);
	glVertex3f(-50,10.0,-50.0);
	glEnd();
	
	//atas tutup
	glBegin(GL_QUADS);
	glColor3f(0.9,1.9,1.9);
	glVertex3f(-30,20.0,10.0);
	glVertex3f(-30,20.0,-30.0);
	glVertex3f(5,20.0,-30.0);
	glVertex3f(5,20.0,10.0);
	glEnd();


	//atas biru
	glBegin(GL_QUADS);
	glColor3f(0.0,0.5,1.0);
	glVertex3f(-50,10.0,30.0);
	glVertex3f(-50,10.0,-50.0);
	glVertex3f(30,10.0,-50.0);
	glVertex3f(30,10.0,30.0);
	glEnd();
	
	//bawah banget
	glBegin(GL_QUADS);
	glColor3f(0.5,0.5,1.5);
	glVertex3f(-50,-25.0,45.0);
	glVertex3f(30,-25.0,45.0);
	glVertex3f(30,-25.0,-35.0);
	glVertex3f(-50,-25.0,-35.0);
	glEnd();
	
	//bawah
	glBegin(GL_QUADS);
	glColor3f(0.0,0.5,0.0);
	glVertex3f(-50,-25.0,10.0);
	glVertex3f(30,-25.0,10.0);
	glVertex3f(30,-25.0,-35.0);
	glVertex3f(-50,-25.0,-35.0);
	glEnd();
	
	glPushMatrix();
	glPopMatrix();
	
	glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y)
{
	switch(key)
	{
		//w/W= zoom in
		case 'w':
		case 'W':
			glTranslatef(0.0,0.0,0.3);
			break;
		//d/D= menarik rotasi dari samping kiri kekanan rumah
		case 'd':
		case 'D':
			glTranslatef(3.0,0.0,0.0);
			break;
		//s/S= zoom out
		case 's':
		case 'S':
			glTranslatef(0.0,0.0,-3.0);
			break;
		//a/A= menarik rotasi dari samping kanan kekiri rumah
		case 'a':
		case 'A':
			glTranslatef(-3.0,0.0,0.0);
			break;
		//7= menarik rotasi dari bawah keatas rumah
		case '7':
			glTranslatef(0.0,3.0,0.0);
			break;
		//9= menarik rotasi dari atas kebawah rumah
		case '9':
		glTranslatef(0.0,-3.0,0.0);
		break;
		//2= putar dari bawah keatas
		case '2':
		glRotatef(2.0,1.0,0.0,0.0);
		break;
		//8= putar dari atas kebawah
		case '8':
		glRotatef(-2.0,1.0,0.0,0.0);
		break;
		//6= putar dari kanan kekiri
		case '6':
		glRotatef(2.0,0.0,1.0,0.0);
		break;
		//4= putar dari kiri kekanan
		case '4':
		glRotatef(-2.0,0.0,1.0,0.0);
		break;
		//1=memutar objek kekiri 1 sudut pandang
		case '1':
		glRotatef(2.0,0.0,0.0,1.0);
		break;
		//3=memutar objek kekanan 1 sudut pandang
		case '3':
		glRotatef(-2.0,0.0,0.0,1.0);
		break;
		//5=transparan
		case '5':
		if (is_depth)
		{
			is_depth = 0;
			glDisable(GL_DEPTH_TEST);
		}
		else{
			is_depth = 1;
			glEnable(GL_DEPTH_TEST);
		}
		
	}
	tampil();
}

void ukuran(int lebar, int tinggi)
{
	if (tinggi == 0) tinggi = 1;
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(50.0, lebar / tinggi, 5.0, 500.0);
	glTranslatef(0.0,-5.0,-150.0);
	glMatrixMode(GL_MODELVIEW);
}
