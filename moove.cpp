#include "moove.h"

clock_t anim1;

int schet=0, sc=0;

Object CUB={{0,-1.2},0};
Object GNOM={{-4,-1},0};
Object LIFT={{0,-0.47},0};
Object NADPIS={{0,0},0};
Pol DEMON={-8,0};
Pol ZLO={2,0};

Object CUB1={{-3,-1.2},0};
Object GNOM1={{-3,-1},0};
Object LIFT1={{0,-2.47},0};
Pol DEMON1={0,4};

void animate(int v){
    glutPostRedisplay();
    glutTimerFunc(1000/60,animate,1);
}

void scene0(void){//Начало
    if(sc==0){
    fon0();
    gnomik(GNOM);
    cubdrug(CUB);
    GNOM.pos.x+=0.08/5000*clock();
    if (GNOM.pos.x>0){
        CUB.pos.x+=0.08/5000*clock();
        }
    if (GNOM.pos.x>3)
        sc=1;
    }
}

void scene1(void){//Путь через пустыню
    if (sc==1){
        anim1=2500;
        fon1();
        CUB={{-3,-1.2},0};
        GNOM={{-3,-1},0};
        gnomik(GNOM1);
        cubdrug(CUB1);
        GNOM1.pos.x+=0.08/5000*(clock()-anim1);
        CUB1.pos.x+=0.08/5000*(clock()-anim1);
        if (GNOM1.pos.x>3)
            sc=2;
    }
}

void scene2(void){//Лифт
    if (sc==2){
        anim1=5000;
        fon2();
        CUB1={{0,-4.2},0};
        GNOM1={{0,-4},0};
        lift(LIFT);
        gnomik(GNOM);
        cubdrug(CUB);
        GNOM.pos.x+=0.025/5000*(clock()-anim1);
        CUB.pos.x+=0.025/5000*(clock()-anim1);
        if (GNOM.pos.x>0){
            GNOM.pos.x=0;
            CUB.pos.x=0;
            if(clock()>8000){
              anim1=8000;
              GNOM.pos.y+=0.03/5000*(clock()-anim1);
              CUB.pos.y+=0.03/5000*(clock()-anim1);
              LIFT.pos.y+=0.02/5000*(clock()-anim1);
            }
              }
        if (GNOM.pos.y>3.7)
            sc=3;
    }
}

void scene3(void){//Подъём на лифте
    if (sc==3){
        anim1=13000;
        fon3();
        LIFT={{0,3.2},0};
        CUB={{0,3.3},0};
        GNOM={{0,3.5},0};
        lift(LIFT1);
        gnomik(GNOM1);
        cubdrug(CUB1);
        GNOM1.pos.y+=0.1*0.3/5000*(clock()-anim1);
        CUB1.pos.y+=0.1*0.3/5000*(clock()-anim1);
        LIFT1.pos.y+=0.1*0.2/5000*(clock()-anim1);
        if (GNOM1.pos.y>1){
           anim1=18000;
           GNOM1.pos.y=1;
           CUB1.pos.y=0.8;
           LIFT1.pos.y=0.84;
           bomb(Pol{0,3+0.005*(clock()-anim1)});
           if (clock()-anim1>2000){
               anim1=20000;
               LIFT1.angle+=0.005*(clock()-anim1);
               GNOM1.angle+=0.005*(clock()-anim1);
               CUB1.angle+=0.005*(clock()-anim1);
               GNOM1.pos.y-=0.8/5000*(clock()-anim1);
               CUB1.pos.y-=0.8/5000*(clock()-anim1);
               LIFT1.pos.y-=0.6/5000*(clock()-anim1);
               if(clock()-anim1>9000)
                  sc=4;
        }
        }
    }
}

void scene4(void){//Падение
    if (sc==4){
        anim1=29000;
        darkness();
        CUB1={{0,7},0};
        GNOM1={{0,7},0};
        LIFT1={{0,5},0};
        nadpis(NADPIS);
        if (clock()-anim1>3000){
            anim1=32000;
            NADPIS.pos.y-=0.06/5000*(clock()-anim1);
            NADPIS.angle+=0.025*(clock()-anim1);
            if (clock()>35000){
                anim1=35000;
                lift(LIFT);
                gnomik(GNOM);
                cubdrug(CUB);
                LIFT.angle+=5*(clock()-anim1);
                GNOM.angle+=5*(clock()-anim1);
                CUB.angle+=5*(clock()-anim1);
                GNOM.pos.y-=0.06/5000*(clock()-anim1);
                CUB.pos.y-=0.06/5000*(clock()-anim1);
                LIFT.pos.y-=0.06/5000*(clock()-anim1);
                }
           }
        if(GNOM.pos.y<-5)
            sc=5;
    }

}

