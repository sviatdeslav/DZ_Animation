#include "fon.h"

void fon0(void){//Лес
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0.7);//Небо
    glVertex2f(-1, 1);
    glVertex2f(-1, 0.2);
    glVertex2f(1, 0.2);
    glVertex2f(1, 1);

    glColor3f(0, 0.1, 0);//Лес
    glVertex2f(-1, -0.8);
    glVertex2f(1, -0.8);
    glVertex2f(1,0.2);
    glVertex2f(-1, 0.2);

    glColor3f(0.7, 0.2, 0);//Пень
    glVertex2f(-0.2, -0.8);
    glVertex2f(0.2, -0.8);
    glVertex2f(0.2, -0.68);
    glVertex2f(-0.2, -0.68);

    glColor3f(0.6, 0.2, 0);//Земля
    glVertex2f(-1, -0.8);
    glVertex2f(1, -0.8);
    glVertex2f(1,-1);
    glVertex2f(-1, -1);

    glColor3f(1, 1, 1);//Облака
    glVertex2f(-0.45, 0.53);
    glVertex2f(-0.23, 0.7);
    glVertex2f(0.12, 0.66);
    glVertex2f(0.5, 0.43);
    glEnd();

    for (int ryad=0; ryad<10;ryad++)
        for (int stolb=0; stolb<3;stolb++)
            tree(Pol{5-ryad,0.5-stolb});

}

void fon1(void){//Пустыня
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);//Небо
    glVertex2f(-1, 1);
    glVertex2f(-1, 0.2);
    glVertex2f(1, 0.2);
    glVertex2f(1, 1);

    glColor3f(0.9, 0.8, 0);//Песок
    glVertex2f(-1, -0.8);
    glVertex2f(1, -0.8);
    glVertex2f(1,0.2);
    glVertex2f(-1, 0.2);

    glColor3f(0, 0, 0.4);//Вода
    glVertex2f(-0.4, -0.5);
    glVertex2f(-0.3, 0.1);
    glVertex2f(0.65,-0.6);
    glVertex2f(0.34,-0.7);

    glColor3f(0.6, 0.2, 0);//Земля
    glVertex2f(-1, -0.8);
    glVertex2f(1, -0.8);
    glVertex2f(1,-1);
    glVertex2f(-1, -1);

    glColor3f(1, 1, 1);//Луна
    glVertex2f(-0.6, 0.4);
    glVertex2f(-0.6, 0.6);
    glVertex2f(-0.4, 0.6);
    glVertex2f(-0.4, 0.4);
    glEnd();

    tree(Pol {3,1});
    tree(Pol {-2.4,-0.5});
    tree(Pol {0.4,0.6});
    stone(Stal {{-1.3,0.4},0.3,1});
    stone(Stal {{-2.8,-2},0.2,1});
    stone(Stal {{0.9,-0.3},0.7,1});
    stone(Stal {{-2.2,0},0.4,1});
}

void fon2(void){//Лифт
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0.7);//Небо
    glVertex2f(-1, 1);
    glVertex2f(-1, -0.1);
    glVertex2f(1, -0.1);
    glVertex2f(1, 1);

    glColor3f(0.2, 0.2, 0);//Камень
    glVertex2f(-1, -0.8);
    glVertex2f(1, -0.8);
    glVertex2f(1, -0.1);
    glVertex2f(-1, -0.1);

    glColor3f(0.2, 0.2, 0);//Земля
    glVertex2f(-1, -0.8);
    glVertex2f(1, -0.8);
    glVertex2f(1,-1);
    glVertex2f(-1, -1);

    glColor3f(1, 1, 1);//Облака
    glVertex2f(-0.678, 0.5);
    glVertex2f(-0.1, 0.9);
    glVertex2f(0.12, 0.85);
    glVertex2f(0.5, 0.32);

    glVertex2f(0.47, 0.7);
    glVertex2f(0.53, 0.4);
    glVertex2f(0.72, 0.85);
    glVertex2f(0.9, 0.32);

    glColor3f(0.5, 0.5, 0.5);//Шпиль
    glVertex2f(-0.2, 1);
    glVertex2f(-0.2, -0.8);
    glVertex2f(0.2, -0.8);
    glVertex2f(0.2, 1);

    glEnd();
    tree(Pol {3,0.2});
    tree(Pol {-2.5,0});
    stone(Stal {{3,-3.2},0.2,1});
    stone(Stal {{-3,-3},0.2,1});
    stone(Stal {{2.4,-2.2},0.2,1});
    stone(Stal {{-2.4,-1},0.3,1});
}

