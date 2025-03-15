// // #include<stdio.h>
// // int main(){
// //     float r, area;
// //     float pi = 3.14;
// //     printf("Enter the value of radius\n");
// //     scanf("%f", &r);
// //     printf("Area of circle is %f",area = (pi * r * r));
// //     return 0;
// // }
// #include <stdio.h>
// int main()
// {
//     int a, result;
//     printf("Enter the number above 97\n");
//     scanf("%d", &a);
//     result = a % 97;
//     if (result == 0)
//     {
//         printf("The number is divisible by 97 \n");
//     }
//     else
//     {
//         printf("The number is not divisible by 97");
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int m1, m2, m3;
    float average;
    printf("Enter the m1 \n");
    scanf("%d",&m1);
 printf("Enter the m2 \n");
    scanf("%d",&m2);
     printf("Enter the m3 \n");              
    scanf("%d",&m3);
    average = (m1 + m2 + m3)/3;
    printf("Your total percentage is %f \n", average);
    if ((average<=33)||m1 <= 33 || m2 <= 33 || m3 <= 33)
    {
        printf("You are fail as you have less than 33 marks in any of the subject \n");

}
else {
    printf("You are pass as have more than 33 percent \n");
}
return 0;
}