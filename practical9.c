#include<stdio.h>


int main(){
  int amount;
  double totalamount;
  scanf("%d",&amount);
  if(amount<=1000){

    printf("\n no discount is applied");
    printf("\n%d",amount);
  }else if(amount>1000&&amount<=5000){
  totalamount=(amount*10)/100;
  printf("10 discount is applied");
  printf("\n%lf",totalamount);
  } else if(amount>5000){

  totalamount=(amount*20)/100;
  printf("\n 20 discount is applied");
  printf("\n%lf",totalamount);

  }
  return 0;

}
