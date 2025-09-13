#include<stdio.h>
#include<math.h>
int main(){

    int n;
    printf("ENTER YOUR AGE");
    scanf("%d",&n);

    if(n<18){
        printf("not eligible for saving account");
    }else if (n<=59){
        printf(" YOU ARE ELIGIBLE FOR SAVING ACCOUNT");
     }else if(n>=60){
        printf("ELIGIBLE FOR SENIOR CITIZEN ACCOUNT");
    }
}

