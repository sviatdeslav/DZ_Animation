#include "paints.h"

void tree(Pol f){//Дерево
    glPushMatrix();
    glScalef(0.25,0.25,0);
    glTranslatef(f.x,f.y,0);
    glBegin(GL_QUADS);
    glColor3f(1, 0.1, 0);//Ножка дерева
    glVertex2f(-0.2, -1);
    glVertex2f(-0.2, -0.5);
    glVertex2f(0.2, -0.5);
    glVertex2f(0.2, -1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0,1,0);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(0, 0.3);

    glColor3f(0,0.4,0);
    glVertex2f(-0.5, 0);
    glVertex2f(0.5, 0);
    glVertex2f(0, 0.7);

    glColor3f(0,0.7,0);
    glVertex2f(-0.5, 0.5);
    glVertex2f(0.5, 0.5);
    glVertex2f(0, 1.2);
    glEnd();
    glPopMatrix();

}

void bomb(Pol f){//Взрыв(поломка лифта)
    glPushMatrix();
    glScalef(0.2,0.2,0);
    glTranslatef(f.x,f.y,0);
    glBegin(GL_QUADS);
    glColor3f(1, 1, 0);
    glVertex2f(-0.2, 0.2);
    glVertex2f(0.2, 0.2);
    glVertex2f(0.2, -0.2);
    glVertex2f(-0.2, -0.2);
    glEnd();

    glBegin(GL_TRIANGLES);//Лучи
    glColor3f(1,1,0);
    glVertex2f(0.1, 0.2);
    glVertex2f(-0.1, 0.2);
    glVertex2f(0.18, 0.7);

    glVertex2f(-0.2, 0);
    glVertex2f(-0.1, 0.2);
    glVertex2f(-0.4, 0.5);

    glVertex2f(-0.2, 0);
    glVertex2f(-0.2, -0.2);
    glVertex2f(-0.5, -0.2);

    glVertex2f(-0.2, -0.2);
    glVertex2f(0, -0.2);
    glVertex2f(-0.18, -0.6);

    glVertex2f(0.4, -0.4);
    glVertex2f(0, -0.2);
    glVertex2f(0.2, -0.1);

    glVertex2f(0.6, 0.47);
    glVertex2f(0.2, 0.15);
    glVertex2f(0.2, -0.1);

    glVertex2f(0.2, 0.15);
    glVertex2f(0.1, 0.2);
    glVertex2f(0.27, 0.5);
    glEnd();
    glPopMatrix();
}

void stone(Stal f){//Камень
    glPushMatrix();
    glScalef(f.mash,f.mash,0);
    glTranslatef(f.pos.x,f.pos.y,0);
    if (f.vverh==0)
        glRotatef(180,0,0,1);

    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(0.2, -0.3);
    glVertex2f(-0.2, -0.3);
    glVertex2f(0, 0.2);

    glEnd();
    glPopMatrix();
}
