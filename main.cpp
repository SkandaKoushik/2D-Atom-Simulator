
#include <windows.h>
#include <GL/glut.h>
#include "Models.h"


int val = 0;
int mainmenu;
int motion = 0;

void Draw()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    switch(val)
    {
        case 0: home(); break;
        case 1: hydrogen(); break;
        case 2: helium(); break;
        case 3: lithium(); break;
        case 4: beryllium(); break;
        case 5: boron(); break;
        case 6: carbon(); break;
        case 7: nitrogen(); break;
        case 8: oxygen(); break;
        case 9: fluorine(); break;
        case 10: neon(); break;
        case 11: exit(0);
    }

    glFlush();
}


void keyboard(unsigned char key, int x, int y)
{
    if(key == 'q' || key == 'Q' || key == 27)   // Escape
        exit(0);

    if(key == 13)   // Enter
    {
        if(val == 0)
            val = 1;
    }

    if(key == 'h' || key == 'H')
        val = 0;

    if(key == 32)   // Space
    {
        if(motion == 0)
        {
            glutIdleFunc(Spin);
            motion = 1;
        }
        else
        {
            glutIdleFunc(NULL);
            motion = 0;
        }
    }

    if(key == 'r' || key == 'R')
        glutReshapeWindow(1150, 700);

    glutPostRedisplay();
}


void specialKey(int key, int x, int y)
{
    switch(key)
    {
    case GLUT_KEY_RIGHT:
        val++;
        if(val > 10)
            val = 10;
        break;

    case GLUT_KEY_LEFT:
        val--;
        if(val < 1)
            val = 1;
        break;
    }
    glutPostRedisplay();
}


void menu(int i)
{
    val = i;
    glutPostRedisplay();
}


void createMenu(void)
{
    mainmenu = glutCreateMenu(menu);
    glutAddMenuEntry("Go Home",0);
    glutAddMenuEntry("Hydrogen", 1);
    glutAddMenuEntry("Helium", 2);
    glutAddMenuEntry("Lithium", 3);
    glutAddMenuEntry("Beryllium", 4);
    glutAddMenuEntry("Boron", 5);
    glutAddMenuEntry("Carbon", 6);
    glutAddMenuEntry("Nitrogen", 7);
    glutAddMenuEntry("Oxygen", 8);
    glutAddMenuEntry("Fluorine", 9);
    glutAddMenuEntry("Neon", 10);
    glutAddMenuEntry("Exit",11);

    glutAttachMenu(GLUT_RIGHT_BUTTON);
}


// Main function
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1150, 700);
    glutInitWindowPosition(50, 50);

    glutCreateWindow("2D Atom with Details");

    gluOrtho2D(0, 1150, 0, 700);

    glutDisplayFunc(Draw);
    glutKeyboardFunc(keyboard);
    glutSpecialFunc(specialKey);
    createMenu();

    glutMainLoop();
    return 0;
}


