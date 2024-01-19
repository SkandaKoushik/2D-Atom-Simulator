
#include <windows.h>
#include <GL/glut.h>
#include "Functions.h"
#include "Details.h"


void home()
{
    headText(380, 600, "Maharaja Institute of Technology, Mysore");
    headText(330, 550, "Department of Computer Science and Engineering");

    normalText(450, 450, "Computer Graphics Mini Project on ");
    headText(520, 410, "Atom Simulator");

    headText(530,300, "Project By: ");
    headText(180, 250, "Skanda S Koushik - 4MH20CS092");
    headText(650, 250, "Sriram Kashyap - 4MH20CS094");

    headText(470, 150, "Press Enter to Continue");
    headText(435, 100, "Press Space to Start Simulation");
}

void hydrogen()
{
    headText(500, 660, "HYDROGEN : H");

    FilledCircle(350.0f, 325.0f, 50.0f);

    Circle(350.0f, 325.0f, 175.0f);

    rotatingCircle(350.0f, 325.0f, 175.0f, 0);

    detailText(1);
}


void helium()
{
    headText(500, 660, "HELIUM : He");

    FilledCircle(350.0f, 325.0f, 50.0f);

    Circle(350.0f, 325.0f, 175.0f);

    rotatingCircle(350.0f, 325.0f, 175.0f, 0);
    rotatingCircle(350.0f, 325.0f, 175.0f, 3.1);

    detailText(2);
}


void lithium()
{
    headText(500, 660, "LITHIUM : Li");

    FilledCircle(350.0f, 325.0f, 50.0f);

    Circle(350.0f, 325.0f, 125.0f);
    Circle(350.0f, 325.0f, 250.0f);

    rotatingCircle(350.0f, 325.0f, 125.0f, 0);
    rotatingCircle(350.0f, 325.0f, 125.0f, 3.1);

    rotatingCircle(350.0f, 325.0f, 250.0f, 1.55);

    detailText(3);


}


void beryllium()
{
    headText(500, 660, "BERYLLIUM : Be");

    FilledCircle(350.0f, 325.0f, 50.0f);

    Circle(350.0f, 325.0f, 125.0f);
    Circle(350.0f, 325.0f, 250.0f);

    rotatingCircle(350.0f, 325.0f, 125.0f, 0);
    rotatingCircle(350.0f, 325.0f, 125.0f, 3.1);

    rotatingCircle(350.0f, 325.0f, 250.0f, 1.55);
    rotatingCircle(350.0f, 325.0f, 250.0f, -1.55);

    detailText(4);
}


void boron()
{
    headText(500, 660, "BORON : B");

    FilledCircle(350.0f, 325.0f, 50.0f);

    Circle(350.0f, 325.0f, 125.0f);
    Circle(350.0f, 325.0f, 250.0f);

    rotatingCircle(350.0f, 325.0f, 125.0f, 0);
    rotatingCircle(350.0f, 325.0f, 125.0f, 3.1);

    rotatingCircle(350.0f, 325.0f, 250.0f, 0.775);
    rotatingCircle(350.0f, 325.0f, 250.0f, 2.325);
    rotatingCircle(350.0f, 325.0f, 250.0f, -0.775);

    detailText(5);
}


void carbon()
{
    headText(500, 660, "CARBON : C");

    FilledCircle(350.0f, 325.0f, 50.0f);

    Circle(350.0f, 325.0f, 125.0f);
    Circle(350.0f, 325.0f, 250.0f);

    rotatingCircle(350.0f, 325.0f, 125.0f, 0);
    rotatingCircle(350.0f, 325.0f, 125.0f, 3.1);

    rotatingCircle(350.0f, 325.0f, 250.0f, 0.775);
    rotatingCircle(350.0f, 325.0f, 250.0f, 2.325);
    rotatingCircle(350.0f, 325.0f, 250.0f, -2.325);
    rotatingCircle(350.0f, 325.0f, 250.0f, -0.775);

    detailText(6);
}


