#include <windows.h>
#include <GL/glut.h>

void init(void);
void tampil(void);
void mouse(int button, int state, int x, int y);
void ukuran(int lebar, int tinggi);
void mouseMotion(int x, int y);
void keyboard(unsigned char key, int x, int y);

float xrot=0.0f;
float yrot=0.0f;
float xdiff=0.0f;
float ydiff=0.0f;
bool mouseDown=false;
int is_depth;

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowSize(800,600);
    glutInitWindowPosition(250,80);
    glutCreateWindow("Maria Dewirosari Cahyahadi - 672018251");
    init();
    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(ukuran);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutIdleFunc(tampil);
    glutMainLoop();
    return 0;
}
void init(void)
{
    glClearColor(0,0,0,0);
    glMatrixMode(GL_PROJECTION);
    //glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
    //glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    is_depth=1;
    glMatrixMode(GL_MODELVIEW);
}
void rumah(void)
{
//kiri depan
    glBegin(GL_QUADS);
        glColor3f(1, 0.854902, 0.72549);glVertex3f(-150,-60, 10);glVertex3f(-50,-60,10);glVertex3f(-50,60,10);glVertex3f(-150,60,10);glEnd();
//sekat kiri
    glBegin(GL_QUADS);
        glColor3f(1, 0.854902, 0.72549);glVertex3f(-50,-60,10);glVertex3f(-50,-60,-10);glVertex3f(-50,60,-10);glVertex3f(-50,60,10);glEnd();
//tengah depan
    glBegin(GL_QUADS);
        glColor3f(1, 0.854902, 0.72549);glVertex3f(-50,-60, -10);glVertex3f(70,-60,-10);glVertex3f(70,60,-10);glVertex3f(-50,60,-10);glEnd();
//sekat kanan
    glBegin(GL_QUADS);
        glColor3f(1, 0.854902, 0.72549);glVertex3f(70,-60,-10);glVertex3f(70,-60, 10);glVertex3f(70,60,10);glVertex3f(70,60,-10);glEnd();
//kanan depan
    glBegin(GL_QUADS);
        glColor3f(1, 0.854902, 0.72549);glVertex3f(70,-60, 10);glVertex3f(150,-60,10);glVertex3f(150,60,10);glVertex3f(70,60,10);glEnd();
//samping kanan
    glBegin(GL_QUADS);
        glColor3f(1, 0.854902, 0.72549);glVertex3f(150,-60,10);glVertex3f(150,-60,-190);glVertex3f(150,60,-190);glVertex3f(150,60,10);glEnd();
//samping kiri
    glBegin(GL_QUADS);
        glColor3f(1, 0.854902, 0.72549);glVertex3f(-150,-60,10);glVertex3f(-150,-60,-190);glVertex3f(-150,60,-190);glVertex3f(-150,60,10);glEnd();
//belakang
    glBegin(GL_QUADS);
        glColor3f(1, 0.854902, 0.72549);glVertex3f(-150,-60,-190);glVertex3f(150,-60,-190);glVertex3f(150,60,-190);glVertex3f(-150,60,-190);glEnd();
//bawah kiri
    glBegin(GL_QUADS);
        glColor3f(0.992157, 0.960784, 0.901961);glVertex3f(-150,-60,10);glVertex3f(-50,-60,10);glVertex3f(-50,-60,-190);glVertex3f(-150,-60,-190);glEnd();
//bawah tengah
     glBegin(GL_QUADS);
        glColor3f(0.992157, 0.960784, 0.901961);glVertex3f(-50,-60,-10);glVertex3f(70,-60,-10);glVertex3f(70,-60,-190);glVertex3f(-50,-60,-190);glEnd();
//bawah kanan
    glBegin(GL_QUADS);
        glColor3f(0.992157, 0.960784, 0.901961);glVertex3f(70,-60,10);glVertex3f(150,-60,10);glVertex3f(150,-60,-190);glVertex3f(70,-60,-190);glEnd();
//ternit
    glBegin(GL_QUADS);
        glColor3f(0.992157, 0.960784, 0.901961);glVertex3f(-150,60,34.5);glVertex3f(174,60,34.5);glVertex3f(174,60,-205);glVertex3f(-150,60,-205);glEnd();
//atap depan
    glBegin(GL_QUADS);
        glColor3f(0.545098, 0.270588, 0.07451);glVertex3f(-150,50,40);glVertex3f(180,50,40);glVertex3f(150,120,10);glVertex3f(-150,120,10);glEnd();
//atap kanan
    glBegin(GL_QUADS);
        glColor3f(0.545098, 0.270588, 0.07451);glVertex3f(180,50,40);glVertex3f(180,50,-210);glVertex3f(150,120,-190);glVertex3f(150,120,10);glEnd();
//atap belakang
    glBegin(GL_QUADS);
        glColor3f(0.545098, 0.270588, 0.07451);glVertex3f(-150,50,-210);glVertex3f(180,50,-210);glVertex3f(150,120,-190);glVertex3f(-150,120,-190);glEnd();
//atap atas
    glBegin(GL_QUADS);
        glColor3f(0.545098, 0.270588, 0.07451);glVertex3f(-150,120,10);glVertex3f(150,120,10);glVertex3f(150,120,-190);glVertex3f(-150,120,-190);glEnd();
//atap kiri
    glBegin(GL_QUADS);
        glColor3f(1, 0.854902, 0.72549);glVertex3f(-150,60,-205);glVertex3f(-150,60,35);glVertex3f(-150,120,10);glVertex3f(-150,120,-190);glEnd();
//bingkai1
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(-150,-60,11);glVertex3f(-147,-60,11);glVertex3f(-147,26,11);glVertex3f(-150,26,11);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(-120,-60,11);glVertex3f(-117,-60,11);glVertex3f(-117,26,11);glVertex3f(-120,26,11);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(-80,-20,11);glVertex3f(-77,-20,11);glVertex3f(-77,26,11);glVertex3f(-80,26,11);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(-53,-20,11);glVertex3f(-50,-20,11);glVertex3f(-50,26,11);glVertex3f(-53,26,11);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(-150,26,11);glVertex3f(-50,26,11);glVertex3f(-50,29,11);glVertex3f(-150,29,11);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(-117,-23,11);glVertex3f(-50,-23,11);glVertex3f(-50,-20,11);glVertex3f(-117,-20,11);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(-150,20,11);glVertex3f(-50,20,11);glVertex3f(-50,23,11);glVertex3f(-150,23,11);glEnd();
//pintu1
    glBegin(GL_QUADS);
        glColor3f(0.35, 0.16, 0.14);glVertex3f(-147,-60,11);glVertex3f(-120,-60,11);glVertex3f(-120,20,11);glVertex3f(-147,20,11);glEnd();
//gagang1
    glPointSize(4);
    glBegin(GL_POINTS);
        glColor3f(0.90, 0.91, 0.98);glVertex3f(-123,-15,12);glEnd();
//kaca1
    glBegin(GL_QUADS);
        glColor3f(0.941176, 0.941176, 0.901961);glVertex3f(-117,-20,11);glVertex3f(-80,-20,11);glVertex3f(-80,20,11);glVertex3f(-117,20,11);glEnd();
//jendela1
    glBegin(GL_QUADS);
        glColor3f(0.941176, 0.941176, 0.901961);glVertex3f(-77,-20,11);glVertex3f(-53,-20,11);glVertex3f(-53,20,11);glVertex3f(-77,20,11);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(-77,-17,12);glVertex3f(-52,-17,12);glVertex3f(-52,-14,12);glVertex3f(-77,-14,12);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(-77,-11,12);glVertex3f(-52,-11,12);glVertex3f(-52,-8,12);glVertex3f(-77,-8,12);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(-77,-5,12);glVertex3f(-52,-5,12);glVertex3f(-52,-2,12);glVertex3f(-77,-2,12);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(-77,1,12);glVertex3f(-52,1,12);glVertex3f(-52,4,12);glVertex3f(-77,4,12);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(-77,7,12);glVertex3f(-52,7,12);glVertex3f(-52,10,12);glVertex3f(-77,10,12);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(-77,13,12);glVertex3f(-52,13,12);glVertex3f(-52,16,12);glVertex3f(-77,16,12);glEnd();
//bingkai2
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(-50,-60,-9);glVertex3f(-47,-60,-9);glVertex3f(-47,26,-9);glVertex3f(-50,26,-9);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(-20,-60,-9);glVertex3f(-17,-60,-9);glVertex3f(-17,26,-9);glVertex3f(-20,26,-9);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(40,-20,-9);glVertex3f(43,-20,-9);glVertex3f(43,26,-9);glVertex3f(40,26,-9);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(67,-20,-9);glVertex3f(70,-20,-9);glVertex3f(70,26,-9);glVertex3f(67,26,-9);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(-17,-23,-9);glVertex3f(70,-23,-9);glVertex3f(70,-20,-9);glVertex3f(-17,-20,-9);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(-50,20,-9);glVertex3f(70,20,-9);glVertex3f(70,23,-9);glVertex3f(-50,23,-9);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(-50,26,-9);glVertex3f(70,26,-9);glVertex3f(70,29,-9);glVertex3f(-50,29,-9);glEnd();
//pintu2
    glBegin(GL_QUADS);
        glColor3f(0.35, 0.16, 0.14);glVertex3f(-47,-60,-9);glVertex3f(-20,-60,-9);glVertex3f(-20,20,-9);glVertex3f(-47,20,-9);glEnd();
//gagang1
    glPointSize(4);
    glBegin(GL_POINTS);
        glColor3f(0.90, 0.91, 0.98);glVertex3f(-23,-15,-8);glEnd();
//kaca2
    glBegin(GL_QUADS);
        glColor3f(0.941176, 0.941176, 0.901961);glVertex3f(-17,-20,-9);glVertex3f(40,-20,-9);glVertex3f(40,20,-9);glVertex3f(-17,20,-9);glEnd();
//jendela2
    glBegin(GL_QUADS);
        glColor3f(0.941176, 0.941176, 0.901961);glVertex3f(43,-20,-9);glVertex3f(67,-20,-9);glVertex3f(67,20,-9);glVertex3f(43,20,-9);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(43,-17,-8);glVertex3f(68,-17,-8);glVertex3f(68,-14,-8);glVertex3f(43,-14,-8);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(43,-11,-8);glVertex3f(68,-11,-8);glVertex3f(68,-8,-8);glVertex3f(43,-8,-8);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(43,-5,-8);glVertex3f(68,-5,-8);glVertex3f(68,-2,-8);glVertex3f(43,-2,-8);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(43,1,-8);glVertex3f(68,1,-8);glVertex3f(68,4,-8);glVertex3f(43,4,-8);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(43,7,-8);glVertex3f(68,7,-8);glVertex3f(68,10,-8);glVertex3f(43,10,-8);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(43,13,-8);glVertex3f(68,13,-8);glVertex3f(68,16,-8);glVertex3f(43,16,-8);glEnd();glEnd();
//bingkai3
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(123,-23,11);glVertex3f(145,-23,11);glVertex3f(145,-20,11);glVertex3f(123,-20,11);glEnd();
      glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(123,20,11);glVertex3f(145,20,11);glVertex3f(145,23,11);glVertex3f(123,23,11);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(120,-23,11);glVertex3f(123,-23,11);glVertex3f(123,26,11);glVertex3f(120,26,11);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(145,-23,11);glVertex3f(148,-23,11);glVertex3f(148,26,11);glVertex3f(145,26,11);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(120,26,11);glVertex3f(148,26,11);glVertex3f(148,29,11);glVertex3f(120,29,11);glEnd();
//jendela3
    glBegin(GL_QUADS);
        glColor3f(0.941176, 0.941176, 0.901961);glVertex3f(123,-20,11);glVertex3f(145,-20,11);glVertex3f(145,20,11);glVertex3f(123,20,11);glEnd();
//bingkai4
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(150,-23,-163);glVertex3f(151,-23,-187);glVertex3f(151,-20,-187);glVertex3f(150,-20,-163);glEnd();
      glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(150,20,-163);glVertex3f(151,20,-187);glVertex3f(151,23,-187);glVertex3f(150,23,-163);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(150,-23,-160);glVertex3f(151,-23,-164);glVertex3f(151,26,-164);glVertex3f(150,26,-160);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(150,-23,-186);glVertex3f(151,-23,-190);glVertex3f(151,26,-190);glVertex3f(150,26,-186);glEnd();
    glBegin(GL_QUADS);
        glColor3f(0, 0, 0);glVertex3f(150,25,-160);glVertex3f(151,25,-190);glVertex3f(151,29,-190);glVertex3f(150,29,-160);glEnd();
//jendela4
    glBegin(GL_QUADS);
        glColor3f(0.941176, 0.941176, 0.901961);glVertex3f(150,-20,-163);glVertex3f(151,-20,-187);glVertex3f(151,20,-187);glVertex3f(150,20,-163);glEnd();
//Rak
    glBegin(GL_QUADS);glColor3f(1, 0.713725, 0.756863);//1
        glVertex3f(-130,-15,-169);glVertex3f(-110,-15,-169);glVertex3f(-110,-15,-189);glVertex3f(-130,-15,-189);glEnd();
    glBegin(GL_QUADS);glColor3f(1, 0.752941, 0.796078);//2
        glVertex3f(-130,-30,-169);glVertex3f(-110,-30,-169);glVertex3f(-110,-30,-189);glVertex3f(-130,-30,-189);glEnd();
    glBegin(GL_QUADS);glColor3f(1, 0.078431, 0.576471);//3
        glVertex3f(-130,-45,-169);glVertex3f(-110,-45,-169);glVertex3f(-110,-45,-189);glVertex3f(-130,-45,-189);glEnd();
    glBegin(GL_QUADS);glColor3f(1, 0.411765, 0.705882);//4
        glVertex3f(-130,-59,-169);glVertex3f(-110,-59,-169);glVertex3f(-110,-59,-189);glVertex3f(-130,-59,-189);glEnd();
    glBegin(GL_QUADS);glColor3f(0.580392, 0, 0.827451);//kiri
        glVertex3f(-130,-59,-169);glVertex3f(-130,-59,-189);glVertex3f(-130,-15,-189);glVertex3f(-130,-15,-169);glEnd();
    glBegin(GL_QUADS);//belakang
        glVertex3f(-130,-59,-189);glVertex3f(-110,-59,-189);glVertex3f(-110,-15,-189);glVertex3f(-130,-15,-189);glEnd();
//Meja
    //meja
    glColor3f(0, 0, 0.501961);
    glBegin(GL_QUADS);//atas
        glVertex3f(-120,-30,-50);glVertex3f(-75,-30,-50);glVertex3f(-75,-30,-90);glVertex3f(-120,-30,-90);glEnd();
    glBegin(GL_QUADS);//bawah
        glVertex3f(-120,-35,-50);glVertex3f(-75,-35,-50);glVertex3f(-75,-35,-90);glVertex3f(-120,-35,-90);glEnd();
    glBegin(GL_QUADS);//depan
        glVertex3f(-120,-35,-50);glVertex3f(-75,-35,-50);glVertex3f(-75,-30,-50);glVertex3f(-120,-30,-50);glEnd();
    glBegin(GL_QUADS);//belakang
        glVertex3f(-120,-35,-90);glVertex3f(-75,-35,-90);glVertex3f(-75,-30,-90);glVertex3f(-120,-30,-90);glEnd();
    glBegin(GL_QUADS);//kanan
        glVertex3f(-75,-35,-50);glVertex3f(-75,-35,-90);glVertex3f(-75,-30,-90);glVertex3f(-75,-30,-50);glEnd();
    glBegin(GL_QUADS);//kiri
        glVertex3f(-120,-35,-50);glVertex3f(-120,-35,-90);glVertex3f(-120,-30,-90);glVertex3f(-120,-30,-50);glEnd();
    //kaki1
    glBegin(GL_QUADS);//atas
        glVertex3f(-120,-35,-50);glVertex3f(-115,-35,-50);glVertex3f(-115,-35,-55);glVertex3f(-120,-35,-55);glEnd();
    glBegin(GL_QUADS);//bawah
        glVertex3f(-120,-59,-50);glVertex3f(-115,-59,-50);glVertex3f(-115,-59,-55);glVertex3f(-120,-59,-55);glEnd();
    glBegin(GL_QUADS);//depan
        glVertex3f(-120,-59,-50);glVertex3f(-115,-59,-50);glVertex3f(-115,-35,-50);glVertex3f(-120,-35,-50);glEnd();
    glBegin(GL_QUADS);//belakang
        glVertex3f(-120,-59,-55);glVertex3f(-115,-59,-55);glVertex3f(-115,-35,-55);glVertex3f(-120,-35,-55);glEnd();
    glBegin(GL_QUADS);//kanan
        glVertex3f(-115,-59,-50);glVertex3f(-115,-59,-55);glVertex3f(-115,-35,-55);glVertex3f(-115,-35,-50);glEnd();
    glBegin(GL_QUADS);//kiri
        glVertex3f(-120,-59,-50);glVertex3f(-120,-59,-55);glVertex3f(-120,-35,-55);glVertex3f(-120,-35,-50);glEnd();
    //kaki2
    glBegin(GL_QUADS);//atas
        glVertex3f(-80,-35,-50);glVertex3f(-75,-35,-50);glVertex3f(-75,-35,-55);glVertex3f(-80,-35,-55);glEnd();
    glBegin(GL_QUADS);//bawah
        glVertex3f(-80,-59,-50);glVertex3f(-75,-59,-50);glVertex3f(-75,-59,-55);glVertex3f(-80,-59,-55);glEnd();
    glBegin(GL_QUADS);//depan
        glVertex3f(-80,-59,-50);glVertex3f(-75,-59,-50);glVertex3f(-75,-35,-50);glVertex3f(-80,-35,-50);glEnd();
    glBegin(GL_QUADS);//belakang
        glVertex3f(-80,-59,-55);glVertex3f(-75,-59,-55);glVertex3f(-75,-35,-55);glVertex3f(-80,-35,-55);glEnd();
    glBegin(GL_QUADS);//kanan
        glVertex3f(-75,-59,-50);glVertex3f(-75,-59,-55);glVertex3f(-75,-35,-55);glVertex3f(-75,-35,-50);glEnd();
    glBegin(GL_QUADS);//kiri
        glVertex3f(-80,-59,-50);glVertex3f(-80,-59,-55);glVertex3f(-80,-35,-55);glVertex3f(-80,-35,-50);glEnd();
    //kaki3
    glBegin(GL_QUADS);//atas
        glVertex3f(-80,-35,-85);glVertex3f(-75,-35,-85);glVertex3f(-75,-35,-90);glVertex3f(-80,-35,-90);glEnd();
    glBegin(GL_QUADS);//bawah
        glVertex3f(-80,-59,-85);glVertex3f(-75,-59,-85);glVertex3f(-75,-59,-90);glVertex3f(-80,-59,-90);glEnd();
    glBegin(GL_QUADS);//depan
        glVertex3f(-80,-59,-85);glVertex3f(-75,-59,-85);glVertex3f(-75,-35,-85);glVertex3f(-80,-35,-85);glEnd();
    glBegin(GL_QUADS);//belakang
        glVertex3f(-80,-59,-90);glVertex3f(-75,-59,-90);glVertex3f(-75,-35,-90);glVertex3f(-80,-35,-90);glEnd();
    glBegin(GL_QUADS);//kanan
        glVertex3f(-75,-59,-85);glVertex3f(-75,-59,-90);glVertex3f(-75,-35,-90);glVertex3f(-75,-35,-85);glEnd();
    glBegin(GL_QUADS);//kiri
        glVertex3f(-80,-59,-85);glVertex3f(-80,-59,-90);glVertex3f(-80,-35,-90);glVertex3f(-80,-35,-85);glEnd();
    //kaki4
    glBegin(GL_QUADS);//atas
        glVertex3f(-120,-35,-85);glVertex3f(-115,-35,-85);glVertex3f(-115,-35,-90);glVertex3f(-120,-35,-90);glEnd();
    glBegin(GL_QUADS);//bawah
        glVertex3f(-120,-59,-85);glVertex3f(-115,-59,-85);glVertex3f(-115,-59,-90);glVertex3f(-120,-59,-90);glEnd();
    glBegin(GL_QUADS);//depan
        glVertex3f(-120,-59,-85);glVertex3f(-115,-59,-85);glVertex3f(-115,-35,-85);glVertex3f(-120,-35,-85);glEnd();
    glBegin(GL_QUADS);//belakang
        glVertex3f(-120,-59,-90);glVertex3f(-115,-59,-90);glVertex3f(-115,-35,-90);glVertex3f(-120,-35,-90);glEnd();
    glBegin(GL_QUADS);//kanan
        glVertex3f(-115,-59,-85);glVertex3f(-115,-59,-90);glVertex3f(-115,-35,-90);glVertex3f(-115,-35,-85);glEnd();
    glBegin(GL_QUADS);//kiri
        glVertex3f(-120,-59,-85);glVertex3f(-120,-59,-90);glVertex3f(-120,-35,-90);glVertex3f(-120,-35,-85);glEnd();
//Kursi
    //dudukan
    glBegin(GL_QUADS);glColor3f(1,0,0);//atas
        glVertex3f(-60,-40,-50);glVertex3f(-40,-40,-50);glVertex3f(-42.5,-40,-70);glVertex3f(-57.5,-40,-70);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//bawah
        glVertex3f(-60,-45,-50);glVertex3f(-40,-45,-50);glVertex3f(-42.5,-45,-70);glVertex3f(-57.5,-45,-70);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//depan
        glVertex3f(-60,-45,-50);glVertex3f(-40,-45,-50);glVertex3f(-40,-40,-50);glVertex3f(-60,-40,-50);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//belakang
        glVertex3f(-57.5,-45,-70);glVertex3f(-42.5,-45,-70);glVertex3f(-42.5,-40,-70);glVertex3f(-57.5,-40,-70);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//kanan
        glVertex3f(-40,-45,-50);glVertex3f(-42.5,-45,-70);glVertex3f(-42.5,-40,-70);glVertex3f(-40,-40,-50);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//kiri
        glVertex3f(-60,-45,-50);glVertex3f(-57.5,-45,-70);glVertex3f(-57.5,-40,-70);glVertex3f(-60,-40,-50);glEnd();
    //sandaran
    glBegin(GL_QUADS);glColor3f(1,0,0);//atas
        glVertex3f(-57.5,-20,-65);glVertex3f(-42.5,-20,-65);glVertex3f(-42.5,-20,-70);glVertex3f(-57.5,-20,-70);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//bawah
        glVertex3f(-57.5,-40,-65);glVertex3f(-42.5,-40,-65);glVertex3f(-42.5,-40,-70);glVertex3f(-57.5,-40,-70);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//depan
        glVertex3f(-57.5,-40,-65);glVertex3f(-42.5,-40,-65);glVertex3f(-42.5,-20,-65);glVertex3f(-57.5,-20,-65);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//belakang
        glVertex3f(-57.5,-40,-70);glVertex3f(-42.5,-40,-70);glVertex3f(-42.5,-20,-70);glVertex3f(-57.5,-20,-70);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//kanan
        glVertex3f(-42.5,-40,-65);glVertex3f(-42.5,-40,-70);glVertex3f(-42.5,-20,-70);glVertex3f(-42.5,-20,-65);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//kiri
        glVertex3f(-57.5,-40,-65);glVertex3f(-57.5,-40,-70);glVertex3f(-57.5,-20,-70);glVertex3f(-57.5,-20,-65);glEnd();
    //kaki1
    glBegin(GL_QUADS);glColor3f(1,0,0);//atas
        glVertex3f(-60,-45,-50);glVertex3f(-57.5,-45,-50);glVertex3f(-57.5,-45,-55);glVertex3f(-60,-45,-55);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//bawah
        glVertex3f(-60,-59,-50);glVertex3f(-57.5,-59,-50);glVertex3f(-57.5,-59,-55);glVertex3f(-60,-59,-55);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//depan
        glVertex3f(-60,-59,-50);glVertex3f(-57.5,-59,-50);glVertex3f(-57.5,-45,-50);glVertex3f(-60,-45,-50);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//belakang
        glVertex3f(-60,-59,-55);glVertex3f(-57.5,-59,-55);glVertex3f(-57.5,-45,-55);glVertex3f(-60,-45,-55);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//kanan
        glVertex3f(-57.5,-59,-50);glVertex3f(-57.5,-59,-55);glVertex3f(-57.5,-45,-55);glVertex3f(-57.5,-45,-50);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//kiri
        glVertex3f(-60,-59,-50);glVertex3f(-60,-59,-55);glVertex3f(-60,-45,-55);glVertex3f(-60,-45,-50);glEnd();
    //kaki2
    glBegin(GL_QUADS);glColor3f(1,0,0);//atas
        glVertex3f(-40,-45,-50);glVertex3f(-42.5,-45,-50);glVertex3f(-42.5,-45,-55);glVertex3f(-40,-45,-55);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//bawah
        glVertex3f(-40,-59,-50);glVertex3f(-42.5,-59,-50);glVertex3f(-42.5,-59,-55);glVertex3f(-40,-59,-55);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//depan
        glVertex3f(-40,-59,-50);glVertex3f(-42.5,-59,-50);glVertex3f(-42.5,-45,-50);glVertex3f(-40,-45,-50);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//belakang
        glVertex3f(-40,-59,-55);glVertex3f(-42.5,-59,-55);glVertex3f(-42.5,-45,-55);glVertex3f(-40,-45,-55);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//kanan
        glVertex3f(-42.5,-59,-50);glVertex3f(-42.5,-59,-55);glVertex3f(-42.5,-45,-55);glVertex3f(-42.5,-45,-50);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//kiri
        glVertex3f(-40,-59,-50);glVertex3f(-40,-59,-55);glVertex3f(-40,-45,-55);glVertex3f(-40,-45,-50);glEnd();
    //kaki3
    glBegin(GL_QUADS);glColor3f(1,0,0);//atas
        glVertex3f(-42.5,-45,-65);glVertex3f(-45,-45,-65);glVertex3f(-45,-45,-70);glVertex3f(-42.5,-45,-70);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//bawah
        glVertex3f(-42.5,-59,-65);glVertex3f(-45,-59,-65);glVertex3f(-45,-59,-70);glVertex3f(-42.5,-59,-70);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//depan
        glVertex3f(-42.5,-59,-65);glVertex3f(-45,-59,-65);glVertex3f(-45,-45,-65);glVertex3f(-42.5,-45,-65);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//belakang
        glVertex3f(-42.5,-59,-70);glVertex3f(-45,-59,-70);glVertex3f(-45,-45,-70);glVertex3f(-42.5,-45,-70);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//kanan
        glVertex3f(-45,-59,-65);glVertex3f(-45,-59,-70);glVertex3f(-45,-45,-70);glVertex3f(-45,-45,-65);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//kiri
        glVertex3f(-42.5,-59,-65);glVertex3f(-42.5,-59,-70);glVertex3f(-42.5,-45,-70);glVertex3f(-42.5,-45,-65);glEnd();
    //kaki4
    glBegin(GL_QUADS);glColor3f(1,0,0);//atas
        glVertex3f(-57.5,-45,-65);glVertex3f(-55,-45,-65);glVertex3f(-55,-45,-70);glVertex3f(-57.5,-45,-70);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//bawah
        glVertex3f(-57.5,-59,-65);glVertex3f(-55,-59,-65);glVertex3f(-55,-59,-70);glVertex3f(-57.5,-59,-70);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//depan
        glVertex3f(-57.5,-59,-65);glVertex3f(-55,-59,-65);glVertex3f(-55,-45,-65);glVertex3f(-57.5,-45,-65);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//belakang
        glVertex3f(-57.5,-59,-70);glVertex3f(-55,-59,-70);glVertex3f(-55,-45,-70);glVertex3f(-57.5,-45,-70);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//kanan
        glVertex3f(-55,-59,-65);glVertex3f(-55,-59,-70);glVertex3f(-55,-45,-70);glVertex3f(-55,-45,-65);glEnd();
    glBegin(GL_QUADS);glColor3f(1,0,0);//kiri
        glVertex3f(-57.5,-59,-65);glVertex3f(-57.5,-59,-70);glVertex3f(-57.5,-45,-70);glVertex3f(-57.5,-45,-65);glEnd();
//TV
    glColor3f(0.192157, 0.309804, 0.309804);
    glBegin(GL_QUADS);//bingkai depan
        glVertex3f(-23,-18,-185);glVertex3f(18,-18,-185);glVertex3f(18,18,-185);glVertex3f(-23,18,-185);glEnd();
    glBegin(GL_QUADS);//bingkai kanan
        glVertex3f(18,-18,-185);glVertex3f(18,-18,-189);glVertex3f(18,18,-189);glVertex3f(18,18,-185);glEnd();
    glBegin(GL_QUADS);//bingkai kiri
        glVertex3f(-23,-18,-185);glVertex3f(-23,-18,-189);glVertex3f(-23,18,-189);glVertex3f(-23,18,-185);glEnd();
    glBegin(GL_QUADS);//bingkai belakang
        glVertex3f(-23,-18,-189);glVertex3f(18,-18,-189);glVertex3f(18,18,-189);glVertex3f(-23,18,-189);glEnd();
    glBegin(GL_QUADS);//bingkai atas
        glVertex3f(-23,18,-185);glVertex3f(18,18,-185);glVertex3f(18,18,-189);glVertex3f(-23,18,-189);glEnd();
    glBegin(GL_QUADS);//bingkai bawah
        glVertex3f(-23,-18,-185);glVertex3f(18,-18,-185);glVertex3f(18,-18,-189);glVertex3f(-23,-18,-189);glEnd();
    glBegin(GL_QUADS);glColor3f(0,0,0);//layar
        glVertex3f(-20,-15,-184);glVertex3f(15,-15,-184);glVertex3f(15,15,-184);glVertex3f(-20,15,-184);glEnd();
//Lemari
    glBegin(GL_QUADS);glColor3f(1, 0.54902, 0);//belakang
        glVertex3f(80,-59,-189);glVertex3f(125,-59,-189);glVertex3f(125,20,-189);glVertex3f(80,20,-189);glEnd();
    glBegin(GL_QUADS);//kanan
        glVertex3f(125,-59,-159);glVertex3f(125,-59,-189);glVertex3f(125,20,-189);glVertex3f(125,20,-159);glEnd();
    glBegin(GL_QUADS);//kiri
        glVertex3f(80,-59,-159);glVertex3f(80,-59,-189);glVertex3f(80,20,-189);glVertex3f(80,20,-159);glEnd();
    glBegin(GL_QUADS);glColor3f(0.956863, 0.643137, 0.376471);//atas
        glVertex3f(80,20,-159);glVertex3f(125,20,-159);glVertex3f(125,20,-189);glVertex3f(80,20,-189);glEnd();
    glBegin(GL_QUADS);//bawah
        glVertex3f(80,-59,-159);glVertex3f(125,-59,-159);glVertex3f(125,-59,-189);glVertex3f(80,-59,-189);glEnd();
    glBegin(GL_QUADS);//sekat tengah
        glVertex3f(101,-59,-159);glVertex3f(104,-59,-159);glVertex3f(104,20,-159);glVertex3f(101,20,-159);glEnd();
    glBegin(GL_QUADS);glColor3f(1, 0.54902, 0);//depan kanan
        glVertex3f(104,-59,-159);glVertex3f(125,-59,-159);glVertex3f(125,20,-159);glVertex3f(104,20,-159);glEnd();
    glBegin(GL_QUADS);//depan kiri
        glVertex3f(80,-59,-159);glVertex3f(101,-59,-159);glVertex3f(101,20,-159);glVertex3f(80,20,-159);glEnd();
    glBegin(GL_POINTS);glPointSize(5);glColor3f(1,1,0);//gagang kanan
        glVertex3f(107,-20,-158);glEnd();
    glBegin(GL_POINTS);glPointSize(5);//gagang kiri
        glVertex3f(98,-20,-158);glEnd();
}
void tampil(void)
{
    if(is_depth)
        glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    else
        glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(0,0,3,0,0,0,0,1,0);
    glRotatef(xrot,1,0,0);
    glRotatef(yrot,0,1,0);
    glPushMatrix();
    rumah();
    glPopMatrix();
    glutSwapBuffers();

}
void keyboard(unsigned char key, int x, int y)
{
    if(key=='5'){
        is_depth=0;
        glDisable(GL_DEPTH_TEST);
    }
    else{
        is_depth=1;
        glEnable(GL_DEPTH_TEST);
    }
    tampil();
}
void idle()
{
    if(!mouseDown){
        xrot+=0.3;
        yrot+=0.4;
    }
    glutPostRedisplay();
}
void mouse(int button, int state, int x, int y)
{
    if(button==GLUT_LEFT_BUTTON&&state==GLUT_DOWN){
        mouseDown=true;
        xdiff = x-yrot;
        ydiff = -y+xrot;
    }
    else
        mouseDown=false;
}
void mouseMotion(int x, int y)
{
    if(mouseDown){
        yrot = x-xdiff;
        xrot = y+ydiff;
        glutPostRedisplay();
    }
}
void ukuran(int lebar, int tinggi)
{
    if(tinggi==0) tinggi=1;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(70,lebar/tinggi,5,500);
    glTranslatef(0,-5,-350);
    glMatrixMode(GL_MODELVIEW);
}

