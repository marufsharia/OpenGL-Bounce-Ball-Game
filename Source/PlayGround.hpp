/****************************************************************************
// This is simple Bounce Ball Game
//  This is draw background and main playing space
*****************************************************************************/
float LeftBrickBarY1=0.0;
float LeftBrickBarY2=0.0;
float RightBrickBarY1=0.0;
float RightBrickBarY2=0.0;
float EnimyFireBar1=0.0;
float FoodLifeBar1=0.0;


void DrawPlayGround()
{
    glPushMatrix();
    glTranslatef(0.00, -0.20, 1.0);
    glColor4f(1.0,1.0,1.0,0.08);
    glBegin(GL_POLYGON);
    glVertex3f(-2.0, -3.0, 0.0);
    glVertex3f(2.0, -3.0, 0.0);
    glVertex3f(2.0, 2.20, 0.0);
    glVertex3f(-2.0, 2.20, 0.0);

    glEnd();
glPopMatrix();
}

//draw Score bar
void DrawScoreBar()
{
    glPushMatrix();
    glTranslatef(0.00, -0.32, 1.0);
    glColor4f(0.30,0.70,0.50,0.90);
    glBegin(GL_POLYGON);
    glVertex3f(2.0, 2.90, 0.0);
    glVertex3f(-2.0, 2.90, 0.0);
    glVertex3f(-2.0, 2.40, 0.0);
    glVertex3f(2.0,  2.40, 0.0);
    glEnd();
    glPopMatrix();
}


//draw Top bar
void DrawTopBar()
{
    glPushMatrix();
    glTranslatef(0.00, -0.32, 1.0);
    glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_POLYGON);
    glVertex3f(-2.0, 2.20, 0.0);
    glVertex3f(2.0,  2.20, 0.0);
    glVertex3f(2.0, 2.4, 0.0);
    glVertex3f(-2.0, 2.4, 0.0);
    glEnd();
    glPopMatrix();
}

//draw Bottom bar
void DrawBottomBar()
{
    glPushMatrix();
    glTranslatef(0.00, 0.40, 1.0); //Move to the center of the triangle
    glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_POLYGON);
    glVertex3f(-2.0, -2.70, 0.0);
    glVertex3f(2.0,  -2.70, 0.0);
    glVertex3f(2.0, -2.90, 0.0);
    glVertex3f(-2.0, -2.90, 0.0);
    glEnd();
    glPopMatrix();
}

//Draw Bar left Top Brick bar
void DrawLeftTopBrickBar()
{
     glPushMatrix();
    glTranslatef(-0.00, LeftBrickBarY1, 1.0); //Move to the center of the triangle
    glColor3f(0.50,0.0,0.0);
//glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_POLYGON);
    glVertex3f(-2.0, 1.05, 0.0);
    glVertex3f(-1.0,  1.05, 0.0);
    glVertex3f(-1.0, 1.20, 0.0);
    glVertex3f(-2.0, 1.20, 0.0);
    glEnd();

    glColor3f(0.30,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.0, 1.20, 0.0);
    glVertex3f(-1.0,  1.20, 0.0);
    glVertex3f(-1.0, 1.30, 0.0);
    glVertex3f(-2.0, 1.30, 0.0);
    glEnd();

    glColor3f(0.30,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.98, 1.30, 0.0);
    glVertex3f(-1.0,  1.30, 0.0);
    glVertex3f(-1.0, 1.05, 0.0);
    glVertex3f(-0.98, 1.05, 0.0);
    glEnd();

glPopMatrix();
}

//Draw Bar left Bottom Brick bar
void DrawLeftBottomBrickBar()
{
    glPushMatrix();
    glTranslatef(-0.00, LeftBrickBarY2, 1.0); //Move to the center of the triangle

    glColor3f(0.50,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.0, -1.05, 0.0);
    glVertex3f(-1.0,  -1.05, 0.0);
    glVertex3f(-1.0, -1.20, 0.0);
    glVertex3f(-2.0, -1.20, 0.0);
    glEnd();

    glColor3f(0.30,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.0, -0.95, 0.0);
    glVertex3f(-1.0,  -0.95, 0.0);
    glVertex3f(-1.0, -1.05, 0.0);
    glVertex3f(-2.0, -1.05, 0.0);
    glEnd();

    glColor3f(0.30,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.98, -0.95, 0.0);
    glVertex3f(-1.0,  -0.95, 0.0);
    glVertex3f(-1.0, -1.20, 0.0);
    glVertex3f(-0.98, -1.20, 0.0);
    glEnd();


    //cout<<"Left Bottom Brick bar Y: "<<1.00+ LeftBrickBarY1<<endl;
glPopMatrix();
}

