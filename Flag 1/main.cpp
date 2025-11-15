#ifdef __APPLE__
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>


void display() {
    glClear(GL_COLOR_BUFFER_BIT);



    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(-1.0, 0.0);
    glVertex2f(1.0, 0.0);
    glVertex2f(0.0, 1.0);
    glVertex2f(0.0, -1.0);
    glEnd();

    //Draw small square
    glColor3f(0.0, 0.20, 0.80);
    glBegin(GL_POLYGON);
    glVertex2f(-0.60, 1.0);
    glVertex2f(-1.0, 1.0);
    glVertex2f(-1.0, 0.4);
    glVertex2f(-0.60, 0.4);
    glEnd();

    //Draw White cross
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.76, 1.0);
    glVertex2f(-0.86, 1.0);
    glVertex2f(-0.86, 0.4);
    glVertex2f(-0.76, 0.4);
    glEnd();

 //Draw small square
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.60, 0.777);
    glVertex2f(-1.0, 0.777);
    glVertex2f(-1.0, 0.666);
    glVertex2f(-0.60, 0.666);
    glEnd();


    glColor3f(0.0, 0.20, 0.80);
    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.125);
    glVertex2f(-1.0,0.125);
    glVertex2f(-1.0, 0.0);
    glVertex2f(0.0, 0.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.222);
    glVertex2f(-1.0,0.222);
    glVertex2f(-1.0, 0.111);
    glVertex2f(0.0, 0.111);
    glEnd();

  glColor3f(0.0, 0.20, 0.80);
    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.333);
    glVertex2f(-1.0,0.333);
    glVertex2f(-1.0, 0.222);
    glVertex2f(0.0, 0.222);
    glEnd();

  glColor3f(1.0, 1.0, 1.0);
  glBegin(GL_POLYGON);
    glVertex2f(0.0,0.444);
    glVertex2f(-1.0,0.444);
    glVertex2f(-1.0, 0.333);
    glVertex2f(0.0, 0.333);
    glEnd();



   glColor3f(0.0, 0.20, 0.80);
  glBegin(GL_POLYGON);
    glVertex2f(0.0,0.555);
    glVertex2f(-0.60,0.555);
    glVertex2f(-0.60, 0.444);
    glVertex2f(0.0, 0.444);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
  glBegin(GL_POLYGON);
    glVertex2f(0.0,666);
    glVertex2f(-0.60,666);
    glVertex2f(-0.60, 0.555);
    glVertex2f(0.0, 0.555);
    glEnd();

glColor3f(0.0, 0.20, 0.80);
  glBegin(GL_POLYGON);
    glVertex2f(0.0,0.777);
    glVertex2f(-0.60,0.777);
    glVertex2f(-0.60, 0.666);
    glVertex2f(0.0, 0.666);
    glEnd();

     glColor3f(1.0, 1.0, 1.0);
  glBegin(GL_POLYGON);
    glVertex2f(0.0,0.888);
    glVertex2f(-0.60,0.888);
    glVertex2f(-0.60, 0.777);
    glVertex2f(0.0, 0.777);
    glEnd();

    glColor3f(0.0, 0.20, 0.80);
  glBegin(GL_POLYGON);
    glVertex2f(0.0,0.999);
    glVertex2f(-0.60,0.999);
    glVertex2f(-0.60, 0.888);
    glVertex2f(0.0, 0.888);
    glEnd();


    //2nd //blue

    glColor3f(0.0, 0.0,0.80);
   glBegin(GL_POLYGON);
   glVertex2f(1.0,0.0);
    glVertex2f(1.0,0.33);
    glVertex2f(0.5, 0.33);
    glVertex2f(0.5, 0.0);
    glEnd();

     glColor3f(0.0, 0.0,0.80);
      glBegin(GL_POLYGON);
     glVertex2f(0.5, 0.0);
     glVertex2f(0.50, 0.33);
     glVertex2f(0.2, 0.0);
      glEnd();

  //green

  glColor3f(0.0, 0.6,0.0);
      glBegin(GL_POLYGON);
     glVertex2f(1.0, 0.38);
     glVertex2f(1.0, 0.63);
     glVertex2f(0.50, 0.63);
     glVertex2f(0.50, 0.38);
      glEnd();

     glColor3f(0.0,0.6,0.0);
      glBegin(GL_POLYGON);
     glVertex2f(0.50, 0.63);
     glVertex2f(0.15, 1.0);
     glVertex2f(0.0,1.0);
     glVertex2f(0.0, 0.92);
     glVertex2f(0.38, 0.50);
     glVertex2f(0.0, 0.08);
     glVertex2f(0.0,0.0);
     glVertex2f(0.15, 0.0);
      glVertex2f(0.50, 0.38);
      glEnd();

  //red
     glColor3f(2.22,0.15,0.15);
      glBegin(GL_POLYGON);
     glVertex2f(1.0, 0.67);
     glVertex2f(1.0, 1.0);
     glVertex2f(0.5, 1.0);
     glVertex2f(0.5, 0.67);
      glEnd();

      glColor3f(2.22,0.15,0.15);
      glBegin(GL_POLYGON);
     glVertex2f(1.0, 1.0);
     glVertex2f(0.20, 1.0);
     glVertex2f(0.50, 0.67);
      glEnd();
