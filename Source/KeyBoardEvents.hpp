
/********************************************************************
// KeyBoard Event For Letter and Special Key and other keys
********************************************************************/

//KeyBoard Event
void keyPress(int key, int x, int y)
{
    if(key==GLUT_KEY_RIGHT)
    {
        if(ballX<1.60)
        {
            ballX += 0.50f;
        }

    }

    if(key==GLUT_KEY_LEFT)
    {
        if(ballX>-1.60)
        {
            ballX  -= 0.50f;
        }

    }

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
    case 13:             // Enter key
        if(gameStop)
        {
        glutDisplayFunc(drawScene);
        glutTimerFunc(25, update, 0); //Add a timer
        PlaySound("resource//bg1.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
        gameStop=false;
        gameStart=true;
        break;
        }
    }
    glutPostRedisplay(); //Tell GLUT that the display has changed
}
