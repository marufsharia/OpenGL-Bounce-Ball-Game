/****************************************************************************
// This is simple Bounce Ball Game
//  This is draw background and main playing space
*****************************************************************************/
 float LeftBrickBarY1=0.0;
float LeftBrickBarY2=0.0;
float RightBrickBarY1=0.0;
float RightBrickBarY2=0.0;


 void DrawPlayGround()
{
    glColor4f(1.0,1.0,1.0,0.08);
    glBegin(GL_POLYGON);
	//Trapezoid
	glVertex3f(-2.0, -10.0, 0.0);
	glVertex3f(2.0, -10.0, 0.0);
	glVertex3f(2.0, 2.20, 0.0);
	glVertex3f(-2.0, 2.20, 0.0);

	glEnd();

}

//draw Score bar
 void DrawScoreBar()
{
    glColor4f(0.30,0.70,0.50,0.90);
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

    glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_QUADS);
	//Trapezoid
	glVertex3f(-2.0, -2.70, 0.0);
	glVertex3f(2.0,  -2.70, 0.0);
	glVertex3f(2.0, -2.90, 0.0);
	glVertex3f(-2.0, -2.90, 0.0);
	glEnd();
}

//Draw Bar left Top Brick bar
 void DrawLeftTopBrickBar()
{
glColor3f(0.50,0.0,0.0);
//glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_QUADS);
	//Trapezoid
	glVertex3f(-2.0, 1.00+ LeftBrickBarY1, 0.0);
	glVertex3f(-1.0,  1.00+ LeftBrickBarY1, 0.0);
	glVertex3f(-1.0, 1.20+ LeftBrickBarY1, 0.0);
	glVertex3f(-2.0, 1.20+ LeftBrickBarY1, 0.0);
	glEnd();
    //cout<<"Left Top Brick bar Y: "<<1.00+ LeftBrickBarY1<<endl;

}

//Draw Bar left Top Brick bar
 void DrawLeftBottomBrickBar()
{
glColor3f(0.50,0.0,0.0);
    glBegin(GL_QUADS);
	//Trapezoid
	glVertex3f(-2.0, -1.00+ LeftBrickBarY2, 0.0);
	glVertex3f(-1.0,  -1.00+ LeftBrickBarY2, 0.0);
	glVertex3f(-1.0, -1.20+ LeftBrickBarY2, 0.0);
	glVertex3f(-2.0, -1.20+ LeftBrickBarY2, 0.0);
	glEnd();
	//cout<<"Left Bottom Brick bar Y: "<<1.00+ LeftBrickBarY1<<endl;

}

//Draw Bar right Top Brick bar
 void DrawRightTopBrickBar()
{
glColor3f(0.50,0.0,0.0);
    glBegin(GL_QUADS);
	//Trapezoid
	glVertex3f(2.0, 0.60+RightBrickBarY1, 0.0);
	glVertex3f(1.0,  0.60+RightBrickBarY1, 0.0);
	glVertex3f(1.0, 0.80+RightBrickBarY1, 0.0);
	glVertex3f(2.0, 0.80+RightBrickBarY1, 0.0);
	glEnd();

}

//Draw Bar left Top Brick bar
 void DrawRightBottomBrickBar()
{
glColor3f(0.50,0.0,0.0);
    glBegin(GL_QUADS);
	//Trapezoid
	glVertex3f(2.0, -1.80+RightBrickBarY2, 0.0);
	glVertex3f(1.0,  -1.80+RightBrickBarY2, 0.0);
	glVertex3f(1.0, -2.00+RightBrickBarY2, 0.0);
	glVertex3f(2.0, -2.00+RightBrickBarY2, 0.0);
	glEnd();

}
//fullscreen color
void FullScreenColor()
{
    //glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glColor3f(0.20,0.20,0.20);
      glBegin(GL_POLYGON);
      glVertex3f(-5.8f, -4.1f, 0.0f);
      glVertex3f(-5.8f,4.7f, 0.0f);
      glVertex3f(5.8f, 4.7f, 0.0f);
      glVertex3f(5.8f,-4.1f, 0.0f);
      glEnd();
}



