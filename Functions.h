
#include <Windows.h>
#include <gl/glut.h>
#include <cmath>


float angle = 0;


// Function to draw a filled circle
void FilledCircle(float cenX, float cenY, float rad)
{
    glColor3f(1.0f, 0.0f, 0.0f);	// Red

    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(cenX, cenY);

        for (int i = 0; i <= 360; i++)
        {
            float theta = 2.0f * 3.14159f * float(i) / 360;
            float x = cenX + rad * cos(theta);
            float y = cenY + rad * sin(theta);

            glVertex2f(x, y);
        }
    glEnd();
}



// Function to draw a circle
void Circle(float cenX, float cenY, float rad)
{
    glColor3f(0.0f, 0.0f, 1.0f);    //Blue

    glBegin(GL_LINE_LOOP);
        for (int i = 0; i <= 360; i++)
        {
            float theta = 2.0f * 3.14159f * float(i) / 360;
            float x = cenX + rad * cos(theta);
            float y = cenY + rad * sin(theta);

            glVertex2f(x, y);
        }
    glEnd();
}



// Function to draw a filled circle
void rotatingCircle(float radX, float radY, float Rad, float ang)
{
    glColor3f(0.0f, 1.0f, 0.0f);  // Green

    // Calculate the position of the first rotating circle
    float centerX = radX + Rad * cos(angle + ang);
    float centerY = radY + Rad * sin(angle + ang);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(centerX, centerY);
    for (int i = 0; i <= 360; i++)
    {
        float theta = 2.0f * 3.14159f * float(i) / 360;
        float x = centerX + 10.0 * cos(theta);
        float y = centerY + 10.0 * sin(theta);
        glVertex2f(x, y);
    }
    glEnd();
}



// Spinning Angle
void Spin()
{
    angle = angle + 0.005;
    if(angle > 360)
        angle = 0;
    Sleep(1);
    glutPostRedisplay();    // Mark the window for redrawing
}



