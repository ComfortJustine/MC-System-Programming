#include <stdio.h>
#include <string.h>

int main(){

    for (int i = 1; i <= 10; i++){
        if(i % 2 == 0){
            continue; // Skip even numbers
        }
    }
       printf("%d\n", i);

       if (i == 7){

        break; //Exit the loop when i is 7
       }    
    }
    
