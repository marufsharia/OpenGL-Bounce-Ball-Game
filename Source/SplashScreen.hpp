
/*************************************************************
//Draw Splash Scene
*************************************************************/
void drawIntro()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
    glLoadIdentity(); //Reset the drawing perspective
    glTranslatef(0.0, 0.0, -5.0);

    //Intro goes here
    glPointSize(2);

    //top left circle
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(-1.0, 1.0, 1.0); //Move to the center of the triangle
    glRotatef(_angle, 1.0, 1.0, 1.0); //Rotate about the the vector (1, 2, 3)

    glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_POINTS);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float x = 0.25 * cos(A);
        float y = 0.25* sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix(); //Undo the move to the center of the triangle

    //top Middle outer circle
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(0.0, 1.0, 1.0); //Move to the center of the triangle
    glRotatef(_angle, 1.0, 1.0, 1.0); //Rotate about the the vector (1, 2, 3)

    glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_LINES);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float x = 0.25 * cos(A);
        float y = 0.25* sin(A);
        glVertex2f(x,y);
    }
    glEnd();
     glPopMatrix(); //Undo the move to the center of the triangle

    //top Middle inner circle
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(0.0, 1.0, 1.0); //Move to the center of the triangle
    glRotatef(-_angle, 1.0, 1.0, 1.0); //Rotate about the the vector (1, 2, 3)
    glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_LINES);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float x = 0.30 * cos(A);
        float y = 0.30* sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix(); //Undo the move to the center of the triangle

    //Middle Left outer circle
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(-1.0, 0.0, 1.0); //Move to the center of the triangle
    glRotatef(_angle+30, 1.0, 1.0, 1.0); //Rotate about the the vector (1, 2, 3)

    glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_LINES);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float x = 0.25 * cos(A);
        float y = 0.25* sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix(); //Undo the move to the center of the triangle

     //Middle Left inner circle
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(-1.0, 0.0, 1.0); //Move to the center of the triangle
    glRotatef(-_angle+30, 1.0, 1.0, 1.0); //Rotate about the the vector (1, 2, 3)

    glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_LINES);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float x = 0.20 * cos(A);
        float y = 0.20* sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix(); //Undo the move to the center of the triangle

    //top Right circle
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(1.0, 1.0, 1.0); //Move to the center of the triangle
    glRotatef(_angle, 1.0, 1.0, 1.0); //Rotate about the the vector (1, 2, 3)

    glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_POINTS);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float x = 0.25 * cos(A);
        float y = 0.25* sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix(); //Undo the move to the center of the triangle


    //Display Menu
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(0.0, 0.00, -5.0); //Move to the center of the triangle
    //glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)
    glColor3ub(rand()%254+1, rand()%254+1, 0.5);
    PrintText(-1.40, 0.95, 4,"~{0_0}~  SAVE THE BALL  ~{0_0}~");
    glColor3ub(rand()%254+1, rand()%254+1,  rand()%254+1);
    PrintText(-1.90, 0.75, 4,"==================================");
    glColor3ub(0.50, rand()%254+1, rand()%254+1);
    PrintText(-1.40, 0.25, 4,"=>  Press Enter To Start  <="); //take 4 parameter x,y,font-type (1-7),message
    glColor3ub(rand()%254+1, 0.50, rand()%254+1);
    PrintText(-1.40, -0.25, 4,"=>  Press ESC To Exit  <=");//take 4 parameter x,y,font-type (1-7),message
    glColor3ub(rand()%254+1, rand()%254+1,  rand()%254+1);
    PrintText(-1.90, -0.75, 4,"==================================");
    if(totalScore>0)
    {
        glColor3ub(150, 1.0, rand()%254+1);

        char tscore[100];
        stringstream tc;
       tc << totalScore;
        tstr="Your Score Is : ";
        tstr += tc.str();
        //cout<<"score : "<<(int)sc<<endl;
            strcpy(tscore, tstr.c_str());
            PrintText(-0.80, -0.95, 4,tscore );
        //cout<<"Your Score : "<<totalScore<<endl;
    }
    glPopMatrix(); //Undo the move to the center of the triangle

    //Bottom left circle
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(-1.0, -1.0, 1.0); //Move to the center of the triangle
    glRotatef(-_angle, 1.0, 1.0, 1.0); //Rotate about the the vector (1, 2, 3)

    glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_POINTS);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float x = 0.25 * cos(A);
        float y = 0.25* sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix(); //Undo the move to the center of the triangle

    //Bottom Middle outer circle
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(0.0, -1.0, 1.0); //Move to the center of the triangle
    glRotatef(-_angle, 1.0, 1.0, 1.0); //Rotate about the the vector (1, 2, 3)

    glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_LINES);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float x = 0.25 * cos(A);
        float y = 0.25* sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix(); //Undo the move to the center of the triangle

    //top Middle inner circle
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(0.0, -1.0, 1.0); //Move to the center of the triangle
    glRotatef(_angle, 1.0, 1.0, 1.0); //Rotate about the the vector (1, 2, 3)
    glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_LINES);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float x = 0.30 * cos(A);
        float y = 0.30* sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix(); //Undo the move to the center of the triangle

    //Bottom Right circle
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(1.0, -1.0, 1.0); //Move to the center of the triangle
    glRotatef(-_angle, 1.0, 1.0, 1.0); //Rotate about the the vector (1, 2, 3)

    glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_POINTS);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float x = 0.25 * cos(A);
        float y = 0.25* sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix(); //Undo the move to the center of the triangle

    //Middle Right inner circle
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(1.0, 0.0, 1.0); //Move to the center of the triangle
    glRotatef(-_angle+30, 1.0, 1.0, 1.0); //Rotate about the the vector (1, 2, 3)

    glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_LINES);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float x = 0.25 * cos(A);
        float y = 0.25* sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix(); //Undo the move to the center of the triangle
     //Middle Right outer circle
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(1.0, 0.0, 1.0); //Move to the center of the triangle
    glRotatef(_angle+30, 1.0, 1.0, 1.0); //Rotate about the the vector (1, 2, 3)

    glColor3ub(rand()%254+1, rand()%254+1, rand()%254+1);
    glBegin(GL_LINES);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float x = 0.20 * cos(A);
        float y = 0.20* sin(A);
        glVertex2f(x,y);
    }
    glEnd();
    glPopMatrix(); //Undo the move to the center of the triangle

    //Intro End
    glutSwapBuffers();

}
