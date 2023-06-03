#include "characters.h"

void cubdrug(Object f){//Кубик-друг
        glPushMatrix();
        glScalef(0.4,0.4,0);
        glTranslatef(f.pos.x,f.pos.y,0);
        glRotatef(f.angle,0,0,1);

        glBegin(GL_QUADS);
        glColor3f(0.7, 0.7, 0.7);//Большой куб
        glVertex2f(-0.5, -0.5);
        glVertex2f(0.5, -0.5);
        glVertex2f(0.5, 0.5);
        glVertex2f(-0.5, 0.5);

        glColor3f(1, 1, 1);//Белый ромб
        glVertex2f(-0.4, 0);
        glVertex2f(0, 0.4);
        glVertex2f(0.4, 0);
        glVertex2f(0, -0.4);

        glVertex2f(-0.45, 0.45);//4 белых квадратика в углах
        glVertex2f(-0.2, 0.45);
        glVertex2f(-0.2, 0.2);
        glVertex2f(-0.45, 0.2);

        glVertex2f(0.45, 0.45);
        glVertex2f(0.2, 0.45);
        glVertex2f(0.2, 0.2);
        glVertex2f(0.45, 0.2);

        glVertex2f(-0.45, -0.45);
        glVertex2f(-0.2, -0.45);
        glVertex2f(-0.2, -0.2);
        glVertex2f(-0.45, -0.2);

        glVertex2f(0.45, -0.45);
        glVertex2f(0.2, -0.45);
        glVertex2f(0.2, -0.2);
        glVertex2f(0.45, -0.2);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3f(1,0,1);//Сердечко
        glVertex2f(0, -0.3);
        glVertex2f(-0.2, 0);
        glVertex2f(0.2, 0);

        glVertex2f(0.2, 0);
        glVertex2f(0.1, 0.2);
        glVertex2f(0, 0.1);

        glVertex2f(-0.2, 0);
        glVertex2f(-0.1, 0.2);
        glVertex2f(0, 0.1);

        glVertex2f(0.2, 0);
        glVertex2f(-0.2, 0);
        glVertex2f(0, 0.1);

        glVertex2f(-0.2, -0.2);//4 фиолетовых сердечка в углах
        glVertex2f(-0.45, -0.25);
        glVertex2f(-0.45, -0.4);

        glVertex2f(-0.2, -0.2);
        glVertex2f(-0.4, -0.45);
        glVertex2f(-0.25, -0.45);

        glVertex2f(-0.35, -0.45);
        glVertex2f(-0.45, -0.35);
        glVertex2f(-0.2, -0.2);

        glVertex2f(0.2, 0.2);//#2
        glVertex2f(0.45, 0.25);
        glVertex2f(0.45, 0.4);

        glVertex2f(0.2, 0.2);
        glVertex2f(0.4, 0.45);
        glVertex2f(0.25, 0.45);

        glVertex2f(0.35, 0.45);
        glVertex2f(0.45, 0.35);
        glVertex2f(0.2, 0.2);

        glVertex2f(-0.2, 0.2);//#3
        glVertex2f(-0.45, 0.25);
        glVertex2f(-0.45, 0.4);

        glVertex2f(-0.2, 0.2);
        glVertex2f(-0.4, 0.45);
        glVertex2f(-0.25, 0.45);

        glVertex2f(-0.35, 0.45);
        glVertex2f(-0.45, 0.35);
        glVertex2f(-0.2, 0.2);

        glVertex2f(0.2, -0.2);//#4
        glVertex2f(0.45, -0.25);
        glVertex2f(0.45, -0.4);

        glVertex2f(0.2, -0.2);
        glVertex2f(0.4, -0.45);
        glVertex2f(0.25, -0.45);

        glVertex2f(0.35, -0.45);
        glVertex2f(0.45, -0.35);
        glVertex2f(0.2, -0.2);

        glEnd();
        glPopMatrix();

    }

