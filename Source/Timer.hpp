/***************************************************************
//Update angle,speed and other stuff
****************************************************************/


void ScoreCheck()
{


    if(l==3)
    {
        life[7]='3';

    }
    else  if(l==2)
    {
        life[7]='2';

    }
    else if(l==1)
    {
        life[7]='1';

    }
    else if (l<1)
    {
        updateTime=60;
        //intScore=0;
        //sc=0.0;
        l=4;
        life[7]='4';
        gameStop=true;
        gameStart=false;
        glutDisplayFunc(drawIntro);
        Sleep(300);
        PlaySound("resource//bg.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);



    }
}



void update(int value)
{
    //for Rotationf angle
    _angle += 2.0f;
    if (_angle > 360)
    {
        _angle -= 360;
    }

    if(gameStart)
    {

        //cout<<"cureentLeftTopBickBarY : " << (1.00+LeftBrickBarY1) <<endl;
        //cout<<"cureentLeftTopBickBarX0 : " <<2-.5<<endl;
        //cout<<"cureentLeftTopBickBarX1 : " <<-1.0<<endl;
        //cout<<"cureent Ball X : " <<ballX<<endl;
        //  if(a==b || (a<=b+0.05 &&a>=b-0.05) )



        //Top Left Brick Bar
        if(((cureentBallX<=-1) && (cureentBallX>=-2))  && ((1.00+LeftBrickBarY1)  == (ballY) || ( (1.00+LeftBrickBarY1) <= (ballY+0.02f) && (1.00+LeftBrickBarY1) >= ballY-0.20f)))
        {
            ballY=(1.2+LeftBrickBarY1);
            stayOnBar=true;
            //cout<<"hit "<<endl;
        }

        //Bottom Left Brick Bar

        else if(((cureentBallX<=-1) && (cureentBallX>=-2))  && ((-1.00+LeftBrickBarY2)  == (ballY) || ( (-1.00+LeftBrickBarY2) <= (ballY+0.02f) && (-1.00+LeftBrickBarY2) >= ballY)))
        {
            ballY=(-1.00+LeftBrickBarY2);
            stayOnBar=true;
            //cout<<"hit "<<endl;
        }


        //Top Right Brick Bar
        else  if(((cureentBallX>=1.0) && (cureentBallX<=2.0))  && (((0.80+RightBrickBarY1)  == (ballY+0.15f)) || ( (0.80+RightBrickBarY1) <= (ballY+0.10f) && (0.80+RightBrickBarY1) >= ballY-0.20)))
        {
            ballY=(0.82+RightBrickBarY1);
            stayOnBar=true;
            //cout<<"hit top "<<endl;
        }
//        else
//        {
//            cout<<"not hit "<<endl;
//        }

        //Bottom Right Brick Bar
        else  if(((cureentBallX>=1.0) && (cureentBallX<=2.0))  && (((-1.80+RightBrickBarY2)  == (ballY+0.15f)) || ( (-1.80+RightBrickBarY2) <= (ballY+0.15f) && (-1.80+RightBrickBarY2) >= ballY        )))
        {
            ballY=(-1.80+RightBrickBarY2);
            stayOnBar=true;
            //cout<<"hit bottom"<<endl;
        }
        else
        {
            stayOnBar=false;
        }






        ////////Enimy ////////////////////////
        if(((cureentBallX>=-0.92) && (cureentBallX<0.75))  && (((0.90+EnimyFireBar1)  == (ballY+0.15f)) || ( (0.90+EnimyFireBar1) <= (ballY+0.15f) && (0.90+EnimyFireBar1) >= ballY )))

        {

            // cout<<"enimy hit"<<endl;
             totalScore+=intScore;
            l--;
            sc=0.0;
             intScore=0;
             updateTime=50;
            ScoreCheck();
            PlaySound("resource//collide.wav", NULL, SND_ASYNC|SND_FILENAME);
            ballY=1.77;
            EnimyFireBar1=-10.0;
            Sleep(300);
            PlaySound("resource//bg1.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
        }


////////Food ////////////////////////
        if(((cureentBallX>=-0.05) && (cureentBallX<0.35))  && (((-0.60+FoodLifeBar1)  == (ballY       +0.15f)) || ( (-0.60+FoodLifeBar1) <= (ballY+0.15f) && (-0.60+FoodLifeBar1) >= ballY )))

        {

            // cout<<"food hit"<<endl;
            if(l<3)
            {
                l=3;
                ScoreCheck();
            }


            PlaySound("resource//life.wav", NULL, SND_ASYNC|SND_FILENAME);
            FoodLifeBar1=-15.0;
            Sleep(300);
            PlaySound("resource//bg1.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
        }





        //For ball speed
        if(ballX>1.99)
        {
            ballX=1.95;
        }
        if(ballX<-1.99)
        {
            ballX=-1.95;
        }
        //ballY

        if(ballY>1.80)
        {
             totalScore+=intScore;
            l--;
            sc=0.0;
            intScore=0;
            updateTime=50;
            ScoreCheck();


            // cout<<"game Over hit Top bar"<<endl;
            PlaySound("resource//collide.wav", NULL, SND_ASYNC|SND_FILENAME);
            ballY=1.62;
            ballX=0.0;
            Sleep(300);
            PlaySound("resource//bg1.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
        }

        if(ballY<-2.22f)
        {
            totalScore+=intScore;
            l--;
            sc=0.0;
            intScore=0;
            updateTime=50;
            ScoreCheck();
            //sc=0;

            // cout<<"game Over hit Bottom bar"<<endl;
            PlaySound("resource//collide.wav", NULL, SND_ASYNC|SND_FILENAME);
            ballY+=3.99;
            ballX=0.0;
            Sleep(300);
            PlaySound("resource//bg1.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);


        }

        if(!stayOnBar)
        {
            ballY-=0.01;
        }
//        else{
//            ballY-=0.001;
//        }




        //Brick Bar
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

        //2nd right brick
        RightBrickBarY2+=0.01;
        if (RightBrickBarY2 > 3.75)
        {
            RightBrickBarY2 -= 5.50;
        }

        //Enimy bar1
        EnimyFireBar1+=0.01;
        if (EnimyFireBar1 > 2.75)
        {
            EnimyFireBar1 -= 5.50;
        }

        //Food bar1
        FoodLifeBar1+=0.01;
        if (FoodLifeBar1 > 2.75)
        {

            FoodLifeBar1 -= 7.50;

        }


    }
    glutPostRedisplay(); //Tell GLUT that the display has changed

    //Tell GLUT to call update again in 25 milliseconds
    glutTimerFunc(updateTime, update, 0);
    if(gameStart)
    {
        sc+=0.05;
        intScore= sc;
        stringstream ss;
        ss << intScore;
        str="Score : ";
        str += ss.str();
        //cout<<"score : "<<(int)sc<<endl;
        strcpy(score, str.c_str());


        if(intScore>50 && intScore <100)
        {
            updateTime=40;
        }
        else if( intScore >100 &&intScore <150)
        {
            updateTime=30;
        }
        else if( intScore >150 && intScore <175)
        {
            updateTime=20;
        }
        else if( intScore >175 && intScore <200)
        {
            updateTime=15;
        }
        else if( intScore >200 && intScore <250)
        {
            updateTime=10;
        }
        else if( intScore >250 )
        {
            updateTime=10;
        }




    }

}

