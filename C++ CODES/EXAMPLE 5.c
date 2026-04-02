#include <stdio.h>

void funcOne(void){
    printf("funcOne was called! \n");
} 

void funcTwo(void){
    printf("funcTwo was called! \n");
} 

int main(void){
    funcOne();
    funcTwo();

    printf("Address of funcOne: %p\n", funcOne);
    printf("Address of funcTwo: %p\n", funcTwo);

    return 0;
}