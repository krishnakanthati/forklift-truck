#include<windows.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<stdio.h>

GLfloat T = 130;
GLfloat Fa=0,Fb=0.5,Fc=0.25,Fd=0.25,Fe=0.2,Ff=0.3,
        Fg=0.4,Fh=0.4,Fi=0.4,Fj=0.4,Fk=0.4,Fl=-0.02,
        Fm=0.1,Fn=-0.02,Fo=0.1;

GLfloat Cz = 3, Cy = 2, Cx = 1.5;

block = 1;

GLfloat BAy=0.25, BAx=-1.2;
GLfloat BBy=0.75, BBx=-1.2;
GLfloat BlockAScaleX=0, BlockAScaleY=0, BlockAScaleZ=0,
        BlockBScaleX=0, BlockBScaleY=0, BlockBScaleZ=0;

void Draw()
{
    GLfloat Pos[] = {0,1,0,1};
    GLfloat Col[] = {1,1,1,1};

    GLfloat M0[] = {0, 1, 1, 1};
    GLfloat M1[] = {1.0, 0.0, 0.0, 1};
    GLfloat M2[] = {0, 0, 0.5, 1};
    GLfloat M3[] = {0.0, 1.0, 0.0, 1};
    GLfloat M4[] = {1.0, 1.0, 0.0, 1};

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glLightfv(GL_LIGHT0,GL_POSITION,Pos);
    glLightfv(GL_LIGHT0,GL_DIFFUSE,Col);


    gluLookAt(Cx,Cy,Cz,0,0,0,0,1,0);

    glRotatef(T,0,1,0);

    glPushMatrix();
        glScalef(0.9,0.02,1);
        glutSolidCube(1);
    glPopMatrix();

    // lower base
    glPushMatrix();
        glTranslatef(0,0,0);
        glScalef(1.7,0.02,0.6);
        glutSolidCube(1);
    glPopMatrix();

    // front forks support
    glPushMatrix();
        glTranslatef(-0.8, 0.5, -0.2);
        glScalef(0.1,.8,0.21);
        glutSolidCube(1);
    glPopMatrix();

    // front forks support
    glPushMatrix();
        glTranslatef(-0.8, 0.5, 0.2);
        glScalef(0.1,0.8,0.21);
        glutSolidCube(1);
    glPopMatrix();

    // blue blocks
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE, M2);
    glPushMatrix();
        glTranslatef(-0.8, 0.85, 0.2);
        glScalef(0.11,0.11,0.22);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.8, 0.85, -0.2);
        glScalef(0.11,0.11,0.22);
        glutSolidCube(1);
    glPopMatrix();

    glPopAttrib();

    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE, M1);
    // forks frame
    glPushMatrix();
        glTranslatef(-0.9, Fa, 0);
        glScalef(0.04,0.04,0.6);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.9, Fb, 0);
        glScalef(0.04,0.04,0.6);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.9, Fc, 0.28);
        glScalef(0.04,0.5,0.04);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.9, Fd, -0.28);
        glScalef(0.04,0.5,0.04);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.86, 0.4, -0.28);
        glScalef(0.04,0.8,0.04);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.86, 0.4, 0.28);
        glScalef(0.04,0.8,0.04);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.86, 0, 0);
        glScalef(0.04,0.04,0.6);
        glutSolidCube(1);
    glPopMatrix();

    // frame middle bars
    glPushMatrix();
        glTranslatef(-0.9, Fe, 0);
        glScalef(0.04,0.04,0.6);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.9, Ff, 0);
        glScalef(0.04,0.04,0.6);
        glutSolidCube(1);
    glPopMatrix();

    // mini bars
    glPushMatrix();
        glTranslatef(-0.9, Fg, 0.2);
        glScalef(0.04,0.2,0.04);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.9, Fh, -0.2);
        glScalef(0.04,0.2,0.04);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.9, Fi, -0.1);
        glScalef(0.04,0.2,0.04);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.9, Fj, 0.1);
        glScalef(0.04,0.2,0.04);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.9, Fk, 0);
        glScalef(0.04,0.2,0.04);
        glutSolidCube(1);
    glPopMatrix();

    // left fork
    glPushMatrix();
        glTranslatef(-1.1, Fl, 0.16);
        glScalef(0.4,0.008,0.12);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.9, Fm, 0.16);
        glScalef(0.04, 0.3, 0.12);
        glutSolidCube(1);
    glPopMatrix();

    // right fork
    glPushMatrix();
        glTranslatef(-1.1, Fn, -0.16);
        glScalef(0.4,0.008,0.12);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.9, Fo, -0.16);
        glScalef(0.04, 0.3, 0.12);
        glutSolidCube(1);
    glPopMatrix();

    glPopAttrib();

    // back block
    glPushMatrix();
        glTranslatef(0.65, 0.18, 0);
        glScalef(0.38, 0.35, 0.6);
        glutSolidCube(1);
    glPopMatrix();

    // back block slab
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE, M2);
    glPushMatrix();
        glTranslatef(0.85, 0.18, 0);
        glScalef(0.03, 0.3, 0.5);
        glutSolidCube(1);
    glPopMatrix();

    glPopAttrib();

    // seat
    glPushMatrix();
        glTranslatef(0.13, .25, 0);
        glScalef(0.4, 0.15, 0.4);
        glutSolidCube(1);
    glPopMatrix();

    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE, M3);

    glPushMatrix();
        glTranslatef(0.08, .36, 0);
        glScalef(0.3, 0.03, 0.3);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.22, .5, 0);
        glScalef(0.03, 0.3, 0.3);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.13, .5, 0.18);
        glScalef(0.2, 0.03, 0.06);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.13, .5, -0.18);
        glScalef(0.2, 0.03, 0.06);
        glutSolidCube(1);
    glPopMatrix();

    glPopAttrib();

    // front block
    glPushMatrix();
        glTranslatef(-0.65, 0.25, 0);
        glScalef(0.38, 0.5, 0.6);
        glutSolidCube(1);
    glPopMatrix();


    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE, M2);

    // back right slab
    glPushMatrix();
        glTranslatef(0.43,0.18,-0.4);
        glScalef(0.05, 0.35, 0.2);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.6,0.35,-0.4);
        glScalef(0.42,0.06,0.2);
        glutSolidCube(1);
    glPopMatrix();

    // back stripes
    glPushMatrix();
        glTranslatef(0.5, 0.35, 0);
        glScalef(0.03, 0.03, 0.6);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.55, 0.35, 0);
        glScalef(0.03, 0.03, 0.6);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.6, 0.35, 0);
        glScalef(0.03, 0.03, 0.6);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.65, 0.35, 0);
        glScalef(0.03, 0.03, 0.6);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.7, 0.35, 0);
        glScalef(0.03, 0.03, 0.6);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.75, 0.35, 0);
        glScalef(0.03, 0.03, 0.6);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.8, 0.35, 0);
        glScalef(0.03, 0.03, 0.6);
        glutSolidCube(1);
    glPopMatrix();

    // front stripes
    glPushMatrix();
        glTranslatef(-0.5, 0.5, 0);
        glScalef(0.031, 0.03, 0.61);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.55, 0.5, 0);
        glScalef(0.031, 0.03, 0.61);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.6, 0.5, 0);
        glScalef(0.031, 0.03, 0.61);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.65, 0.5, 0);
        glScalef(0.031, 0.03, 0.61);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.7, 0.5, 0);
        glScalef(0.031, 0.03, 0.61);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.75, 0.5, 0);
        glScalef(0.031, 0.03, 0.59);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.8, 0.5, 0);
        glScalef(0.031, 0.03, 0.59);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.45, 0.5, 0);
        glScalef(0.031, 0.03, 0.59);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.45, 0.45, 0);
        glScalef(0.031, 0.03, 0.59);
        glutSolidCube(1);
    glPopMatrix();

    // front right slab
    glPushMatrix();
        glTranslatef(-0.43,0.18,-0.4);
        glScalef(0.05, 0.35, 0.2);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.6,0.31,-0.4);
        glScalef(0.42,0.06,0.2);
        glutSolidCube(1);
    glPopMatrix();

    // back left slab
    glPushMatrix();
        glTranslatef(0.43,0.18,0.4);
        glScalef(0.05, 0.35, 0.2);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.6,0.35,0.4);
        glScalef(0.42,0.06,0.2);
        glutSolidCube(1);
    glPopMatrix();

    // front left slab
    glPushMatrix();
        glTranslatef(-0.43,0.18,0.4);
        glScalef(0.05, 0.35, 0.2);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.6,0.31,0.4);
        glScalef(0.42,0.06,0.2);
        glutSolidCube(1);
    glPopMatrix();

    // yellow block front left
    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE, M4);
    glPushMatrix();
        glTranslatef(-0.6,0.42,0.4);
        glScalef(0.42,0.13,0.21);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.6,0.42,-0.4);
        glScalef(0.42,0.13,0.21);
        glutSolidCube(1);
    glPopMatrix();

    glPopAttrib();

    // side right bar
    glPushMatrix();
        glTranslatef(0,0.05,0.45);
        glScalef(0.85,0.1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    // side left bar
    glPushMatrix();
        glTranslatef(0,0.05,-0.45);
        glScalef(0.85,0.1,0.1);
        glutSolidCube(1);
    glPopMatrix();

    // side back bar
    glPushMatrix();
        glTranslatef(0.4,0.2,0);
        glScalef(0.1,0.35,1);
        glutSolidCube(1);
    glPopMatrix();

    // side front bar
    glPushMatrix();
        glTranslatef(-0.4,0.2,0);
        glScalef(0.1,0.35,1);
        glutSolidCube(1);
    glPopMatrix();

    glPopAttrib();

    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE, M1);

    // 4 bars
    glPushMatrix();
        glTranslatef(0.32,0.6,0.38);
        glScalef(0.04,0.8,0.04);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.32,0.6,0.38);
        glScalef(0.04,0.8,0.04);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.32,0.6,-0.38);
        glScalef(0.04,0.8,0.04);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.32,0.6,-0.38);
        glScalef(0.04,0.8,0.04);
        glutSolidCube(1);
    glPopMatrix();

    glPopAttrib();

    // side bars

    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE, M4);

    glPushMatrix();
        glTranslatef(0.01,0.2,-0.35);
        glScalef(0.65,0.05,0.08);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.01,0.2,0.35);
        glScalef(0.65,0.05,0.08);
        glutSolidCube(1);
    glPopMatrix();

    glPopAttrib();

    // pipe
    glPushMatrix();
        glTranslatef(0.4,0.4,-0.45);
        glScalef(0.06,0.6,0.06);
        glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
        glRotatef(-80, 0, 0, 1);
        glTranslatef(-0.6,0.55,-0.45);
        glScalef(0.06,0.1,0.06);
        glutSolidCube(1);
    glPopMatrix();

    // block
    glPushMatrix();
        glTranslatef(BAx, BAy, 0);
        glScalef(BlockAScaleX,BlockAScaleY,BlockAScaleZ);
        glutSolidCube(1);
    glPopMatrix();

    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M3);
    glPushMatrix();
        glRotatef(3, 0, 1, 0);
        glTranslatef(BBx, BBy, 0);
        glScalef(BlockBScaleX,BlockBScaleY,BlockBScaleZ);
        glutSolidCube(1);
    glPopMatrix();
    glPopAttrib();

    // glass
    glPushMatrix();
        glTranslatef(0, 0.6, 0);
        glScalef(0.68,0.8,0.8);
        glutWireCube(1);
    glPopMatrix();

    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,M4);

    // glass top
    glPushMatrix();
        glTranslatef(0, 1, 0);
        glScalef(0.68,0.01,0.8);
        glutSolidCube(1);
    glPopMatrix();

    glPopAttrib();

    // Tires
    glPushMatrix();
        glRotatef(0,0,1,0);
        glTranslatef(-0.75,0,-0.45);
        glutWireTorus(0.14, 0.15, 180, 100);
    glPopMatrix();

    glPushMatrix();
        glRotatef(0,0,1,0);
        glTranslatef(0.75,0,0.45);
        glutWireTorus(0.14, 0.15, 180, 100);
    glPopMatrix();

    glPushMatrix();
        glRotatef(0,0,0,0);
        glTranslatef(-0.75,0,0.45);
        glutWireTorus(0.14, 0.15, 180, 100);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.75,0,-0.45);
        glutWireTorus(0.14, 0.15, 180, 100);
    glPopMatrix();

    glPushAttrib(GL_ALL_ATTRIB_BITS);
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,M0);
    glPushMatrix();
        glTranslatef(0, 0.1, 0);
        glScalef(1.24,0.2,1.2);
        glutSolidCube(0.75);
        glPopMatrix();
    glPopAttrib();

    glutSwapBuffers();
}

