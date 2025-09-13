#include<stdio.h>
void main(){
int amount=6000;
char choice;
int withdraw;
do{
 printf("\n----------welcome to ATM machine----------\n");
 printf("your amount :: %d",amount);

 printf("ENTER TO AMOUNT YOU NEED TO WITHDRA\n");
 scanf("%d",&withdraw);

 if(withdraw<=0){

    printf("ENTER VALID VALUE PLEASE------------????\n");

 }else if(withdraw>amount){

printf("insufficiant amount\n ");

 }else{

amount-=withdraw;
printf("YOUR FINAL BALANCE------%d\n",amount);

 }


printf("DO YOU WANT TO CONTINUE\n");
scanf(" %c",&choice);

}while(choice=='y');

return 0;
}
