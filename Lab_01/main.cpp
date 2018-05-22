#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/

glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (100, 100);
glVertex2d (400, 100);
glVertex2d (400, 400);
glVertex2d (100, 400);
glEnd();


glColor3ub (51, 51, 255);
glBegin(GL_POLYGON);
glVertex2d (200, 100);
glVertex2d (300, 100);
glVertex2d (300, 300);
glVertex2d (200, 300);
glEnd();
  
glColor3ub (204, 0, 0);
glBegin(GL_POLYGON);
glVertex2d (210, 100);
glVertex2d (290, 100);
glVertex2d (290, 290);
glVertex2d (210, 290);
glEnd();

glColor3ub (204, 0, 102);
glBegin(GL_POLYGON);
glVertex2d (100, 400);
glVertex2d (400, 400);
glVertex2d (250, 500);
glEnd();

glColor3ub (255, 0, 0);
glBegin(GL_POLYGON);
glVertex2d (125, 200);
glVertex2d (175, 200);
glVertex2d (175, 275);
glVertex2d (125, 275);
glEnd();

glColor3ub (255, 0, 0);
glBegin(GL_POLYGON);
glVertex2d (325, 200);
glVertex2d (375, 200);
glVertex2d (375, 275);
glVertex2d (325, 275);
glEnd();




glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0, 500, 0, 600);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("hello");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}