void Spin()
{
    T = T + 0.4;
    if(T > 360)
        T = 0;
    glutPostRedisplay();
}

void ReverseSpin()
{
    T = T - 0.4;
    if(T > 360)
        T = 0;
    glutPostRedisplay();
}

void Menu(int n)
{
    if(n == 1) blocks();
    if(n == 2) unblocks();
    if(n == 3) help();
    if(n == 0) exit(0);
}

void MyInit()
{
    glClearColor(0, 0, 0, 1);
    glEnable(GL_DEPTH_TEST);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-1,1,-1,1,2,10);
    glMatrixMode(GL_MODELVIEW);

    glutCreateMenu(Menu);
    glutAddMenuEntry("Add a Block", 1);
    glutAddMenuEntry("Remove a Block", 2);
    glutAddMenuEntry("Help", 3);
    glutAddMenuEntry("Exit", 0);
    glutAttachMenu(GLUT_RIGHT_BUTTON);

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
}

void up()
{
    Fa = Fa + 0.005;
    Fb = Fb + 0.005;
    Fc = Fc + 0.005;
    Fd = Fd + 0.005;
    Fe = Fe + 0.005;
    Ff = Ff + 0.005;
    Fg = Fg + 0.005;
    Fh = Fh + 0.005;
    Fi = Fi + 0.005;
    Fj = Fj + 0.005;
    Fk = Fk + 0.005;
    Fl = Fl + 0.005;
    Fm = Fm + 0.005;
    Fn = Fn + 0.005;
    Fo = Fo + 0.005;
    BAy = BAy + 0.005;
    BBy = BBy + 0.005;
}

