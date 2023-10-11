#include <stdio.h>

int main(){
    int num = 15;

    if (num >= 10){
        if (num % 2 == 0){
            printf("The number is greater than or equal to 10 and even.\n");
        }else{
            printf("The number is greater than or equal to 10 and odd.\n");
        }
    }else{
        printf("The number is less than 10.\n");
    }
}