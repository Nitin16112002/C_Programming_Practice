// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int n, count;
//         count = 0;
//         scanf("%d", &n);
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             scanf("%d", &arr[i]);
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if(arr[i]>=1000){
//                 count++;
//             }
//         }
//         printf("%d\n", count);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         char str[20];
//         // gets(str);
//         scanf("%s", &str);
//         int m = strlen(str);
//         // printf("%d", m);
//         // printf("%s\n",str);

//         char strg[20];
//         // gets(str);
//         scanf("%s", &strg);

//         // printf("%s\n",strg);
//         // printf("h\n");

//         for (int i = 0; i < m;i++){
//             if(str[i]==strg[i]){
//                 printf("G");
//             }
//             else{
//                 printf("B");
//             }
//         }
//             printf("\n");
//     }

// return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// #include <string.h>

// int min(int a,int b){
//     return (a < b) ? a : b;
// }
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         char z[20];
//         scanf("%s", &z);
//         // printf("%s", z);
//         int s = strlen(z);
//         int counta=0;
//         for (int i = 0; i < s;i++){
//                 if(z[i]=='a'){
//                     counta++;
//                 }
//         }
//         // printf("%d",counta);
//         int countb = s - counta;
//         int z1 = min(counta, countb);
//         printf("%d\n", z1);
//     }

//     return 0;
// }
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int a, b;
//         scanf("%d %d", &a, &b);
//         int c;
//         c = a + b;
//         int sum = 0;
//         int arr[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

//         while (c != 0)
//         {
//             int mod = c % 10;
//             sum = sum + arr[mod];
//             c = c / 10;
//         }
//         printf("%d\n", sum);
//     }

//     return 0;
// }

// #include<stdio.h>
// // #include<conio.h>

// int test(char *a,int n){
//     int count = 0;
//     for (int i = 0; i < n;i++){
//         if(a[i]=='1'){
//             if(a[i+1]=='0'){
//                 count++;
//             }
//         }
//     }
//     return count;
// }

//     int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int n;
//         scanf("%d", &n);
//         char arr[n];
//         scanf("%s", arr);
//         int z = test(arr, n);
//         printf("%d\n", z);
//     }
//     return 0;
// }

// #include<stdio.h>
// // #include<conio.h>

// void test(char *a){
//     int win = 0;
//     int loss = 0;
//     for (int i = 0; i < 25;i++){
//         if(a[i]=='1'){
//             win++;
//         }
//         else if(a[i]=='0'){
//             loss++;
//         }
//         if(win>loss){
//             if(win>=12){
//                 printf("Win\0");
//                 break;
//             }
//         }
//         else if(loss>win){
//             if(loss>=12){
//                 break;
//                 printf("Loss\0");

//             }
//         }
//     }

// }

//     int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         char arr[25];
//         scanf("%s", arr);
//         test(arr);

//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while(t--)
//     {
//         char s[100001];
//         scanf("%s", s);
//         int chef_score = 0, opp_score = 0;
//         int i = 0;
//         while(s[i] != '\0')
//         {
//             if(s[i] == '0')
//                 opp_score++;
//             else
//                 chef_score++;
//             if(chef_score >= 11 || opp_score >= 11)
//             {
//                 if(chef_score - opp_score >= 2)
//                 {
//                     printf("WIN\n");
//                     break;
//                 }
//                 else if(opp_score - chef_score >= 2)
//                 {
//                     printf("LOSE\n");
//                     break;
//                 }
//             }
//             i++;
//         }
//         if(chef_score < 11 && opp_score < 11)
//         {
//             printf("LOSE\n");
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// // #include<conio.h>

// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int a, b;
//         scanf("%d %d", &a, &b);
//         int c = b / a;
//         if (c >= 1)
//         {
//             printf("%d\n", c);
//         }
//         else
//         {
//             printf("0\n");
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// // #include<conio.h>
// void bubbleSort(long long int *arr, long long int n)
// {
//     for (long long int i = 0; i < n; i++)
//     {
//         for (long long int j = 0; j < n - i; j++)
//         {

//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// void show(long long int *arr, long long int n)
// {
//     for (long long int i = 0; i < n; i++)
//     {
//         printf("%lld ", arr[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     long long int t;
//     scanf("%lld", &t);
//     while (t--)
//     {
//         long long int n;
//         scanf("%lld", &n);
//         long long int arr[n];
//         for (long long int i = 0; i < n; i++)
//         {
//             scanf("%lld", &arr[i]);
//         }

//         // show(arr, n);

//         bubbleSort(arr, n);
//         printf("%d\n", arr[1]);
//         // show(arr, n);
//     }

//     return 0;
// }

// #include <stdio.h>
// // #include<conio.h>

// int main()
// {
//     long long int t;
//     scanf("%lld", &t);
//     while (t--)
//     {
//         long long int n;
//         scanf("%lld", &n);
//     //   int n;
//     // printf("Enter the number of days: ");
//     // scanf("%d", &n);

//     long long int temps[n];
//     // printf("Enter the temperature forecast of each day:\n");
//     for (long long int i = 0; i < n; i++) {
//         scanf("%lld", &temps[i]);
//     }

//     // find the index of the second coldest day
//     int coldest_index = 0;
//     int second_coldest_index = -1;
//     for (long long int i = 1; i < n; i++) {
//         if (temps[i] < temps[coldest_index]) {
//             second_coldest_index = coldest_index;
//             coldest_index = i;
//         } else if (second_coldest_index == -1 || temps[i] < temps[second_coldest_index]) {
//             second_coldest_index = i;
//         }
//     }

//     printf("%d\n", temps[second_coldest_index]);

//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of days: ");
//     scanf("%d", &n);

//     int temps[n];
//     printf("Enter the temperature forecast of each day:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &temps[i]);
//     }

//     // find the index of the second coldest day
//     int coldest_index = 0;
//     int second_coldest_index = -1;
//     for (int i = 1; i < n; i++) {
//         if (temps[i] < temps[coldest_index]) {
//             second_coldest_index = coldest_index;
//             coldest_index = i;
//         } else if (second_coldest_index == -1 || temps[i] < temps[second_coldest_index]) {
//             second_coldest_index = i;
//         }
//     }

//     printf("The temperature of the day of the attack is %d\n", temps[second_coldest_index]);

//     return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int n, c;
//         scanf("%d %d", &n, &c);
//         int f[n];
//         for (int i = 1; i <= n; i++)
//         {
//             scanf("%d", &f[i]);
//         }

//         // printf("%d\n", f[1]);
//         // printf("%d\n", f[2]);

//         int cost = 0;

//         for (int i = 1; i <= n; i++)
//         {

//             if (f[i] == 1)
//             {
//                 cost += c;
//             }
//             else
//             {
//                 cost += 0;
//             }
//             for (int i = 2; i <= n; i++)
//             {

//                 if (f[i] == 0 && f[i - 1] == 1)
//                 {
//                     cost += c;
//                 }
//                 else
//                 {
//                     cost += 0;
//                 }
//             }
//         }

//         printf("%d\n", cost);
//     }

//     return 0 ;
// }

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     long long int t;
//     scanf("%lld", &t);
//     while (t--)
//     {
//         long long int n, c;
//         scanf("%lld %lld", &n, &c);
//         int f[n];
//         for (long long int i = 1; i <= n; i++)
//         {
//             scanf("%lld", &f[i]);
//         }

//         // printf("%d\n", f[1]);
//         // printf("%d\n", f[2]);

//         long long cost = 0;

//         if (n == 1 && f[1] == 1)
//         {
//             cost += c;
//         }
//         else if (n == 1 && f[1] == 0)
//         {
//             cost += 0;
//         }
//         else

//         {
//             for (long long int i = 1; i <= n; i++)
//             {
//                 if (i == 1 && f[i] == 0)
//                 {
//                     cost += 0;
//                 }
//                 else if (i == 1 && f[i] == 1)
//                 {
//                     cost += c;
//                 }
//                 else
//                 {
//                     if (f[i] == 1 || f[i - 1] == 1)
//                     {
//                         cost += c;
//                     }
//                 }
//             }
//         }

//         printf("%lld\n", cost);
//     }

//     return 0;
// }


#include <stdio.h>
#include <conio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    int f[n];
    for (long long int i = 1; i <= n; i++)
    {
        scanf("%lld", &f[i]);
    }

    long long int count = 1;

    for (long long int i = 1; i <= n; i++)
    {
        if(f[i]<f[i+1]){
            count += 1;
        }
    }

    printf("%lld\n", count);

    return 0;
}