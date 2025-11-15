
#ifdef __APPLE__
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>


void display() {
    glClear(GL_COLOR_BUFFER_BIT);

glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2f(-1.0, 0.0);
    glVertex2f(1.0, 0.0);
    glVertex2f(0.0, 1.0);
    glVertex2f(0.0, -1.0);
    glEnd();

//side line
glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-.96,0.0);
    glVertex2f(-.96,1.0);
    glVertex2f(-1.0, 1.0);
    glVertex2f(-1.0,0.0);
    glEnd();

glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(0.0,1.0);
    glVertex2f(-0.04, 1.0);
    glVertex2f(-0.04,0.0);
    glEnd();

//square


glColor3f(0.0, 0.0, 0.70);
    glBegin(GL_POLYGON);
    glVertex2f(-0.63,0.50);
    glVertex2f(-0.63,1.0);
    glVertex2f(-0.96, 1.0);
    glVertex2f(-0.96,0.50);
    glEnd();
//star
glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.67,0.80);
    glVertex2f(-0.84,0.80);
    glVertex2f(-0.89, 0.60);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.72,0.60);
    glVertex2f(-0.78,0.80);
    glVertex2f(-0.92, 0.80);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.78,0.80);
    glVertex2f(-0.80,0.91);
    glVertex2f(-0.83, 0.80);
    glEnd();

    //lines


glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.04,0.0);
    glVertex2f(-0.04,0.08);
    glVertex2f(-0.96, 0.08);
    glVertex2f(-0.96,0.0);
    glEnd();

glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.04,0.08);
    glVertex2f(-0.04,0.16);
    glVertex2f(-0.96, 0.16);
    glVertex2f(-0.96,0.08);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.04,0.16);
    glVertex2f(-0.04,0.24);
    glVertex2f(-0.96, 0.24);
    glVertex2f(-0.96,0.16);
    glEnd();

     glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.04,0.32);
    glVertex2f(-0.04,0.40);
    glVertex2f(-0.96, 0.40);
    glVertex2f(-0.96,0.32);
    glEnd();



glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.04,0.50);
    glVertex2f(-0.04,0.58);
    glVertex2f(-0.63, 0.58);
    glVertex2f(-0.63,0.50);
    glEnd();


glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.04,0.66);
    glVertex2f(-0.04,0.74);
    glVertex2f(-0.63, 0.74);
    glVertex2f(-0.63,0.66);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.04,0.82);
    glVertex2f(-0.04,0.90);
    glVertex2f(-0.63, 0.90);
    glVertex2f(-0.63,0.82);
    glEnd();



//Flag 2
//blue






    glFlush();


}

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 300);
    glutInitWindowPosition(400, 50);
    glutCreateWindow("Flags");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
