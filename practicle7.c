#include <stdio.h>

int main(){
            int age;

            printf("\nAge of a Visitors :  ",age);
            scanf("%d",&age);

            if(age<=12){
                    printf("Entry in Park is Free \n");
                    printf("Visitor is a child \n");
            } else if(age>12 && age<=60) {
                    printf("Entry in Park is Paid \n");
                    printf("Visitor is a Adult or Senior \n");
                   printf("Prize of that visitor is 500 rs \n");
             } else if(age>60 && age<=120) {
                   printf("Visitor is a Senior citizens so Entry is free in Park \n");

            }else{
                    printf("Age is a Invalid");
            }
}
