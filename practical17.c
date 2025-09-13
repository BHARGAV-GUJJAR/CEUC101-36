#include<stdio.h>
int main(){
    double dis_tance=0;

    while(dis_tance<10){

        dis_tance+=0.5;
        printf("current distance is  --------%lf km\n ",dis_tance);
        sleep(01.00);

    }
    printf("marathon complet!!");

}