void fon3(void){//Небо
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0.7);//Небо
    glVertex2f(-1, 1);
    glVertex2f(-1, -1);
    glVertex2f(1, -1);
    glVertex2f(1, 1);

    glColor3f(0.5, 0.5, 0.5);//Шпиль
    glVertex2f(-0.2, 1);
    glVertex2f(-0.2, -1);
    glVertex2f(0.2, -1);
    glVertex2f(0.2, 1);

    glEnd();
}

void darkness(void){//Падение
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(-1, 1);
    glVertex2f(-1, -1);
    glVertex2f(1, -1);
    glVertex2f(1, 1);

    glEnd();
}

void ad1(void){//Ад1
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(-1, 1);
    glVertex2f(-1, 0);
    glVertex2f(1, 0);
    glVertex2f(1, 1);

    glColor3f(0.7, 0, 0);
    glVertex2f(-1, 0);
    glVertex2f(-1, -1);
    glVertex2f(1, -1);
    glVertex2f(1, 0);
    glEnd();
    stone(Stal {{-1.2,-0.4},0.5,1});
    stone(Stal {{-0.9,1},0.8,0});
    stone(Stal {{2,-3},0.3,1});
    stone(Stal {{3,3.2},0.3,0});
    stone(Stal {{1,1.4},0.7,0});
    stone(Stal {{1,-1},0.43,1});
    stone(Stal {{-1.34,-1.2},0.5,1});
    stone(Stal {{1.34,-1.2},0.6,1});
    stone(Stal {{1.5,0.29},0.6,1});
    stone(Stal {{-1.11,0.29},0.6,1});
    stone(Stal {{0.3,-1.4},0.6,1});
}

void spit(void){//Гном спит
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(-1, 1);
    glVertex2f(-1, -1);
    glVertex2f(1, -1);
    glVertex2f(1, 1);

    glColor3f(1, 1, 0);//Г
    glVertex2f(-0.9, 0.5);
    glVertex2f(-0.9, -0.5);
    glVertex2f(-0.8, -0.5);
    glVertex2f(-0.8, 0.5);

    glVertex2f(-0.9, 0.5);
    glVertex2f(-0.6, 0.5);
    glVertex2f(-0.6, 0.4);
    glVertex2f(-0.9, 0.4);


    glVertex2f(-0.5, -0.5);//Н
    glVertex2f(-0.4, -0.5);
    glVertex2f(-0.4, 0.5);
    glVertex2f(-0.5, 0.5);

    glVertex2f(-0.3, -0.1);
    glVertex2f(-0.4, -0.1);
    glVertex2f(-0.4, 0.1);
    glVertex2f(-0.3, 0.1);

    glVertex2f(-0.3, -0.5);
    glVertex2f(-0.2, -0.5);
    glVertex2f(-0.2, 0.5);
    glVertex2f(-0.3, 0.5);

    glVertex2f(0, -0.5);//O
    glVertex2f(-0.1, -0.5);
    glVertex2f(-0.1, 0.5);
    glVertex2f(0, 0.5);

    glVertex2f(0.1, 0.5);
    glVertex2f(0, 0.5);
    glVertex2f(0, 0.4);
    glVertex2f(0.1, 0.4);

    glVertex2f(-0, -0.5);
    glVertex2f(0.1, -0.5);
    glVertex2f(0.1, -0.4);
    glVertex2f(-0, -0.4);

    glVertex2f(0.1, -0.5);
    glVertex2f(0.2, -0.5);
    glVertex2f(0.2, 0.5);
    glVertex2f(0.1, 0.5);

    glVertex2f(0.4, -0.5);//М
    glVertex2f(0.3, -0.5);
    glVertex2f(0.3, 0.5);
    glVertex2f(0.4, 0.5);

    glVertex2f(0.4, 0.5);
    glVertex2f(0.4, 0.3);
    glVertex2f(0.5, -0.1);
    glVertex2f(0.5, 0.1);

    glVertex2f(0.6, 0.5);
    glVertex2f(0.6, 0.3);
    glVertex2f(0.5, -0.1);
    glVertex2f(0.5, 0.1);

    glVertex2f(0.6, -0.5);
    glVertex2f(0.7, -0.5);
    glVertex2f(0.7, 0.5);
    glVertex2f(0.6, 0.5);


    glColor3f(1, 0, 0);//С
    glVertex2f(-0.3, -0.6);
    glVertex2f(-0.5, -0.75);
    glVertex2f(-0.3, -0.9);
    glVertex2f(-0.4, -0.75);

    glVertex2f(-0.1, -0.6);//П
    glVertex2f(-0.2, -0.6);
    glVertex2f(-0.2, -0.9);
    glVertex2f(-0.1, -0.9);

    glColor3f(0, 0, 0);
    glVertex2f(-0.175, -0.65);
    glVertex2f(-0.175, -0.9);
    glVertex2f(-0.125, -0.9);
    glVertex2f(-0.125, -0.65);

    glColor3f(1, 0, 0);
    glVertex2f(0.125, -0.6);//И
    glVertex2f(0.1, -0.6);
    glVertex2f(0.1, -0.9);
    glVertex2f(0.125, -0.9);

    glVertex2f(0.125, -0.9);
    glVertex2f(0.175, -0.7);
    glVertex2f(0.175, -0.6);
    glVertex2f(0.125, -0.8);

    glVertex2f(0.175, -0.6);
    glVertex2f(0.2, -0.6);
    glVertex2f(0.2, -0.9);
    glVertex2f(0.175, -0.9);

    glVertex2f(0.425, -0.6);//T
    glVertex2f(0.475, -0.6);
    glVertex2f(0.475, -0.9);
    glVertex2f(0.425, -0.9);

    glVertex2f(0.35, -0.6);
    glVertex2f(0.35, -0.625);
    glVertex2f(0.55, -0.625);
    glVertex2f(0.55, -0.6);

    glEnd();

}

