#include<stdio.h>
int main(){
    int year,leap;
    leap = ((year) % 2);
    printf("Enter a year as per your wish\n");
    scanf("%d\n", &year);
    // printf("%d",year % 2);
    if(leap==0)
    {
        printf("The year entered is %d and it is not a leap year.\n",year);

    }
    else if(leap=0){
         printf("The year entered is %d and is a leap year.\n",year);
    }
    return 0;
}

// #include<stdio.h>
// int main(){
//     int a, b, c, d;
//     printf("Enter the value of a\n");
//     scanf("%d", & a);
//     printf("Enter the value of b\n");
//     scanf("%d", & b);
//     printf("Enter the value of c\n");
//     scanf("%d", & c);
//     printf("Enter the value of d\n");
//     scanf("%d", & d);

// if(a>b && a>c && a>d){
//     printf("The greatest no. is %d\n", a);
// }
// else if(b>a && b>c && b>d){
//     printf("The greatest no. is %d\n", b);
// }
// else if(c>b && c>a && c>d){
//     printf("The greatest no. is %d\n", c);
   
// }
// else if(d>b && d>c && d>a){
// printf("The greatesxt no. is %d\n", d);
// }
//     return 0;
// }