#include <stdio.h>
void main(void){
    int arr[3]={7, 14, 21};
    int *ptr=arr;
    printf("%d \n\n", ptr[1]);
    printf("%d \n\n", arr[1]);
}