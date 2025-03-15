#include<stdio.h>
#include<conio.h>
typedef struct complexno{
    int real;
    int imaginary;
} cmp;
void display(cmp c){
    printf("The real number is %d\n", c.real);
    printf("The imaginary number is %d\n", c.imaginary);
}
int main(){
    cmp cmpns[5];
    int i;
    for (i = 0; i < 2;i++){
        printf("Enter the real number: ");
        scanf("%d", &cmpns[i].real);
        printf("Enter the imaginary number: ");
        scanf("%d", &cmpns[i].imaginary);
    }
    for (i = 0; i < 2;i++){
        display(cmpns[i]);
        // cmp1.real = 96;
        // cmp1.imaginary = 26;
        // cmp2.real = 36;
        // cmp2.imaginary = 6;
        // printf("The real and imaginary numbers are %d  ,  %d  ,  %d  ,  %d\n", cmp1.real, cmp1.imaginary, cmp2.real, cmp2.imaginary);
     } return 0;
}