//black
   glColor3f(0.0, 0.0,0.0);
      glBegin(GL_POLYGON);
     glVertex2f(0.0, 0.15);
     glVertex2f(0.32, 0.50);
     glVertex2f(0.0, 0.85);
      glEnd();
//yellow

   glColor3f(2.80,1.90,0.1);
      glBegin(GL_POLYGON);
     glVertex2f(0.38, 0.50);
     glVertex2f(0.0, 0.92);
     glVertex2f(0.0, 0.85);
     glVertex2f(0.32, 0.50);
     glVertex2f(0.0, 0.15);
     glVertex2f(0.0, 0.08);
      glEnd();

//flag 3

    glColor3f(0.0, 0.0,.70);
   glBegin(GL_POLYGON);
   glVertex2f(-1.0,-.4);
    glVertex2f(-1,0.0);
    glVertex2f(-.84, 0.0);
    glVertex2f(-.84, -.4);
    glEnd();


    glColor3f(1.6, 0.0,0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-.68,-.4);
    glVertex2f(-.68,0.0);
    glVertex2f(-.52, 0.0);
    glVertex2f(-.52, -.4);
    glEnd();

     glColor3f(1.12, 0.0,0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-1.0,-.42);
    glVertex2f(-1,-1);
    glVertex2f(-.5, -1);
    glVertex2f(-.5, -.42);
    glEnd();

    glColor3f(1.12, 0.0,0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-.5,-1);
    glVertex2f(-.5,0);
    glVertex2f(0, 0);
    glVertex2f(0, -1);
    glEnd();


  glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.14,-.35);
    glVertex2f(-0.3,-.35);
    glVertex2f(-0.22,-.5);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.22,-.52);
    glVertex2f(-0.14,-.67);
    glVertex2f(-0.3,-.67);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.13,-.36);
    glVertex2f(-0.13,-.66);
    glVertex2f(-0.21,-.51);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.31,-.36);
    glVertex2f(-0.31,-.66);
    glVertex2f(-0.23,-.51);
    glEnd();


//flag 4

    glColor3f(0.6, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(1,0);
    glVertex2f(1,-0.055);
    glVertex2f(.4,-0.055);
    glVertex2f(.32,-0.0);
    glEnd();

    glColor3f(.6, .0, .0);
    glBegin(GL_POLYGON);
    glVertex2f(1,-0.055);
    glVertex2f(.4,-0.055);
    glVertex2f(.32,-0.11);
    glVertex2f(.4,-0.165);
    glVertex2f(1,-0.165);
    glEnd();


     glColor3f(.6, .0, .0);
    glBegin(GL_POLYGON);
    glVertex2f(1,-0.165);
    glVertex2f(.4,-0.165);
    glVertex2f(.32,-0.22);
    glVertex2f(.4,-0.275);
    glVertex2f(1,-0.275);
    glEnd();

    glColor3f(.6, .0, .0);
    glBegin(GL_POLYGON);
    glVertex2f(1,-0.275);
    glVertex2f(.4,-0.275);
    glVertex2f(.32,-0.33);
    glVertex2f(.4,-0.385);
    glVertex2f(1,-0.385);
    glEnd();

   glColor3f(.6, .0, .0);
    glBegin(GL_POLYGON);
    glVertex2f(1,-0.385);
    glVertex2f(.4,-0.385);
    glVertex2f(.32,-0.44);
    glVertex2f(.4,-0.495);
    glVertex2f(1,-0.495);
    glEnd();

    glColor3f(.6, .0, .0);
    glBegin(GL_POLYGON);
    glVertex2f(1,-0.495);
    glVertex2f(.4,-0.495);
    glVertex2f(.32,-0.55);
    glVertex2f(.4,-0.605);
    glVertex2f(1,-0.605);
    glEnd();

    glColor3f(.6, .0, .0);
    glBegin(GL_POLYGON);
    glVertex2f(1,-0.605);
    glVertex2f(.4,-0.605);
    glVertex2f(.32,-0.66);
    glVertex2f(.4,-0.715);
    glVertex2f(1,-0.715);
    glEnd();

     glColor3f(.6, .0, .0);
    glBegin(GL_POLYGON);
    glVertex2f(1,-0.715);
    glVertex2f(.4,-0.715);
    glVertex2f(.32,-0.77);
    glVertex2f(.4,-0.825);
    glVertex2f(1,-0.825);
    glEnd();

    glColor3f(.6, .0, .0);
    glBegin(GL_POLYGON);
    glVertex2f(1,-0.825);
    glVertex2f(.4,-0.825);
    glVertex2f(.32,-0.88);
    glVertex2f(.4,-0.935);
    glVertex2f(1,-0.935);
    glEnd();

     glColor3f(.6, .0, .0);
    glBegin(GL_POLYGON);
    glVertex2f(1,-0.935);
    glVertex2f(.4,-0.935);
    glVertex2f(.32,-1.0);
    glVertex2f(.32,-1.0);
    glVertex2f(1,-1.0);

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
    glutCreateWindow("Flags");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
