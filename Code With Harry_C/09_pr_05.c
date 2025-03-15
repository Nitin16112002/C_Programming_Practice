#include<stdio.h>
#include<conio.h>
typedef struct complexno{
    int real;
    int imaginary;
} cmp;
int main(){
    cmp cmp2,cmp1;
    cmp1.real = 96;
    cmp1.imaginary = 26;
    cmp2.real = 36;
    cmp2.imaginary = 6;
    printf("The real and imaginary numbers are %d  ,  %d  ,  %d  ,  %d\n", cmp1.real, cmp1.imaginary, cmp2.real, cmp2.imaginary);
    return 0;
}