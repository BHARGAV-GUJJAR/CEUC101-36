#include<stdio.h>
int main(){
int sec;
printf("------- ENTER TO SEC ---------");
scanf("%d",&sec);

for(int i=sec;i>=0;i--){

    printf("\n%d",i);
    sleep(1);
    if(sec==0){
        break;
    }
}
printf("\n-------countdown completed-------");

}
