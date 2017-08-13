
/****************************************************************
//Print Text
*****************************************************************/
/*********************************************************
//list of bitmap font in OpenGL
GLUT_BITMAP_8_BY_13 =>1
GLUT_BITMAP_9_BY_15  =>2
GLUT_BITMAP_TIMES_ROMAN_10  =>3
GLUT_BITMAP_TIMES_ROMAN_24  =>4
GLUT_BITMAP_HELVETICA_10  =>5
GLUT_BITMAP_HELVETICA_12  =>6
GLUT_BITMAP_HELVETICA_18  =>7
***********************************************************/


void *font = GLUT_BITMAP_TIMES_ROMAN_24;
void PrintText(float x, float y,int s, char *string)
{
    int len, i;
    if(s==1)
    {
       font = GLUT_BITMAP_8_BY_13; //1
    }
    else if(s==2)
    {
        font = GLUT_BITMAP_9_BY_15;  //2

    }
    else if(s==3)
    {
        font = GLUT_BITMAP_TIMES_ROMAN_10; //3
    }
    else if(s==4)
    {
        font = GLUT_BITMAP_TIMES_ROMAN_24; //4
    }
    else if(s==5)
    {
        font = GLUT_BITMAP_HELVETICA_10 ; //5
    }
    else if(s==6)
    {
        font = GLUT_BITMAP_HELVETICA_12; //6
    }
    else if(s==7)
    {
        font = GLUT_BITMAP_HELVETICA_18; //7
    }
    glRasterPos2f(x, y);
    len = (int) strlen(string);
    for (i = 0; i < len; i++)
    {
        glutBitmapCharacter(font, string[i]);
    }
}
