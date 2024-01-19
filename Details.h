
#include <windows.h>
#include <GL/glut.h>
#include <cmath>
#include <stdio.h>
#include <string.h>


const char* atNo[] = {"", "Atomic Number: 01",
                            "Atomic Number: 02",
                            "Atomic Number: 03",
                            "Atomic Number: 04",
                            "Atomic Number: 05",
                            "Atomic Number: 06",
                            "Atomic Number: 07",
                            "Atomic Number: 08",
                            "Atomic Number: 09",
                            "Atomic Number: 10"};


const char* atMass[] = {"", "Atomic Mass: 1.0080 u",
                            "Atomic Mass: 4.0026 u",
                            "Atomic Mass: 7.00 u",
                            "Atomic Mass: 9.0122 u",
                            "Atomic Mass: 10.81 u",
                            "Atomic Mass: 12.011 u",
                            "Atomic Mass: 14.007",
                            "Atomic Mass: 15.999 u",
                            "Atomic Mass: 18.9984 u",
                            "Atomic Mass: 20.180 u"};


const char* oxState[] = {"", "Oxidation State: +1, -1",
                            "Oxidation State: 0",
                            "Oxidation State: +1",
                            "Oxidation State: +2",
                            "Oxidation State: +3",
                            "Oxidation State: +4, -2 ,-4",
                            "Oxidation State: +5,+4,+3,+2,+1,-1,-2,-3",
                            "Oxidation State: -2",
                            "Oxidation State: -1",
                            "Oxidation State: 0"};


const char* CGB[] = {"", "Chemical Group Block: Non-metal",
                        "Chemical Group Block: Noble Gas",
                        "Chemical Group Block: Alkali Metal",
                        "Chemical Group Block: Alkaline Earth Metal",
                        "Chemical Group Block: Metalloid",
                        "Chemical Group Block: Non-metal",
                        "Chemical Group Block: Non-metal",
                        "Chemical Group Block: Non-metal",
                        "Chemical Group Block: Halogen",
                        "Chemical Group Block: Noble Gas"};


const char* atRad[] = {"", "Atomic Radius: 120 pm",
                            "Atomic Radius: 140 pm",
                            "Atomic Radius: 182 pm",
                            "Atomic Radius: 153 pm",
                            "Atomic Radius: 192 pm",
                            "Atomic Radius: 170 pm",
                            "Atomic Radius: 155 pm",
                            "Atomic Radius: 152 pm",
                            "Atomic Radius: 135 pm",
                            "Atomic Radius: 154 pm"};


const char* ionEg[] = {"", "Ionization Energy: 13.598 eV",
                            "Ionization Energy: 24.587 eV",
                            "Ionization Energy: 5.392 eV",
                            "Ionization Energy: 9.323 eV",
                            "Ionization Energy: 8.298 eV",
                            "Ionization Energy: 11.260 eV",
                            "Ionization Energy: 14.534 eV",
                            "Ionization Energy: 13.618 eV",
                            "Ionization Energy: 17.423 eV",
                            "Ionization Energy: 21.565 eV"};

const char* mp[] = {"", "Melting Point: 13.81 K",
                        "Melting Point: 0.97 K",
                        "Melting Point: 453.65 K",
                        "Melting Point: 1560 K",
                        "Melting Point: 2348 K",
                        "Melting Point: 3823 K",
                        "Melting Point: 63.15 K",
                        "Melting Point: 54.36 K",
                        "Melting Point: 53.53 K",
                        "Melting Point: 24.06 K"};


const char* bp[] = {"", "Boiling Point: 20.28 K",
                        "Boiling Point: 4.22 K",
                        "Boiling Point: 1615 K",
                        "Boiling Point: 2744 K",
                        "Boiling Point: 4273 K",
                        "Boiling Point: 4098 K",
                        "Boiling Point: 77.36 K",
                        "Boiling Point: 90.20 K",
                        "Boiling Point: 85.03 K",
                        "Boiling Point: 27.07 K"};


const char* den[] = {"", "Density: 0.08988 mg/cm^3",
                            "Density: 0.1785 mg/cm^3",
                            "Density: 0.534 g/cm^3",
                            "Density: 1.85 g/cm^3",
                            "Density: 2.37 g/cm^3",
                            "Density: 2.267 g/cm^3",
                            "Density: 1.2506 mg/cm^3",
                            "Density: 1.429 mg/cm^3",
                            "Density: 1.696 mg/cm^3",
                            "Density: 0.899 mg/cm^3"};



void normalText(int posX, int posY, const char* text)
{
    glColor3f(0.0f, 0.0f, 0.0f);  // Black

    glRasterPos2i(posX, posY);
    for (int i = 0; text[i] != '\0'; i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
    }
}


void headText(int posX, int posY, const char* text)
{
    glColor3f(0.0f, 0.0f, 0.0f);  // Black

    glRasterPos2i(posX, posY);
    for (int i = 0; text[i] != '\0'; i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
}


void identity()
{
    glColor3f(1.0f, 0.0f, 0.0f);    //red
    glBegin(GL_TRIANGLE_FAN);
        for (int i = 0; i <= 360; i++)
        {
            float theta = 2.0f * 3.14159f * float(i) / 360;
            float x = 750 + 8 * cos(theta);
            float y = 200 + 8 * sin(theta);

            glVertex2f(x, y);
        }
    glEnd();

    normalText(770, 200, "- Nucleus(Protons + Neutrons)");


    glColor3f(0.0f, 1.0f, 0.0f);    //green
    glBegin(GL_TRIANGLE_FAN);
        for (int i = 0; i <= 360; i++)
        {
            float theta = 2.0f * 3.14159f * float(i) / 360;
            float x = 750 + 8 * cos(theta);
            float y = 160 + 8 * sin(theta);

            glVertex2f(x, y);
        }
    glEnd();

    normalText(770, 160, "- Electron");


    glColor3f(0.0f, 0.0f, 1.0f);    //green
    glBegin(GL_LINE_LOOP);
        for (int i = 0; i <= 360; i++)
        {
            float theta = 2.0f * 3.14159f * float(i) / 360;
            float x = 750 + 8 * cos(theta);
            float y = 120 + 8 * sin(theta);

            glVertex2f(x, y);
        }
    glEnd();

    normalText(770, 120, "- Orbit");
}


void arrowKey()
{
    glColor3f(1,0.5,0);     //Orange

    glBegin(GL_POLYGON);
        glVertex2f(150, 670);
        glVertex2f(180, 680);
        glVertex2f(180, 660);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(1000, 670);
        glVertex2f(970, 680);
        glVertex2f(970, 660);
    glEnd();
}


void detailText(int i)
{
    normalText(750.0f, 550.0f, atNo[i]);
    normalText(750.0f, 515.0f, atMass[i]);
    normalText(750.0f, 480.0f, oxState[i]);
    normalText(750.0f, 445.0f, CGB[i]);
    normalText(750.0f, 410.0f, atRad[i]);
    normalText(750.0f, 375.0f, ionEg[i]);
    normalText(750.0f, 340.0f, mp[i]);
    normalText(750.0f, 305.0f, bp[i]);
    normalText(750.0f, 270.0f, den[i]);

    identity();
    arrowKey();

}


