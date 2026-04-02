#include <stdio.h>

void addNumber(int *ptr){ // add all values of array by 1000
    int i = 0;

    for(i = 0; i < 10; i++){
        ptr[i] += 1000;
    } // end of for
} // end of addNumber


int main(void){
    int i = 0;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    printf("= = = Before function call = = =\n");

    for(i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    } // end of for

    printf("\n= = = \n");

    addNumber(arr);

    printf("= = = After function call = = =\n");

    for(i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    } // end of for

    printf("\n= = = \n");

    return 0;
} // end of main