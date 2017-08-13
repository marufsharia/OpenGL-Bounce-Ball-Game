
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
