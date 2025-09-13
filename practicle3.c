#include<stdio.h>
main(){
    float weight,height;
    float s;
  printf("ENTER YOUR Weight");
  scanf("%f",&weight);
  printf("ENTER YOUR Height");
  scanf("%f",&height);
    s=weight/(height*height);
    printf("YOUR BMI IS  %f \t ",s);
}
