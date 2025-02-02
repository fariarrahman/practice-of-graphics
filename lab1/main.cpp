#include <windows.h>
#include <GL/gl.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h


void display() {


    glClearColor(0.5f, 0.5f, 0.5f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    /*glPointSize(20.0);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(250,250);

	glColor3f(0.0f, 1.0f, 0.0f); // green
	glVertex2f(-250,-250);

	glColor3f(0.247f,0.686f, 0.478f); // blue
	glVertex2f(0,0);

    glEnd();*/


    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-600,0);
    glVertex2f(600,0);

    glVertex2f(0,-300);
    glVertex2f(0,300);

    glEnd();

             //triangle
            glBegin(GL_TRIANGLES);
            glColor3f(1.0f, 0.0f, 0.0f);
            glVertex2f(-400,50);
            glVertex2f(-250,250);
            glVertex2f(-100,50);
            glEnd();

             //quads
             glBegin(GL_QUADS);
             glColor3f(0.0f, 1.0f, 0.0f);
             glVertex2f(-400,-50);
             glVertex2f(-400,-250);
             glVertex2f(-100,-250);
             glVertex2f(-100,-50);
             glEnd();


        //polygon
       glBegin(GL_POLYGON);
       glColor3f(0.0f, 0.0f, 1.0f);
       glVertex2f(150,275);
       glVertex2f(225,225);
       glVertex2f(225,125);
       glVertex2f(150,75);
       glVertex2f(75,125);
       glVertex2f(75,225);
       glEnd();

       //triangle

       glBegin(GL_TRIANGLES);
            glColor3f(1.0f, 0.0f, 0.70f);
            glVertex2f(400,-50);
            glVertex2f(250,-250);
            glVertex2f(100,-50);
           glEnd();


     glFlush(); // Render now

    }


void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-600,600,-300,300);
}


/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1200,600); // Set the window's initial width & height
    glutInitWindowPosition(30,20);  // Set the window's initial position according to the monitor
    glutCreateWindow("LABTASK1"); // Create a window with the given title
    init();
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
