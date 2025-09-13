#include<stdio.h>
int main(){
int i,j,k,row;

printf("enter  no of row");
scanf("%d",&row);

for(i=1;i<=row;i++){

    for(j=1;j<=i;j++){
        printf("%d",j%2);

    }
    printf("\n");
}
return 0;
}
