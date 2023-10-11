# include <stdio.h>

int add(int a, int b);
int main(){
    
   int result = add(3, 4);

   printf("%d\n", add);

   return 0;
}

int add(int a, int b){
    return a + b;
}