void demon(Pol f){//Демон
        glPushMatrix();
        glScalef(0.5,0.5,0);
        glTranslatef(f.x,f.y,0);
        glBegin(GL_TRIANGLES);
        glColor3f(1, 0, 0);//Морда
        glVertex2f(0.7, 0.5);
        glVertex2f(-0.7, 0.5);
        glVertex2f(0, -0.7);

        glColor3f(1, 1, 1);//Рога
        glVertex2f(-0.6, 0.5);
        glVertex2f(-0.45, 1);
        glVertex2f(-0.3, 0.5);
        glVertex2f(0.6, 0.5);
        glVertex2f(0.45, 1);
        glVertex2f(0.3, 0.5);

        glColor3f(0, 0, 0);//Глаза
        glVertex2f(-0.4, 0.3);
        glVertex2f(-0.25, 0.1);
        glVertex2f(-0.1, 0.3);
        glVertex2f(0.4, 0.3);
        glVertex2f(0.25, 0.1);
        glVertex2f(0.1, 0.3);

        glColor3f(1, 1, 0);//Радужка
        glVertex2f(-0.35, 0.28);
        glVertex2f(-0.25, 0.15);
        glVertex2f(-0.15, 0.28);
        glVertex2f(0.35, 0.28);
        glVertex2f(0.25, 0.15);
        glVertex2f(0.15, 0.28);

        glColor3f(0, 0, 0);//Зрачки
        glVertex2f(-0.3, 0.26);
        glVertex2f(-0.25, 0.19);
        glVertex2f(-0.2, 0.26);
        glVertex2f(0.3, 0.26);
        glVertex2f(0.25, 0.19);
        glVertex2f(0.2, 0.26);

        glEnd();

        glBegin(GL_QUADS);//Рот
        glColor3f(0, 0, 0);
        glVertex2f(-0.2, -0.1);
        glVertex2f(0.2, -0.1);
        glVertex2f(0.2, -0.3);
        glVertex2f(-0.2, -0.3);

        glColor3f(1, 1, 0);//Трезубец
        glVertex2f(-0.05, 0);
        glVertex2f(0.05, 0);
        glVertex2f(0.05, 0.8);
        glVertex2f(-0.05, 0.8);

        glVertex2f(-0.3, 0.6);
        glVertex2f(0.3, 0.6);
        glVertex2f(0.3, 0.7);
        glVertex2f(-0.3, 0.7);

        glVertex2f(-0.3, 0.7);
        glVertex2f(-0.2, 0.7);
        glVertex2f(-0.2, 0.8);
        glVertex2f(-0.3, 0.8);

        glVertex2f(0.3, 0.7);
        glVertex2f(0.2, 0.7);
        glVertex2f(0.2, 0.8);
        glVertex2f(0.3, 0.8);

        glEnd();

        glBegin(GL_TRIANGLES);

        glVertex2f(0.35, 0.8);//Наконечники трезубца
        glVertex2f(0.15, 0.8);
        glVertex2f(0.25, 1);

        glVertex2f(-0.35, 0.8);
        glVertex2f(-0.15, 0.8);
        glVertex2f(-0.25, 1);

        glVertex2f(-0.1, 0.8);
        glVertex2f(0.1, 0.8);
        glVertex2f(-0, 1);

        glColor3f(1,1,1);//Зубы
        glVertex2f(-0.2, -0.1);
        glVertex2f(-0.1, -0.1);
        glVertex2f(-0.15, -0.2);

        glVertex2f(0.2, -0.1);
        glVertex2f(0.1, -0.1);
        glVertex2f(0.15, -0.2);

        glVertex2f(-0.2, -0.3);
        glVertex2f(-0.1, -0.3);
        glVertex2f(-0.15, -0.2);

        glVertex2f(0.2, -0.3);
        glVertex2f(0.1, -0.3);
        glVertex2f(0.15, -0.2);

        glVertex2f(-0.1, -0.1);
        glVertex2f(0, -0.1);
        glVertex2f(-0.05, -0.2);

        glVertex2f(0.1, -0.1);
        glVertex2f(0, -0.1);
        glVertex2f(0.05, -0.2);

        glVertex2f(-0.1, -0.3);
        glVertex2f(0, -0.3);
        glVertex2f(-0.05, -0.2);

        glVertex2f(0.1, -0.3);
        glVertex2f(0, -0.3);
        glVertex2f(0.05, -0.2);

        glEnd();
        glPopMatrix();
    }

