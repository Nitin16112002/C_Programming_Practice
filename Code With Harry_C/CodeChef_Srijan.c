// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int n;
//     // scanf("%d", &n);
//     int i,l;
//     scanf("%d", &i);
//     int a,b;
//     int arr[i][2];
//     for (a = 0; a < i;a++){
//         for (b = 0; b < 2;b++){
//             scanf("%d", &arr[a][b]);
//         }
//     }

//     for (a = 0; a < i;a++){
//         for (b = 0; b < 2;b++){
//             printf("%d ", arr[a][b]);
//         }
//             printf("\n");
//     }

//     // for (a = 0; a < i;a++){
//     //     for (b = 0; b < 2;b++){
//     //     }
//     //         printf("\n");
//     // }

//     printf("%d\n", arr[(i-1)][0]);
//     printf("%d\n", arr[(i-2)][0]);

//        l=(arr[i-2][0]-arr[i-1][0]);
//         printf("%d \n",l);
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int t,n,m,k,x,y;
//     scanf("%d", &t);
//     while (t--){
//         scanf("%d", &n);//the number of loaves of bread Eikooc has
//          scanf("%d", &m);//the number of days after which all the breads will expire
//          scanf("%d", &k);// the number of loaves of bread Eikooc can eat in a day.

//          x = n / k;
//          y = n % k;
//         //  printf("%d\n", x);
//         //  if(x<=m && y==0){
//             //  printf("Yes\n");
//         //  }
//         if(n<=m*k){
//             printf("Yes\n");
//         }
//         //  else if (x!=0){
//         //     if(x<=k){
//         //         printf("Yes\n");
//         //     }
//             // else{
//             //     printf("No\n");
//             //     // printf("%d\n", x);
//             // }
//         //  }

//          else{
//              printf("No\n");
//          }
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int o;
//     scanf("%d", &o);

//     while (o--)
//     {
//         int w[5], u[5];
//         int s = 0, d = 0;
//         int a, b, x, y;
//         scanf("%d %d %d %d", &a, &b, &x, &y);

//         //     printf("%d\n", a);
//         //   printf("%d\n",b);
//         //    printf("%d\n", x);
//         //     printf("%d\n", y);

//         for (int i = 0; i <= x; i++)
//         {
//             w[i] = a + i;
//             // printf("%d\n", w);
//             if (w[i] == b)
//             {
//                 // printf("Yes\n");
//                 s = 1;
//                 break;
//             }
//             // else{
//             //     printf("No\n");
//             // }
//         }

//         for (int i = 0; i <= y; i++)
//         {
//             u[i] = a - i;
//             // printf("%d\n", u);
//             if (u[i] == b)
//             {
//                 // printf("Yes\n");
//                 d = 1;
//                 break;
//             }
//             // else{
//             //     printf("No\n");
//             // }
//         }
//         if (s == 1 || d == 1)
//         {
//             printf("Yes\n");
//         }
//         else
//         {
//             printf("No\n");
//         }
//         // printf("Thw value of t is %d\n", o);
//     }

//     return 0;
// }

#include <stdio.h>
#include <conio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        if (y>x)
        {
            printf("No\n");
            // printf("x is %d and y is %d", x, y);
        }
        else
        {
            printf("Yes\n");
            // printf("x is %d and y is %d", x, y);
        }
    }

    return 0;
}

// Runner.prototype.gameOver=function(){}
// Runner.instance_.setSpeed(1000)  // chrome dino
// Runner.instance_.tRex.setJumpVelocity(25)