void nitrogen()
{
    headText(500, 660, "NITROGEN : N");
    FilledCircle(350.0f, 325.0f, 50.0f);

    Circle(350.0f, 325.0f, 125.0f);
    Circle(350.0f, 325.0f, 250.0f);

    rotatingCircle(350.0f, 325.0f, 125.0f, 0);
    rotatingCircle(350.0f, 325.0f, 125.0f, 3.1);

    rotatingCircle(350.0f, 325.0f, 250.0f, 0.775);
    rotatingCircle(350.0f, 325.0f, 250.0f, 1.55);
    rotatingCircle(350.0f, 325.0f, 250.0f, 2.325);
    rotatingCircle(350.0f, 325.0f, 250.0f, -2.325);
    rotatingCircle(350.0f, 325.0f, 250.0f, -0.775);

    detailText(7);
}


void oxygen()
{
    headText(500, 660, "OXYGEN : O");

    FilledCircle(350.0f, 325.0f, 50.0f);

    Circle(350.0f, 325.0f, 125.0f);
    Circle(350.0f, 325.0f, 250.0f);

    rotatingCircle(350.0f, 325.0f, 125.0f, 0);
    rotatingCircle(350.0f, 325.0f, 125.0f, 3.1);

    rotatingCircle(350.0f, 325.0f, 250.0f, 0.775);
    rotatingCircle(350.0f, 325.0f, 250.0f, 1.55);
    rotatingCircle(350.0f, 325.0f, 250.0f, 2.325);
    rotatingCircle(350.0f, 325.0f, 250.0f, -2.325);
    rotatingCircle(350.0f, 325.0f, 250.0f, -1.55);
    rotatingCircle(350.0f, 325.0f, 250.0f, -0.775);


    detailText(8);
}


void fluorine()
{
    headText(500, 660, "FLUORINE : F");

    FilledCircle(350.0f, 325.0f, 50.0f);

    Circle(350.0f, 325.0f, 125.0f);
    Circle(350.0f, 325.0f, 250.0f);

    rotatingCircle(350.0f, 325.0f, 125.0f, 0);
    rotatingCircle(350.0f, 325.0f, 125.0f, 3.1);

    rotatingCircle(350.0f, 325.0f, 250.0f, 0.775);
    rotatingCircle(350.0f, 325.0f, 250.0f, 1.55);
    rotatingCircle(350.0f, 325.0f, 250.0f, 2.325);
    rotatingCircle(350.0f, 325.0f, 250.0f, 3.1);
    rotatingCircle(350.0f, 325.0f, 250.0f, -2.325);
    rotatingCircle(350.0f, 325.0f, 250.0f, -1.55);
    rotatingCircle(350.0f, 325.0f, 250.0f, -0.775);

    detailText(9);
}


void neon()
{
    headText(500, 660, "NEON : Ne");

    FilledCircle(350.0f, 325.0f, 50.0f);

    Circle(350.0f, 325.0f, 125.0f);
    Circle(350.0f, 325.0f, 250.0f);

    rotatingCircle(350.0f, 325.0f, 125.0f, 0);
    rotatingCircle(350.0f, 325.0f, 125.0f, 3.1);

    rotatingCircle(350.0f, 325.0f, 250.0f, 0);
    rotatingCircle(350.0f, 325.0f, 250.0f, 0.775);
    rotatingCircle(350.0f, 325.0f, 250.0f, 1.55);
    rotatingCircle(350.0f, 325.0f, 250.0f, 2.325);
    rotatingCircle(350.0f, 325.0f, 250.0f, 3.1);
    rotatingCircle(350.0f, 325.0f, 250.0f, -2.325);
    rotatingCircle(350.0f, 325.0f, 250.0f, -1.55);
    rotatingCircle(350.0f, 325.0f, 250.0f, -0.775);

    detailText(10);
}
