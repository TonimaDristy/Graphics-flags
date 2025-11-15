#ifdef __APPLE__
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Full red background
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0, -1.0);
        glVertex2f(1.0, -1.0);
        glVertex2f(1.0, 1.0);
        glVertex2f(-1.0, 1.0);
    glEnd();

    // Horizontal white bar (Denmark)
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex2f(-1.0, -0.10);
        glVertex2f(1.0, -0.10);
        glVertex2f(1.0,  0.10);
        glVertex2f(-1.0,  0.10);
    glEnd();

    // Vertical white bar
    glBegin(GL_POLYGON);
        glVertex2f(-0.30 - 0.10, -1.0);  // left side
        glVertex2f(-0.30 + 0.10, -1.0);  // right side
        glVertex2f(-0.30 + 0.10,  1.0);
        glVertex2f(-0.30 - 0.10,  1.0);
    glEnd();

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
    glutCreateWindow("Denmark Flag");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