void down()
{
    Fa = Fa - 0.005;
    Fb = Fb - 0.005;
    Fc = Fc - 0.005;
    Fd = Fd - 0.005;
    Fe = Fe - 0.005;
    Ff = Ff - 0.005;
    Fg = Fg - 0.005;
    Fh = Fh - 0.005;
    Fi = Fi - 0.005;
    Fj = Fj - 0.005;
    Fk = Fk - 0.005;
    Fl = Fl - 0.005;
    Fm = Fm - 0.005;
    Fn = Fn - 0.005;
    Fo = Fo - 0.005;
    BAy = BAy - 0.005;
    BBy = BBy - 0.005;
}

int blocks() // Add blocks
{
    if (block == 1)
    {
        BlockAScaleX = BlockAScaleY = BlockAScaleZ = 0.5;
        block = 2;
        return block;
    }
    if (block == 2)
    {
        BlockBScaleX = BlockBScaleY = BlockBScaleZ = 0.5;
    }
}

int unblocks() // Remove blocks
{
    if (block == 2)
    {
        BlockBScaleX = BlockBScaleY = BlockBScaleZ = 0;
        block = 1;
        return block;
    }
    if (block == 1)
    {
        BlockAScaleX = BlockAScaleY = BlockAScaleZ = 0;
    }
}

