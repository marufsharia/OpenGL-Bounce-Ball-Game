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

    if(gameStart)
    {
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

       /* if(ballY>0.0)
        {
            cout<<"game Over hit top bar"<<endl;
            ballY=0.50;
        }*/
        if(ballY<-4.00)
        {   l--;
            cout<<"game Over hit Bottom bar"<<endl;
            PlaySound("resource//collide.wav", NULL, SND_ASYNC|SND_FILENAME);
            // glutDisplayFunc(drawIntro);
            ballY+=4.00;

            Sleep(300);

            glutDisplayFunc(drawScene);
            PlaySound("resource//bg1.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

        }

        ballY-=0.01;
            LeftBrickBarY1+=0.01f;
            if (LeftBrickBarY1 > 1.30)
            {
                LeftBrickBarY1 -= 4.50;
            }

            //2nd left brick
            LeftBrickBarY2+=0.01;
            if (LeftBrickBarY2 > 3.50)
            {
                LeftBrickBarY2 -= 5.50;
            }

            //1st right brick
            RightBrickBarY1+=0.01;
            if (RightBrickBarY1 > 1.50)
            {
                RightBrickBarY1 -= 4.50;
            }

            //1st right brick
            RightBrickBarY2+=0.01;
            if (RightBrickBarY2 > 3.50)
            {
                RightBrickBarY2 -= 5.50;
            }


    }
    glutPostRedisplay(); //Tell GLUT that the display has changed

    //Tell GLUT to call update again in 25 milliseconds
    glutTimerFunc(10, update, 0);
}