/*orginal


//Draw Bar left Bottom Brick bar
void DrawLeftBottomBrickBar()
{
    glColor3f(0.50,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.0, -1.00+ LeftBrickBarY2, 0.0);
    glVertex3f(-1.0,  -1.00+ LeftBrickBarY2, 0.0);
    glVertex3f(-1.0, -1.20+ LeftBrickBarY2, 0.0);
    glVertex3f(-2.0, -1.20+ LeftBrickBarY2, 0.0);
    glEnd();
    //cout<<"Left Bottom Brick bar Y: "<<1.00+ LeftBrickBarY1<<endl;

}





*/


//Draw Bar right Top Brick bar
void DrawRightTopBrickBar()
{
    glPushMatrix();
    glTranslatef(0.00, RightBrickBarY1, 1.0);
    glColor3f(0.50,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(2.0, 0.60, 0.0);
    glVertex3f(1.0,  0.60, 0.0);
    glVertex3f(1.0, 0.75, 0.0);
    glVertex3f(2.0, 0.75, 0.0);
    glEnd();


    glColor3f(0.30,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(2.0, 0.85, 0.0);
    glVertex3f(1.0,  0.85, 0.0);
    glVertex3f(1.0, 0.75, 0.0);
    glVertex3f(2.0, 0.75, 0.0);
    glEnd();

    glColor3f(0.30,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.98, 0.85, 0.0);
    glVertex3f(1.0,  0.85, 0.0);
    glVertex3f(1.0, 0.60, 0.0);
    glVertex3f(0.98, 0.60, 0.0);
    glEnd();

glPopMatrix();
}

//Draw Bar left Top Brick bar
void DrawRightBottomBrickBar()
{
    glPushMatrix();
    glTranslatef(0.00, RightBrickBarY2, 1.0);
    glColor3f(0.50,0.00,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(2.0, -1.85, 0.0);
    glVertex3f(1.0,  -1.85, 0.0);
    glVertex3f(1.0, -2.00, 0.0);
    glVertex3f(2.0, -2.00, 0.0);
    glEnd();


    glColor3f(0.30,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(2.0, -1.75, 0.0);
    glVertex3f(1.0,  -1.75, 0.0);
    glVertex3f(1.0, -1.90, 0.0);
    glVertex3f(2.0, -1.90, 0.0);
    glEnd();

    glColor3f(0.30,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.98, -1.75, 0.0);
    glVertex3f(1.0,  -1.75, 0.0);
    glVertex3f(1.0, -2.00, 0.0);
    glVertex3f(0.98, -2.00, 0.0);
    glEnd();

    glPopMatrix();

}

//Enemy bar 1
void EnimyBar1()
{
    glPushMatrix();
    glTranslatef(0.00, EnimyFireBar1, 1.0);

    glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_POLYGON);
    glVertex3f(-0.80, 0.90, 0.0);
    glVertex3f(0.60, 0.90, 0.0);
    glVertex3f(0.60, 0.70, 0.0);
    glVertex3f(-0.80,  0.70, 0.0);
    glEnd();
    glColor4f(0.40,0.0,0.0,0.10);
    glBegin(GL_POLYGON);
    glVertex3f(-0.82, 0.92, 0.0);
    glVertex3f(0.62, 0.92, 0.0);
    glVertex3f(0.62, 0.68, 0.0);
    glVertex3f(-0.82,  0.68, 0.0);
    glEnd();

    glPopMatrix();
}

//Food bar 1
void FoodBar1()
{
    glPushMatrix();
    glTranslatef(0.00, FoodLifeBar1, 1.0);

    glColor3f(0.0, 1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.04, -0.90, 0.0);
    glVertex3f(0.20, -0.90, 0.0);
    glVertex3f(0.20, -0.70, 0.0);
    glVertex3f(0.04,  -0.70, 0.0);
    glEnd();
    glColor4f(1.0,1.0,0.0,0.10);
    glBegin(GL_POLYGON);
    glVertex3f(0.00, -0.92, 0.0);
    glVertex3f(0.24, -0.92, 0.0);
    glVertex3f(0.24, -0.68, 0.0);
    glVertex3f(0.00,  -0.68, 0.0);
    glEnd();
    glPopMatrix();
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