void reset()
{
    return Cz = 3, Cy = 1.5, Cx = 1.5, Fa=0, Fb=0.5, Fc=0.25, Fd=0.25,
           Fe=0.2,Ff=0.3,Fg=0.4,Fh=0.4,Fi=0.4,Fj=0.4,Fk=0.4,Fl=-0.02,
           Fm=0.1,Fn=-0.02,Fo=0.1,T=130,
           BlockBScaleX=0, BlockBScaleY=0, BlockBScaleZ=0,
           BlockAScaleX=0, BlockAScaleY=0, BlockAScaleZ=0,
           block = 1,BAy=0.25, BAx=-1.2,BBy=0.75, BBx=-1.2;
}

void StopSpin()
{
    return T;
}

void help()
{
    printf(
           "\n\n|----------------  FORKLIFT TRUCK  --------------|\n\n"
           "|------------------------------------------------|\n"
           "|------------------------------------------------|\n\n          "
           ">> Functions       - Keys   <<\n\n"
           "|------------------------------------------------|\n\n.         "
           "-> Block           - b      <-         .\n\n.         "
           "-> Unblock         - u      <-         .\n\n.         "
           "-> Forks up        - j      <-         .\n\n.         "
           "-> Forks down      - f      <-         .\n\n.         "
           "-> CAM X+          - l      <-         .\n\n.         "
           "-> CAM X-          - s      <-         .\n\n.         "
           "-> CAM Y+          - i      <-         .\n\n.         "
           "-> CAM Y-          - ,      <-         .\n\n.         "
           "-> CAM Z+          - e      <-         .\n\n.         "
           "-> CAM Z-          - x      <-         .\n\n.         "
           "-> Spin            - ;      <-         .\n\n.         "
           "-> Reverse Spin    - a      <-         .\n\n.         "
           "-> Stop Spin       - k or d <-         .\n\n.         "
           "-> Reset           - r      <-         .\n\n.         "
           "-> Help            - h      <-         .\n\n.         "
           "-> Exit            - q      <-         .\n\n"
           "|------------------------------------------------|\n"
           "|------------------------------------------------|\n\n          "
           );
}

