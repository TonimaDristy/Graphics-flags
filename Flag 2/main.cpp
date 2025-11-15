#ifdef APPLE
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void display() {

    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    //glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
    glVertex2f(-1.0,0.0);
    glVertex2f(1.0, 0.0);
    glVertex2f(0.0, 1.0);
    glVertex2f(0.0, -1.0);
    glEnd();
//Morroco



//red
    glColor3f(0.0f, 0.0f, 1.0f);
    glPushMatrix();
    glColor3f(0.6, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0, 0);
    glVertex2f(-1.0, 0);
    glVertex2f(-1.0, 1);
    glVertex2f(0,01);
    glEnd();
    glPopMatrix();

//star
 //glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.4, 0.0);
    glLineWidth(7.0);
    glBegin(GL_LINES);
    glVertex2f(-0.66,0.6);
    glVertex2f(-0.33,0.6);
    glEnd();


    glColor3f(0.0, 0.4, 0.0);
    glLineWidth(7.0);
    glBegin(GL_LINES);
    glVertex2f(-0.5,0.75);
    glVertex2f(-0.416,0.25);
    glEnd();


    glColor3f(0.0, 0.4, 0.0);
    glLineWidth(7.0);
    glBegin(GL_LINES);
    glVertex2f(-0.416,0.25);
    glVertex2f(-0.66,0.6);
    glEnd();


    glColor3f(0.0, 0.4, 0.0);
    glLineWidth(7.0);
    glBegin(GL_LINES);
    glVertex2f(-0.5,0.75);
    glVertex2f(-0.63,0.25);
    glEnd();


    glColor3f(0.0, 0.4, 0.0);
    glLineWidth(7.0);
    glBegin(GL_LINES);
    glVertex2f(-0.62,0.28);
    glVertex2f(-0.33,0.6);
    glEnd();



    //2nd


    glColor3f(0.1, 0.0, 4.5);
    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.330);
    glVertex2f(1.0,0.330);
    glVertex2f(1.0, 0.0);
    glVertex2f(0.0, 0.0);
    glEnd();

   glColor3f(1.9, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.660);
    glVertex2f(1.0, 0.660);
    glVertex2f(1.0,1.0);
    glVertex2f(0.0,1.0);

    glEnd();

//star

glColor3f(2.90, 2.20, 0.0);
    glLineWidth(7.0);
    glBegin(GL_LINES);
    glVertex2f(0.66,0.6);
    glVertex2f(0.33,0.6);
    glEnd();


    glColor3f(2.90, 2.20, 0.0);
    glLineWidth(7.0);
    glBegin(GL_LINES);
    glVertex2f(0.5,0.75);
    glVertex2f(0.416,0.25);
    glEnd();


    glColor3f(2.90, 2.20, 0.0);
    glLineWidth(7.0);
    glBegin(GL_LINES);
    glVertex2f(0.416,0.25);
    glVertex2f(0.66,0.6);
    glEnd();


    glColor3f(2.20, 2.20, 0.0);
    glLineWidth(7.0);
    glBegin(GL_LINES);
    glVertex2f(0.5,0.75);
    glVertex2f(0.65,0.26);
    glEnd();


    glColor3f(2.90, 2.20, 0.0);
    glLineWidth(7.0);
    glBegin(GL_LINES);
    glVertex2f(0.64,0.28);
    glVertex2f(0.33,0.6);
    glEnd();

//red star
    glColor3f(1.0, 0.0, 0.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.423,0.27);
    glVertex2f(0.66,0.6);
    glVertex2f(0.48,0.6);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.64,0.29);
    glVertex2f(0.55,0.6);
    glVertex2f(0.34,0.6);
    glEnd();


    glColor3f(1.0, 0.0, 0.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.54,0.60);
    glVertex2f(0.5,0.74);
    glVertex2f(0.48,0.60);
    glEnd();


    //3rd

glColor3f(0.0f, 0.0f, 1.0f);
    /*glPushMatrix();*/
    glColor3f(0.6, 0.8, 13.0);
    glBegin(GL_POLYGON);
    glVertex2f(0, -1);
    glVertex2f(0.0, 0);
    glVertex2f(-1.0, 0);
    glVertex2f(-1,-1);
    glEnd();
    /*glPopMatrix();*/

    //star

    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
    glVertex2f(-.42,-0.24);
    glVertex2f(-0.52,-0.24);
    glVertex2f(-0.58,-0.33);
    glEnd();

 glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
    glVertex2f(-.44,-0.34);
     glVertex2f(-0.58,-0.24);
    glVertex2f(-0.5,-0.24);

    glEnd();


glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
    glVertex2f(-.48,-0.25);
     glVertex2f(-0.5,-0.18);
    glVertex2f(-0.53,-0.25);

   glEnd();

   //2nd star

glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
    glVertex2f(-.42,-0.74);
    glVertex2f(-0.52,-0.74);
    glVertex2f(-0.58,-0.83);
    glEnd();


glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
    glVertex2f(-.44,-0.84);
     glVertex2f(-0.58,-0.74);
    glVertex2f(-0.5,-0.74);

    glEnd();


glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
    glVertex2f(-.48,-0.75);
     glVertex2f(-0.5,-0.68);
    glVertex2f(-0.53,-0.75);

   glEnd();

   //3rd star

   glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
    glVertex2f(-.24,-0.59);
    glVertex2f(-0.27,-0.50);
    glVertex2f(-0.35,-0.50);
    glEnd();

glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
    glVertex2f(-.22,-0.50);
     glVertex2f(-0.31,-0.50);
    glVertex2f(-0.33,-0.59);

    glEnd();

glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
    glVertex2f(-.27,-0.50);
     glVertex2f(-.29,-0.42);
    glVertex2f(-0.31,-0.50);

   glEnd();


  //4 star

glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
    glVertex2f(-.69,-0.59);
    glVertex2f(-0.72,-0.50);
    glVertex2f(-0.80,-0.50);
    glEnd();

glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
    glVertex2f(-.67,-0.50);
     glVertex2f(-0.76,-0.50);
    glVertex2f(-0.78,-0.59);

    glEnd();


glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
    glVertex2f(-.72,-0.50);
     glVertex2f(-.74,-0.42);
    glVertex2f(-0.76,-0.50);

   glEnd();


   //flag 4
   //green

   glColor3f(0.0, 0.20, 0.05);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
    glVertex2f(1.0,-1.0);
     glVertex2f(1.0,-0.05);
    glVertex2f(0.05,-1);

   glEnd();


//yellow

glColor3f(1.0, 1.0, 0.05);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
     glVertex2f(0.05,-1.0);
    glVertex2f(1.0,-0.05);
     glVertex2f(0.92,0.0);
    glVertex2f(0.0,-0.90);
    glEnd();


    glColor3f(1.0, 1.0, 0.05);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
     glVertex2f(1,-0.05);
    glVertex2f(1.0,0.0);
     glVertex2f(0.92,0.0);
    glEnd();


     glColor3f(1.0, 1.0, 0.05);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
     glVertex2f(0.05,-1);
    glVertex2f(0.0,-0.90);
     glVertex2f(0,-1.0);
    glEnd();

    //blue

    glColor3f(0.0, 0.0, 0.80);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
     glVertex2f(0.0,-0.90);
    glVertex2f(0.92,0.0);
     glVertex2f(0,0.0);
    glEnd();


//star 1


glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
     glVertex2f(0.30,-0.21);
    glVertex2f(0.23,-0.21);
     glVertex2f(0.21,-0.27);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
     glVertex2f(0.28,-0.27);
    glVertex2f(0.26,-0.21);
     glVertex2f(0.19,-0.21);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
     glVertex2f(0.26,-0.21);
    glVertex2f(0.25,-0.16);
     glVertex2f(0.23,-0.21);
    glEnd();


    //star 2

    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
     glVertex2f(0.45,-0.31);
    glVertex2f(0.38,-0.31);
     glVertex2f(0.36,-0.37);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
     glVertex2f(0.43,-0.37);
    glVertex2f(0.41,-0.31);
     glVertex2f(0.34,-0.31);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
     glVertex2f(0.41,-0.31);
    glVertex2f(0.40,-0.26);
     glVertex2f(0.38,-0.31);
    glEnd();

    //star 3

    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
     glVertex2f(0.45,-0.11);
    glVertex2f(0.38,-0.11);
     glVertex2f(0.36,-0.17);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
     glVertex2f(0.43,-0.17);
    glVertex2f(0.41,-0.11);
     glVertex2f(0.34,-0.11);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
     glVertex2f(0.41,-0.11);
    glVertex2f(0.40,-0.06);
     glVertex2f(0.38,-0.11);
    glEnd();

    //star 4

    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
     glVertex2f(0.15,-0.11);
    glVertex2f(0.08,-0.11);
     glVertex2f(0.06,-0.17);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
     glVertex2f(0.13,-0.17);
    glVertex2f(0.11,-0.11);
     glVertex2f(0.04,-0.11);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
     glVertex2f(0.11,-0.11);
    glVertex2f(0.10,-0.06);
     glVertex2f(0.08,-0.11);
    glEnd();

//star 5

glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
     glVertex2f(0.15,-0.31);
    glVertex2f(0.08,-0.31);
     glVertex2f(0.06,-0.37);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
     glVertex2f(0.13,-0.37);
    glVertex2f(0.11,-0.31);
     glVertex2f(0.04,-0.31);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(7.0);
    glBegin(GL_POLYGON);
     glVertex2f(0.11,-0.31);
    glVertex2f(0.10,-0.26);
     glVertex2f(0.08,-0.31);
    glEnd();




  glFlush();
    /*glutSwapBuffers();*/

}


void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 400);
    glutInitWindowPosition(80, 50);
    glutCreateWindow("Flags");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
