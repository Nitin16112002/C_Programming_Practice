#include<stdio.h>
#include<conio.h>
void checkfn(int a){
    printf("The address of %d a is %u\n", a,&a);
}
int main(){
    int i=4;
    printf("The value of i is %d\n", i);
    checkfn(i);
    printf("The address of %d i is %u\n",i, &i);
    return 0;
}

// #include<stdio.h>
// #include<conio.h>
// void tentimes(int *ptr){
//     *ptr = (*ptr) * 10;
// }
// int main(){
//     int a;
//     printf("Enter the value of a \n");
//     scanf("%d", &a);
//     int *ptr;
//     ptr = &a;
//     printf("The current value of a is %d\n", a);
//     tentimes(ptr);
//     printf("The value of a after function call is %d\n", *ptr);
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// sumndavg(int a,int b,int *sum,float *avg){
//     *sum = a + b;
//     *avg = (float)(*sum) / 2;
// }
// int main(){
//     int a, b, sum;
//     float avg;
    
//     printf("Enter value of a\n");
//     scanf("%d", &a);
//     printf("Enter value of b\n");
//     scanf("%d", &b);
//     sumndavg(a, b, &sum, &avg);
//     printf("The sum is %d\n", sum);
//     printf("The average is %f\n", avg);
//     return 0;
// }


// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int i = 5;
//     int *a;
//     a = &i;
//     int **b;
//     b = &a;
//     printf("The value of i is %d\n", i);
//     printf("The value of i is %d\n", *a);
//     printf("The value of i is %d\n", b);
//     printf("The value of i is %d\n", **b);
//     return 0;
// }