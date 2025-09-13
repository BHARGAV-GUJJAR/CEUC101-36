#include<stdio.h>
void main(){
int waterlevel=0;
while(waterlevel<100){
waterlevel+=10;
printf("current water level : %d liters\n",waterlevel);

}
printf("tank is full.\n");


}