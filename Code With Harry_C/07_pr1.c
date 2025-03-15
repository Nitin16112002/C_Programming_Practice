#include<stdio.h>
#include<conio.h>
int main(){
    int arr[5]={2,3,5,3,6};
    int *ptr = arr;
    printf("THE value of 1st element in the array is %d\n", *ptr);
    ptr += 2;
    printf("THE value of 1st element in the array is %d\n", *ptr);


    return 0;
}