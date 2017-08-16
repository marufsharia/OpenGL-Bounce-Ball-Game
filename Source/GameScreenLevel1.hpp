
/****************************************************************
//Draw Scene
*****************************************************************/
void drawScene()
{



    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
    glLoadIdentity(); //Reset the drawing perspective
    //glRotatef(-_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera
    glTranslatef(0.0, 0.0, -7.0); //Move forward 5 units
////////////////////////////////////////////////////////////////
//Draw ball
////////////////////////////////////////////////////////////////

    glPushMatrix(); //Save the current state of transformations
  //  glTranslatef(0.0, -1.82, 1.0); //Move to the center of the triangle  //Ymax= 1.45  Ymin=-1.82
    //glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)
    //glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glColor3f(1.0,0.0,0.0);
    glTranslatef(ballX, ballY, 1.0);  //Ymax=1.77  Ymin=-2.22
    glutSolidSphere(0.10,30,30);
    cureentBallX=ballX;
    cureentBallY=ballY;
   // cout<<"Ball  Y "<<ballY<<endl;
    //cout<<"Ball  X "<<ballX<<endl;

    glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
   glPointSize(3);
	glBegin(GL_POINTS);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.11;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

    glPopMatrix(); //Undo the move to the center of the triangle

    //Score Text
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(-0.50, 1.0, 1.60); //Move to the center of the triangle
    glColor3f(1,1,1);
    PrintText(-1.0, 1.00, 4,score); //take 4 parameter x,y,font-type (1-7),message
    glPopMatrix(); //Undo the move to the center of the triangle

    //Title Text
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(-0.40, 1.0, 1.60); //Move to the center of the triangle
    glColor3f(1,1,1);
    PrintText(0.0, 1.0,7,"Save The Ball - Level: 1"); //take 4 parameter x,y,font-type (1-7),message
    glPopMatrix(); //Undo the move to the center of the triangle




    //Score Text
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(0.20, 1.0, 1.60); //Move to the center of the triangle
    glColor3f(1,1,1);
    PrintText(1.0, 1.0,4,life); //take 4 parameter x,y,font-type (1-7),message
    glPopMatrix(); //Undo the move to the center of the triangle



////////////////////////////////////////////////////////////////
    //Draw background, score bar, top bar and bottom bar
////////////////////////////////////////////////////////////////

    DrawScoreBar();
    DrawTopBar();
    DrawBottomBar();
    EnimyBar1();
    FoodBar1();
    DrawLeftTopBrickBar();
    DrawRightTopBrickBar();
    DrawLeftBottomBrickBar();
    DrawRightBottomBrickBar();
    DrawPlayGround();
    FullScreenColor();

    /* render*/
    glutSwapBuffers();

}