void Key(unsigned char ch, int x, int y)
{
    switch(ch)
    {
        case 'j': up(); break;
        case 'f': down(); break;
        case 'b': blocks(); break;
        case 'u': unblocks(); break;
        case 'e': Cz = Cz + 0.2; break;
        case 'x': Cz = Cz - 0.2; break;
        case 'i': Cy = Cy + 0.2; break;
        case ',': Cy = Cy - 0.2; break;
        case 'l': Cx = Cx + 0.2; break;
        case 's': Cx = Cx - 0.2; break;
        case 'r': reset(); break;
        case ';': glutIdleFunc(Spin); break;
        case 'a': glutIdleFunc(ReverseSpin); break;
        case 'k': glutIdleFunc(StopSpin); break;
        case 'd': glutIdleFunc(StopSpin); break;
        case 'h': help(); break;
        case 'q': exit(0); break;
    }
    glutPostRedisplay();
}

int main(int argC,char *argV[])
{
    printf("\n--------------3D FORKLIFT TRUCK VIEW--------------\n\n");
    printf("\n  Help - h\n\n");
    glutInit(&argC,argV);
    glutInitWindowSize(650,650);
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Forklift Truck");
    //glutFullScreen();
    MyInit();
    glutDisplayFunc(Draw);
    glutKeyboardFunc(Key);
    glutIdleFunc(Spin);
    glutMainLoop();
    return 0;