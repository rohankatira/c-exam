#include<stdio.h>

int main(){
    //19, 17, 15, 13
    int num = 100;
    int num2 = 19;
    int i,j;
    for( i=1; i<=5; i++){
        for( j=1; j<=i; j++){
            printf("%d ", num);
        }
        printf("\n");

        num = num-num2;
        num2 = num2-2;
    }
}
