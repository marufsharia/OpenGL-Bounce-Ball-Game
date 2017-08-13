/****************************************************************************
// This is simple Save Ball Game
//  This is main file for executing game
*****************************************************************************/
#include"header.h"
#include "PlayGround.hpp"
#include "GlobalVariables.hpp"
#include "TextDisplay.hpp"
#include "SplashScreen.hpp"
#include "GameScreenLevel1.hpp"
#include "KeyBoardEvents.hpp"
#include "Timer.hpp"
#include "GlutConfig.hpp"



/***************************************************************
//Main Function
****************************************************************/

int main(int argc, char** argv)
{
    //Initialize GLUT
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowSize(900, 850);
    PlaySound("resource//bg.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
    //Create the window
    glutCreateWindow("Save Ball Game");
    initRendering();
    //Set handler functions
    //glutDisplayFunc(drawScene);
    glutDisplayFunc(drawIntro);
    glutReshapeFunc(handleResize);
    glutKeyboardFunc (Keyboard);
    glutSpecialFunc(keyPress);
    glutFullScreen();/* Go to full screen */
    glutTimerFunc(25, update, 0); //Add a timer
    glutMainLoop();
    return 0;
}
