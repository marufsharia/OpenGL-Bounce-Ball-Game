/****************************************************************************
// This is simple Bounce Ball Game
//  This is draw background and main playing space
*****************************************************************************/
#include"header.h"
 void DrawPlayGround()
{
    glColor4f(1.0,1.0,1.0,0.08);
    glBegin(GL_POLYGON);
	//Trapezoid
	glVertex3f(-2.0, -10.0, 0.0);
	glVertex3f(2.0, -10.0, 0.0);
	glVertex3f(2.0, 10.0, 0.0);
	glVertex3f(-2.0, 10.0, 0.0);

	glEnd();

}

//draw Score bar
 void DrawScoreBar()
{
    glColor4f(0.30,0.70,0.50,0.02);
    glBegin(GL_QUADS);
	glVertex3f(2.0, 2.90, 0.0);
	glVertex3f(-2.0, 2.90, 0.0);
	glVertex3f(-2.0, 2.40, 0.0);
	glVertex3f(2.0,  2.40, 0.0);
	glEnd();
}


//draw Top bar
 void DrawTopBar()
{
    glColor3f(0.50,0.0,0.0);
    glBegin(GL_QUADS);
	//Trapezoid
	glVertex3f(-2.0, 2.20, 0.0);
	glVertex3f(2.0,  2.20, 0.0);
	glVertex3f(2.0, 2.4, 0.0);
	glVertex3f(-2.0, 2.4, 0.0);
	glEnd();
}

//draw Bottom bar
 void DrawBottomBar()
{
    glColor3f(0.50,0.0,0.0);
    glBegin(GL_QUADS);
	//Trapezoid
	glVertex3f(-2.0, -2.70, 0.0);
	glVertex3f(2.0,  -2.70, 0.0);
	glVertex3f(2.0, -2.90, 0.0);
	glVertex3f(-2.0, -2.90, 0.0);
	glEnd();
}







