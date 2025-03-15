// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//         int a, b, sum;
//     while (t--)
//     {
//         scanf("%d %d", &a, &b);
//         sum = a + b;
//         int prime = 0;
//         for (int i = 1; i <= sum; i++)
//         {
//             if (sum % i == 0)
//             {
//                 prime++;

//             }
//         }
//         if (prime == 2)
//         {
//             printf("Alice\n");
//         }
//         else
//         {
//             printf("Bob\n");
//         }
//     }
//     return 0;
// }

#include <stdio.h>
#include <conio.h>
int main()
{
    int nc;
    scanf("%d", &nc);
    int arr[nc];
    for (int i = 0; i < nc;i++){
        // printf("%d\n", i);
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    int avg;
    for (int i = 0; i < nc; i++)
    {
        sum = sum + arr[i];
    printf("%d\n", sum);
    }
    avg = sum / nc;
    printf("%d\n", avg);
    return 0;
}


// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int nc;
//     scanf("%d", &nc);
//     int arr[nc];
//     for (int i = 0; i < nc;i++){
//         printf("%d\n", i);
//         scanf("%d", &arr[i]);
//     }
//         return 0;
// }