void scene5(void){//Падение на землю
    if (sc==5){
        anim1=40000;
        ad1();
        GNOM={{3,-0.4},0};
        NADPIS={{0,-4},0};
        lift(LIFT1);
        gnomik(GNOM1);
        cubdrug(CUB1);
        LIFT1.angle+=0.1*(clock()-anim1);
        GNOM1.angle+=0.1*(clock()-anim1);
        CUB1.angle+=0.1*(clock()-anim1);
        GNOM1.pos.y-=0.5/5000*(clock()-anim1);
        CUB1.pos.y-=0.5/5000*(clock()-anim1);
        LIFT1.pos.y-=0.5/5000*(clock()-anim1);
        if (LIFT1.pos.y<0.3){
            LIFT1.pos.y=0.3;
            LIFT1.angle=47;
        }
        if (GNOM1.pos.y<-0.4){
            GNOM1.pos.y=-0.4;
            GNOM1.angle=124;
        }
        if (CUB1.pos.y<-1){
            CUB1.pos.y=-1;
            CUB1.angle=270;

        }
        if ((clock()-anim1>4000) && (clock()-anim1<7500)){
            spit();
            CUB1.pos.x=7;
        }
        if (clock()-anim1>9000){
            anim1=49000;
            GNOM1.angle=0;
            if (clock()-anim1>2000)
                GNOM1.pos.x-=0.5/5000*(clock()-anim1-2000);
        }
        if (GNOM1.pos.x<-3)
            sc=6;
    }

}

void scene6(void){//Поиск кубика
    if (sc==6){
        anim1=53000;
        ad2();
        CUB1={{0,-0.4},0};
        GNOM1={{3,-0.4},0};
        gnomik(GNOM);
        GNOM.pos.x-=0.06/5000*(clock()-anim1);
        if (GNOM.pos.x<-3){
                GNOM.pos.x+=7;
                schet+=1;
                anim1+=1000;
        }
        if (schet>2)
            sc=7;
    }
}

void scene7(void){//Встреча с демоном
    if (sc==7){
        anim1=60000;
        ad1();
        schet=0;
        CUB={{-4,-0.4},0};
        GNOM={{-4,-0.4},0};
        gnomik(GNOM1);
        cubdrug(CUB1);
        demon(DEMON1);
        GNOM1.pos.x-=0.05/5000*(clock()-anim1);
        if(GNOM1.pos.x<0){
            GNOM1.pos.x*=-1;
            DEMON1.y-=0.025/5000*(clock()-anim1);
        }
        if(DEMON1.y<0.3)
            ded();
        if(clock()>69000)
                sc=8;
}
}

void scene8(void){//Побег
    if (sc==8){
        anim1=69000;
        ad2();
        CUB1={{-4,-0.4},0};
        GNOM1={{-4,-0.4},0};
        DEMON1={-8,0};
        LIFT1={{0,0.3},47};
        gnomik(GNOM);
        cubdrug(CUB);
        demon(DEMON);
        GNOM.pos.x+=0.2/5000*(clock()-anim1);
        CUB.pos.x+=0.2/5000*(clock()-anim1);
        DEMON.x+=0.2/5000*(clock()-anim1);
        if(GNOM.pos.x>4){
            GNOM.pos.x-=8;
            CUB.pos.x-=8;
            DEMON.x-=8;
            schet+=1;
        }
        if(schet>2)
            sc=9;
    }
}

void scene9(void){//Возвращение к лифту
    if(sc==9){
        anim1=72000;
        ad1();
        CUB={{0,-3.2},0};
        GNOM={{0,-3.5},0};
        LIFT={{0,-3.3},0};
        gnomik(GNOM1);
        cubdrug(CUB1);
        lift(LIFT1);
        demon(DEMON1);
        GNOM1.pos.x+=0.5/5000*(clock()-anim1);
        CUB1.pos.x+=0.5/5000*(clock()-anim1);
        DEMON1.x+=0.5/5000*(clock()-anim1);
        if(GNOM1.pos.x>0){
            GNOM1.pos.x=0;
            CUB1.pos.x=0;
        }
        if (clock()>77000)
            sc=10;
    }
}

void scene10(void){//Финал
    if (sc==10){
        anim1=77000;
        darkness();
        lift(LIFT);
        gnomik(GNOM);
        cubdrug(CUB);
        nadpis(NADPIS);
        ploho(ZLO);
        LIFT.angle-=0.5*(clock()-anim1);
        GNOM.angle-=0.5*(clock()-anim1);
        CUB.angle-=0.5*(clock()-anim1);
        GNOM.pos.y+=0.8/5000*(clock()-anim1);
        CUB.pos.y+=0.8/5000*(clock()-anim1);
        LIFT.pos.y+=0.8/5000*(clock()-anim1);
        if (clock()-anim1>3000){
            anim1=80000;
            NADPIS.pos.y+=0.35/5000*(clock()-anim1);
            NADPIS.angle-=0.5*(clock()-anim1);
            if (NADPIS.pos.y>0){
                NADPIS.pos.y=0;
                NADPIS.angle=0;
            }
        }
        if ((clock()>82000) && (clock()<90000)){
            ZLO.x-=0.01/5000*(clock()-anim1);
            if(ZLO.x<0)
                ZLO.x=0;
        }
        if (clock()>89000){
            hodit();
      }

   }
}
