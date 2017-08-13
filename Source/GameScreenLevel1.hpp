
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
    glTranslatef(0.0, 1.78, 1.0); //Move to the center of the triangle
    //glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)
    glColor3f(1,0,0);

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float x = ball_Radius * cos(A);
        float y = ball_Radius * sin(A);
        glVertex2f(x+ballX,y+ballY );
    //cout<<"Ball X : "<<x+ballX<<"\t Y"<<y+ballY<<endl;

    }
    glEnd();
    glPopMatrix(); //Undo the move to the center of the triangle

    //Score Text
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(-0.50, 1.2, 1.0); //Move to the center of the triangle
    glColor3f(1,1,1);
    PrintText(-1.0, 1.00, 4,score); //take 4 parameter x,y,font-type (1-7),message
    glPopMatrix(); //Undo the move to the center of the triangle

    //Score Text
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(0.20, 1.2, 1.0); //Move to the center of the triangle
    glColor3f(1,1,1);
    PrintText(1.0, 1.0,4,life); //take 4 parameter x,y,font-type (1-7),message
    glPopMatrix(); //Undo the move to the center of the triangle



////////////////////////////////////////////////////////////////
    //Draw background, score bar, top bar and bottom bar
////////////////////////////////////////////////////////////////

    DrawScoreBar();
    DrawTopBar();
    DrawBottomBar();
    DrawLeftTopBrickBar();
    DrawRightTopBrickBar();
    DrawLeftBottomBrickBar();
    DrawRightBottomBrickBar();
    DrawPlayGround();
    FullScreenColor();

    /* render*/
    glutSwapBuffers();

}
