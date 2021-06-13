#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    */

    //Home Design Down
    glBegin(GL_QUADS);
    glColor3ub(160,82,45);

    glVertex3i(18,16,0);
    glVertex3i(82,16,0);
    glVertex3i(82,20,0);
    glVertex3i(18,20,0);
    glEnd();


    //Home Design
    glBegin(GL_QUADS);
    glColor3ub(244,164,96);

    glVertex3i(20,20,0);
    glVertex3i(80,20,0);
    glVertex3i(80,55,0);
    glVertex3i(20,55,0);
    glEnd();

    //Door Design
    glBegin(GL_QUADS);
    glColor3ub(210,105,30);

    glVertex3i(42,20,0);
    glVertex3i(58,20,0);
    glVertex3i(58,40,0);
    glVertex3i(42,40,0);
    glEnd();

    //Left Window Design
    glBegin(GL_QUADS);
    glColor3ub(210,105,30);

    glVertex3i(26,36,0);
    glVertex3i(38,36,0);
    glVertex3i(38,46,0);
    glVertex3i(26,46,0);
    glEnd();

    //Right Window Design
    glBegin(GL_QUADS);
    glColor3ub(210,105,30);

    glVertex3i(64,36,0);
    glVertex3i(76,36,0);
    glVertex3i(76,46,0);
    glVertex3i(64,46,0);
    glEnd();

    //Upper Design
    glBegin(GL_TRIANGLES);
    glColor3ub(176,196,222);

    glVertex3i(18,55,0);
    glVertex3i(82,55,0);
    glVertex3i(52,68,0);
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
    glOrtho(0, 100, 0, 100, -10.0, 10.0);
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
    glutInitWindowSize (600, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Lab Activity and Homework");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}

