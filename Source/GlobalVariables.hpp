/************************************************************
//Declare all global necessary variables here
*************************************************************/
float _angle = 0.0;
float _cameraAngle = 0.0;
float _ang_tri = 0.0;
int updateTime=60;
float ballX=0.0;
float ballY=1.77;
float ball_Radius=0.10;
float ball_Falling_Speed=0.0;
bool fullscreen = true;
float random_Num = ((double) rand() / (RAND_MAX)) + 1;
int WindowHeight = 850;
int WindowWidth = 900;
bool gameStart=false;
bool gameStop=true;
float leftTopBrickBar;
char score[100];
char life[] = "Life : 4";
int l=4;
static float sc=0;
int intScore=0;
string str;

bool stayOnBar=false;

/******************************/
float cureentBallX=0.0;
float cureentBallY=0.0;
float cureentLeftTopBrickBarX0=0.0;
float cureentLeftTopBrickBarX1=0.0;
float cureentLeftTopBickBarY=0.0;





//function
void drawScene(void);
void update(int value);
void drawIntro(void);
void ShowStars(void);
void ShowStar(int);
int winner(char a);