void gnomik(Object f){//Гномик
        glPushMatrix();
        glScalef(0.4,0.4,0);
        glTranslatef(f.pos.x,f.pos.y,0);
        glRotatef(f.angle,0,0,1);
        glBegin(GL_QUADS);
        glColor3f(1, 0.6, 0.3);//Лицо
        glVertex2f(-0.3, 0.5);
        glVertex2f(0.3, 0.5);
        glVertex2f(0.3, 0.2);
        glVertex2f(-0.3, 0.2);

        glColor3f(0, 0, 0);//Костюм
        glVertex2f(-0.3, 0);
        glVertex2f(0.3, 0);
        glVertex2f(0.3, -0.7);
        glVertex2f(-0.3, -0.7);

        glColor3f(1, 0, 0);//Глаза
        glVertex2f(-0.19, 0.3);
        glVertex2f(-0.19, 0.4);
        glVertex2f(-0.11, 0.4);
        glVertex2f(-0.11, 0.3);

        glVertex2f(0.19, 0.3);
        glVertex2f(0.19, 0.4);
        glVertex2f(0.11, 0.4);
        glVertex2f(0.11, 0.3);

        glColor3f(0, 0, 0);
        glVertex2f(-0.17, 0.38);
        glVertex2f(-0.17, 0.32);
        glVertex2f(-0.13, 0.32);
        glVertex2f(-0.13, 0.38);

        glColor3f(0, 0, 0);
        glVertex2f(0.17, 0.38);
        glVertex2f(0.17, 0.32);
        glVertex2f(0.13, 0.32);
        glVertex2f(0.13, 0.38);

        glColor3f(0, 0, 1);//Ноги
        glVertex2f(0.3, -0.7);
        glVertex2f(0.3, -1);
        glVertex2f(0.1, -1);
        glVertex2f(0.1, -0.7);

        glVertex2f(-0.3, -0.7);
        glVertex2f(-0.3, -1);
        glVertex2f(-0.1, -1);
        glVertex2f(-0.1, -0.7);

        glVertex2f(-0.3, 0);//Руки
        glVertex2f(-0.5, 0);
        glVertex2f(-0.5, -0.5);
        glVertex2f(-0.3, -0.5);

        glVertex2f(0.3, 0);
        glVertex2f(0.5, 0);
        glVertex2f(0.5, -0.5);
        glVertex2f(0.3, -0.5);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3f(1,0,0);//Шляпа
        glVertex2f(0, 1);
        glVertex2f(0.3, 0.5);
        glVertex2f(-0.3, 0.5);

        glColor3f(1,1,1);//Борода
        glVertex2f(0, -0.2);
        glVertex2f(0.3, 0.2);
        glVertex2f(-0.3, 0.2);
        glEnd();
        glPopMatrix();

    }

void lift(Object f){//Лифт
    glPushMatrix();
    glScalef(0.6,0.6,0);
    glTranslatef(f.pos.x,f.pos.y,0);
    glRotatef(f.angle,0,0,1);
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);//Лифт снаружи
    glVertex2f(-0.75, 1);
    glVertex2f(0.75, 1);
    glVertex2f(0.75, -1);
    glVertex2f(-0.75, -1);

    glColor3f(0, 0, 0);//Лифт внутри
    glVertex2f(-0.6, 0.85);
    glVertex2f(0.6, 0.85);
    glVertex2f(0.6, -0.85);
    glVertex2f(-0.6, -0.85);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1, 1, 0);//Кнопка вверх
    glVertex2f(0.5, 0.1);
    glVertex2f(0.4, 0.2);
    glVertex2f(0.3, 0.1);

    glVertex2f(0.45, 0.1);
    glVertex2f(0.35, 0.1);
    glVertex2f(0.4, -0.05);

    glVertex2f(0.5, -0.3);//Кнопка вниз
    glVertex2f(0.4, -0.4);
    glVertex2f(0.3, -0.3);

    glVertex2f(0.45, -0.3);
    glVertex2f(0.35, -0.3);
    glVertex2f(0.4, -0.15);

    glEnd();
    glPopMatrix();

}