void ad2(void){//Ад2
    glBegin(GL_QUADS);
    glColor3f(0, 0, 0);
    glVertex2f(-1, 1);
    glVertex2f(-1, 0);
    glVertex2f(1, 0);
    glVertex2f(1, 1);

    glColor3f(0.7, 0, 0);
    glVertex2f(-1, 0);
    glVertex2f(-1, -1);
    glVertex2f(1, -1);
    glVertex2f(1, 0);
    glEnd();
    stone(Stal {{1.2,-0.4},0.7,1});
    stone(Stal {{0.9,1},0.9,0});
    stone(Stal {{-2,-2},0.4,1});
    stone(Stal {{0.2,0.6},1.2,0});
    stone(Stal {{-1,1.4},0.65,0});
    stone(Stal {{1,-1.3},0.6,1});
    stone(Stal {{0,-1.5},0.6,1});
    stone(Stal {{-2,0},0.4,1});
    stone(Stal {{-1.2,-0.5},0.7,1});
    stone(Stal {{1.2,0},0.5,1});
    stone(Stal {{0.3,0},0.6,1});
    stone(Stal {{-0.3,1.5},0.6,0});
    stone(Stal {{-3,-1},0.2,1});
    stone(Stal {{-1,-1},0.3,1});

}

void ded(void){//Вы дед
    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex2f(-1, 1);
    glVertex2f(-1, -1);
    glVertex2f(1, -1);
    glVertex2f(1, 1);

    glColor3f(0, 0, 0);
    glVertex2f(-0.7, 0.9);//В
    glVertex2f(-0.7, 0.1);
    glVertex2f(-0.5, 0.1);
    glVertex2f(-0.5, 0.9);

    glVertex2f(-0.5, 0.9);
    glVertex2f(-0.5, 0.7);
    glVertex2f(-0.1, 0.7);
    glVertex2f(-0.1, 0.9);

    glVertex2f(-0.1, 0.9);
    glVertex2f(-0.1, 0.1);
    glVertex2f(-0.3, 0.1);
    glVertex2f(-0.3, 0.9);

    glVertex2f(-0.5, 0.1);
    glVertex2f(-0.5, 0.3);
    glVertex2f(-0.1, 0.3);
    glVertex2f(-0.1, 0.1);

    glVertex2f(-0.3, 0.4);
    glVertex2f(-0.3, 0.6);
    glVertex2f(-0.5, 0.6);
    glVertex2f(-0.5, 0.4);


    glVertex2f(0.1, 0.9);//Ы
    glVertex2f(0.3, 0.9);
    glVertex2f(0.3, 0.1);
    glVertex2f(0.1, 0.1);

    glVertex2f(0.3, 0.1);
    glVertex2f(0.5, 0.1);
    glVertex2f(0.5, 0.3);
    glVertex2f(0.3, 0.3);

    glVertex2f(0.7, 0.1);
    glVertex2f(0.5, 0.1);
    glVertex2f(0.5, 0.6);
    glVertex2f(0.7, 0.6);

    glVertex2f(0.5, 0.6);
    glVertex2f(0.3, 0.6);
    glVertex2f(0.3, 0.4);
    glVertex2f(0.5, 0.4);

    glVertex2f(0.95, 0.1);
    glVertex2f(0.75, 0.1);
    glVertex2f(0.75, 0.9);
    glVertex2f(0.95, 0.9);

    glVertex2f(-0.3, -0.9);//Д
    glVertex2f(-0.5, -0.9);
    glVertex2f(-0.5, -0.7);
    glVertex2f(-0.3, -0.7);

    glVertex2f(-0.9, -0.5);
    glVertex2f(-0.9, -0.7);
    glVertex2f(-0.3, -0.7);
    glVertex2f(-0.3, -0.5);

    glVertex2f(-0.7, -0.9);
    glVertex2f(-0.9, -0.9);
    glVertex2f(-0.9, -0.7);
    glVertex2f(-0.7, -0.7);

    glVertex2f(-0.35, -0.5);
    glVertex2f(-0.35, -0.1);
    glVertex2f(-0.55, -0.1);
    glVertex2f(-0.55, -0.5);

    glVertex2f(-0.65, -0.5);
    glVertex2f(-0.65, -0.1);
    glVertex2f(-0.85, -0.1);
    glVertex2f(-0.85, -0.5);

    glVertex2f(-0.65, -0.3);
    glVertex2f(-0.65, -0.1);
    glVertex2f(-0.55, -0.1);
    glVertex2f(-0.55, -0.3);

    glVertex2f(-0.2, -0.9);//E
    glVertex2f(0, -0.9);
    glVertex2f(0, -0.1);
    glVertex2f(-0.2, -0.1);

    glVertex2f(0, -0.9);
    glVertex2f(0.2, -0.9);
    glVertex2f(0.2, -0.7);
    glVertex2f(0, -0.7);

    glVertex2f(0, -0.6);
    glVertex2f(0.2, -0.6);
    glVertex2f(0.2, -0.4);
    glVertex2f(0, -0.4);

    glVertex2f(0, -0.3);
    glVertex2f(0.2, -0.3);
    glVertex2f(0.2, -0.1);
    glVertex2f(0, -0.1);

    glVertex2f(0.3, -0.9);//Д
    glVertex2f(0.5, -0.9);
    glVertex2f(0.5, -0.7);
    glVertex2f(0.3, -0.7);

    glVertex2f(0.9, -0.5);
    glVertex2f(0.9, -0.7);
    glVertex2f(0.3, -0.7);
    glVertex2f(0.3, -0.5);

    glVertex2f(0.7, -0.9);
    glVertex2f(0.9, -0.9);
    glVertex2f(0.9, -0.7);
    glVertex2f(0.7, -0.7);

    glVertex2f(0.35, -0.5);
    glVertex2f(0.35, -0.1);
    glVertex2f(0.55, -0.1);
    glVertex2f(0.55, -0.5);

    glVertex2f(0.65, -0.5);
    glVertex2f(0.65, -0.1);
    glVertex2f(0.85, -0.1);
    glVertex2f(0.85, -0.5);

    glVertex2f(0.65, -0.3);
    glVertex2f(0.65, -0.1);
    glVertex2f(0.55, -0.1);
    glVertex2f(0.55, -0.3);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1, 0, 0);//Углы
    glVertex2f(-0.1, 0.9);
    glVertex2f(-0.2, 0.9);
    glVertex2f(-0.1, 0.8);

    glVertex2f(-0.1, 0.1);
    glVertex2f(-0.2, 0.1);
    glVertex2f(-0.1, 0.2);

    glVertex2f(-0.1, 0.6);
    glVertex2f(-0.2, 0.5);
    glVertex2f(-0.1, 0.4);


    glEnd();
}
