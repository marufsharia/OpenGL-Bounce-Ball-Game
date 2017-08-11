/****************************************************************************
// This is simple Bounce Ball Game
//  This is main file for executing game
*****************************************************************************/
#include"header.h"
#include "PlayGround.hpp"
#include "GlobalVariables.hpp"

int WindowHeight = 850;
int WindowWidth = 900;

/********************************************************************
// KeyBoard Event For Letter and Special Key and other keys
********************************************************************/

//KeyBoard Event
void keyPress(int key, int x, int y)
{
    if(key==GLUT_KEY_RIGHT)
        ballX += 0.05f;
    if(key==GLUT_KEY_LEFT)
        ballX  -= 0.05f;
//    if(key==GLUT_KEY_UP)
//    ballY  += 0.05f;
    if(key==GLUT_KEY_DOWN)
        ballY  -= 0.05f;

    if(key==GLUT_KEY_HOME)
    {
        if(!fullscreen)
        {
            glutFullScreen();
            fullscreen = true;
        }
        else if(fullscreen)
        {
            glutPositionWindow(100,100);
            // glutInitWindowSize(900, 850);      /* Restore us */
            glutReshapeWindow(900, 850);
            fullscreen = false;
        }

    }

    glutPostRedisplay();
}

//KeyBoard Event For Special key and Letter
void Keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 27:             // ESCAPE key
        exit (0);
        break;
    case 13:             // ESCAPE key
        glutDisplayFunc(drawScene);
        glutTimerFunc(25, update, 0); //Add a timer
        break;
    }
    glutPostRedisplay(); //Tell GLUT that the display has changed
}
/****************************************************************
//Print Text
*****************************************************************/
static int font_index=0;


void printtext(int x, int y, string String)
{
//(x,y) is from the bottom left of the window
    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    glOrtho(0, WindowWidth, 0, WindowHeight, -1.0f, 1.0f);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();
    glTranslatef(-1.0, 1.0, 1.0); //Move to the center of the triangle
    glPushAttrib(GL_DEPTH_TEST);
    glDisable(GL_DEPTH_TEST);
    glRasterPos2i(x,y);
    for (int i=0; i<String.size(); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, String[i]);
    }
    glPopAttrib();
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glPopMatrix();
}



/*************************************************************
//Called when the window is resized
*************************************************************/
void handleResize(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}


/*************************************************************
//Initializes 3D rendering
*************************************************************/

void initRendering()
{
    glEnable(GL_DEPTH_TEST);
}


/*************************************************************
//Draw Intro Scene
*************************************************************/
void drawIntro()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
    glLoadIdentity(); //Reset the drawing perspective
    glRotatef(-_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera
    glTranslatef(0.0, 0.0, -7.0);

    //Intro goes here
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(-1.0, 1.0, 1.0); //Move to the center of the triangle
    glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)

    //top circle
    glPopMatrix(); //Undo the move to the center of the triangle

    glColor3f(1,0,0);
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(-1.0, 1.0, 1.0); //Move to the center of the triangle
    glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)

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


    glColor3f(1,0,0);
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(0.0, 1.0, 1.0); //Move to the center of the triangle
    glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)

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

    glColor3f(1,0,0);
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(1.0, 1.0, 1.0); //Move to the center of the triangle
    glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)

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
        glTranslatef(0.0, 0.0, 1.0); //Move to the center of the triangle
        glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)
    glColor3f(1,0,1);
        char string1[128];
        sprintf(string1, "Press Enter To Start");
        printtext(400,450,string1);
        char string2[128];
        sprintf(string2, "Press ESC To Exit");
        printtext(400,400,string2);
    glPopMatrix(); //Undo the move to the center of the triangle



    //bottom circle
    glPopMatrix(); //Undo the move to the center of the triangle

    glColor3f(1,0,0);
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(-1.0, -1.0, 1.0); //Move to the center of the triangle
    glRotatef(-_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)

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


    glColor3f(1,0,0);
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(0.0, -1.0, 1.0); //Move to the center of the triangle
    glRotatef(-_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)

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

    glColor3f(1,0,0);
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(1.0, -1.0, 1.0); //Move to the center of the triangle
    glRotatef(-_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)

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


    //Intro End
    glutSwapBuffers();
}


/****************************************************************
//Draw Scene
*****************************************************************/
void drawScene()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
    glLoadIdentity(); //Reset the drawing perspective
    glRotatef(-_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera
    glTranslatef(0.0, 0.0, -7.0); //Move forward 5 units


////////////////////////////////////////////////////////////////
//Draw ball
////////////////////////////////////////////////////////////////
    glColor3f(1,0,0);
    glPushMatrix(); //Save the current state of transformations
    glTranslatef(0.0, 1.78, 1.0); //Move to the center of the triangle
    //glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)

    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float x = ball_Radius * cos(A);
        float y = ball_Radius * sin(A);
        glVertex2f(x+ballX,y+ballY );
    }
    glEnd();
    glPopMatrix(); //Undo the move to the center of the triangle

////////////////////////////////////////////////////////////////
    //Draw background, score bar, top bar and bottom bar
////////////////////////////////////////////////////////////////
    char score[64];
    sprintf(score, "Score: ");
    printtext(20,870,score);
    DrawScoreBar();
    DrawTopBar();
    DrawBottomBar();
    DrawPlayGround();

    /* render*/
    glutSwapBuffers();
}
/***************************************************************
//Update angle,speed and other stuff
****************************************************************/
void update(int value)
{
    //for Rotationf angle
    _angle += 2.0f;
    if (_angle > 360)
    {
        _angle -= 360;
    }
    _ang_tri += 2.0f;
    if (_ang_tri > 360)
    {
        _ang_tri -= 360;
    }


    //For ball speed
    if(ballX>1.60)
    {
        ballX=1.60;
    }
    if(ballX<-1.60)
    {
        ballX=-1.60;
    }
    //ballY

    /*if(ballY>0.0)
    {
        cout<<"game Over hit top bar"<<endl;
        ballY=0.50;
    }*/
    if(ballY<-4.00)
    {
        cout<<"game Over hit Bottom bar"<<endl;
        ballY+=4.00;
    }
    ballY-=0.01;

    glutPostRedisplay(); //Tell GLUT that the display has changed

    //Tell GLUT to call update again in 25 milliseconds
    glutTimerFunc(25, update, 0);
}


/***************************************************************
//Main Function
****************************************************************/

int main(int argc, char** argv)
{
    //Initialize GLUT
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowSize(900, 850);

    //Create the window
    glutCreateWindow("Bounce Ball Game");
    initRendering();
    //Set handler functions
    glutDisplayFunc(drawScene);

    glutDisplayFunc(drawIntro);

    glutReshapeFunc(handleResize);
    glutKeyboardFunc (Keyboard);
    glutSpecialFunc(keyPress);
    glutFullScreen();/* Go to full screen */
   glutTimerFunc(25, update, 0); //Add a timer
    glutMainLoop();
    return 0;
}


