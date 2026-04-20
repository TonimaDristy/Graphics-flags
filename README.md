I created multiple country flags using OpenGL/GLUT in C++.
I built every flag manually using 2D coordinate geometry, polygons (GL_POLYGON), lines, and precise color values selected with a color picker. Each shape and section was drawn using exact (x, y) coordinates inside glBegin() and glVertex2f() — a great exercise in accuracy, logic, and patience.
I also used:
 🔹 glColor3f() to define custom RGB color values
 🔹 gluOrtho2D() to set up the 2D projection
 🔹 glClearColor() to set the background
 Demo;
 [Flag 1](https://github.com/TonimaDristy/Graphics-flags/blob/main/Screenshot%202026-04-20%20230355.png) , [Flag 2]() 
