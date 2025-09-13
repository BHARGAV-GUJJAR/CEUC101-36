#include<stdio.h>
void main(){
    
    for(int i=1;i<=50;i++){

        if(i%5==0){
            printf("BOOK ID : %d(special aditions)\n",i);
        }else{

            printf("BOOK ID : %d\n",i);
        }
    }
    return 0;
}