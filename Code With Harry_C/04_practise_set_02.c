// #include<stdio.h>
// int main(){
//     int n, i;
//     printf("Enter the value of n\n");
//     scanf("%d", &n);
//     for (i = n; i > 0;i--){
//         printf("%d \n", i-1);
//     }
//         return 0;
// }
//                     ??CONTINUE STATEMENT??
// #include<stdio.h>
// int main(){
//     int skip = 5;
//     int i = 0;
//     while(i<10){
//         if (i!=skip)
//             continue;
//             else
//                 printf("%d", i);
//     }
//     return 0;
// }

//                        ????REVERSE???
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int n;
//     int i;
//     printf("Enter the number whose table you want to print \n");
//     scanf("%d",&n);
//     // int table;
//     for (i=10; i>0;i--){
        
//         printf("The multiplication table of %d is 5X%d = %d \n", n,i, n*i);
//     }

//         return 0;
// }
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int n;
//     int i;
//     printf("Enter the number whose table you want to print \n");
//     scanf("%d",&n);
//     // int table;
//     for (i=0; i<11;i++){
        
//         printf("The multiplication table of %d is 5X%d = %d \n", n,i, n*i);
//     }

//         return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int n=10,sum=0,i=1;
//     for (i = 1; i <=n;i++)
//     {
//         sum = sum + i;
        
//     }
//     printf("The value of sum(1 to 10) is %d", sum);
//     return 0;
// }

//  #include<stdio.h>
// #include<conio.h>
// int main(){
//     int b,n;
//     int i=1,sum=0;
//     printf("Enter the number whose table you want to print \n");
//     scanf("%d",&n);

//     for (i=1; i<11;i++){
        
//         printf("The multiplication table of %d is %dX%d = %d \n", n,n,i, n*i);
//     }

//     for (i = 1; i <= 10;i++)
//     {
//         b = n * i;
//         sum = sum + b;
//     }
//     printf("The sum is %d", sum);

//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int i=0,n, factorial=1;
//     printf("Enter the nuber you want to find the factorial of\n");
//     scanf("%d", &n);
//     for (i = 1; i <= n;i++){
//         factorial = factorial*i;
//     }
//     printf("The factorial of %d is %d\n", n, factorial);
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int i = 1, n, factorial = 1;
//     printf("Enter the nuber you want to find the factorial of\n");
//     scanf("%d", &n);
//     while(i<=n){
//        factorial = factorial*i;
//        i++;
//     }
//        printf("The factorial of %d is %d\n", n, factorial);
//     return 0;
// }

//          Wrong code-----> Now it's correct
#include<stdio.h>
#include<conio.h>
int main(){
    int i,n;
    int prime = 1;
    printf("Enter the no. you want to check\n");
    scanf("%d", &n);
    for (i = 2; i < n;i++){
        if (n%i==0){
            prime = 0;
            break;
            }
        }
        if( prime == 0){
            printf("This is a composite no.\n");
        }
        else{
        printf("The no. %d is prime no.\n", n);
        }

        return 0;}
    