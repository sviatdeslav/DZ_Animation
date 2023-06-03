#ifndef MOOVE_H
#define MOOVE_H
#include"structurs.h"
#include"paints.h"
#include"fon.h"
#include"characters.h"
#include <ctime>

//Движение

void animate(int v);

void scene0(void);//Начало
void scene1(void);//Путь через пустыню
void scene2(void);//Лифт
void scene3(void);//Подъём на лифте
void scene4(void);//Падение
void scene5(void);//Приземление
void scene6(void);//Поиск кубика
void scene7(void);//Встреча с демоном
void scene8(void);//Побег
void scene9(void);//Возвращение к лифту
void scene10(void);//Финал

#endif // MOOVE_H
