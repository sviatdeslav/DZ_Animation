#include"moove.h"

void renderScene(void);

int main(int argc, char* argv[]){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);
    glutCreateWindow("OpenGL Start Application");
    glutDisplayFunc(renderScene);
    glutTimerFunc(1000/60,animate,1);
    glutMainLoop();
    return 0;
}

void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    scene0();//Начало
    scene1();//Путь через пустыню
    scene2();//Лифт
    scene3();//Подъём на лифте
    scene4();//Падение
    scene5();//Приземление
    scene6();//Поиск кубика
    scene7();//Встреча с демоном
    scene8();//Побег
    scene9();//Возвращение к лифту
    scene10();//Полёт вверх
    glutSwapBuffers();

}