void nadpis(Object f){//Надпись: лифт
    glPushMatrix();
    glTranslatef(f.pos.x,f.pos.y,0);
    glRotatef(f.angle,0,0,1);
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(-0.9, 0.1);//Л
    glVertex2f(-0.8, 0.1);
    glVertex2f(-0.7, 0.6);
    glVertex2f(-0.7, 0.8);

    glVertex2f(-0.5, 0.1);
    glVertex2f(-0.6, 0.1);
    glVertex2f(-0.7, 0.6);
    glVertex2f(-0.7, 0.8);

    glVertex2f(-0.4, 0.1);//И
    glVertex2f(-0.4, 0.8);
    glVertex2f(-0.3, 0.8);
    glVertex2f(-0.3, 0.1);

    glVertex2f(-0.4, 0.1);
    glVertex2f(-0.3, 0.1);
    glVertex2f(-0.1, 0.8);
    glVertex2f(-0.2, 0.8);

    glVertex2f(-0.2, 0.1);
    glVertex2f(-0.2, 0.8);
    glVertex2f(-0.1, 0.8);
    glVertex2f(-0.1, 0.1);

    glVertex2f(0, 0.8);//Ф
    glVertex2f(0, 0.5);
    glVertex2f(0.1, 0.5);
    glVertex2f(0.1, 0.8);

    glVertex2f(0, 0.8);
    glVertex2f(0, 0.7);
    glVertex2f(0.5, 0.7);
    glVertex2f(0.5, 0.8);

    glVertex2f(0, 0.6);
    glVertex2f(0, 0.5);
    glVertex2f(0.5, 0.5);
    glVertex2f(0.5, 0.6);

    glVertex2f(0.5, 0.8);
    glVertex2f(0.5, 0.5);
    glVertex2f(0.4, 0.5);
    glVertex2f(0.4, 0.8);

    glVertex2f(0.2, 0.8);
    glVertex2f(0.3, 0.8);
    glVertex2f(0.3, 0.1);
    glVertex2f(0.2, 0.1);

    glVertex2f(0.6, 0.8);//T
    glVertex2f(0.6, 0.7);
    glVertex2f(0.9, 0.7);
    glVertex2f(0.9, 0.8);

    glVertex2f(0.725, 0.8);
    glVertex2f(0.775, 0.8);
    glVertex2f(0.775, 0.1);
    glVertex2f(0.725, 0.1);

    glEnd();
    glPopMatrix();
}

void ploho(Pol f){//Надпись: лифт - зло
    glPushMatrix();
    glTranslatef(f.x,f.y,0);
    glBegin(GL_QUADS);

    glColor3f(1, 1, 1);
    glVertex2f(-0.8, -0.45);//Тире
    glVertex2f(-0.5, -0.45);
    glVertex2f(-0.5, -0.55);
    glVertex2f(-0.8, -0.55);

    glVertex2f(-0.4, -0.35);//З
    glVertex2f(-0.4, -0.25);
    glVertex2f(-0.2, -0.25);
    glVertex2f(-0.2, -0.35);

    glVertex2f(-0.4, -0.55);
    glVertex2f(-0.4, -0.45);
    glVertex2f(-0.2, -0.45);
    glVertex2f(-0.2, -0.55);

    glVertex2f(-0.4, -0.65);
    glVertex2f(-0.4, -0.75);
    glVertex2f(-0.2, -0.75);
    glVertex2f(-0.2, -0.65);

    glVertex2f(-0.2, -0.25);
    glVertex2f(-0.1, -0.25);
    glVertex2f(-0.1, -0.75);
    glVertex2f(-0.2, -0.75);

    glVertex2f(0, -0.75);//Л
    glVertex2f(0.2, -0.25);
    glVertex2f(0.2, -0.45);
    glVertex2f(0.1, -0.75);

    glVertex2f(0.4, -0.75);
    glVertex2f(0.2, -0.25);
    glVertex2f(0.2, -0.45);
    glVertex2f(0.3, -0.75);

    glVertex2f(0.6, -0.35);//O
    glVertex2f(0.6, -0.25);
    glVertex2f(0.7, -0.25);
    glVertex2f(0.7, -0.35);

    glVertex2f(0.6, -0.75);
    glVertex2f(0.6, -0.65);
    glVertex2f(0.7, -0.65);
    glVertex2f(0.7, -0.75);

    glVertex2f(0.6, -0.75);
    glVertex2f(0.6, -0.25);
    glVertex2f(0.5, -0.25);
    glVertex2f(0.5, -0.75);

    glVertex2f(0.7, -0.75);
    glVertex2f(0.7, -0.25);
    glVertex2f(0.8, -0.25);
    glVertex2f(0.8, -0.75);

    glEnd();
    glPopMatrix();
}

