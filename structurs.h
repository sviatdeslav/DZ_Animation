#ifndef STRUCTURS_H
#define STRUCTURS_H
#include<GL/glut.h>

//Структуры

struct Pol{//Положение объекта по х и у
    GLfloat x,y;
};

struct Object{//Структура для движущихся и вращающихся объектов
    Pol pos;//Положение
    float angle;//Угол
};

struct Stal{//Сталактиты и сталагмиты(камни)
    Pol pos;//Положение
    float mash;//Масштаб
    bool vverh;//Вершина смотрит вверх или вниз
};

#endif // STRUCTURS_H
