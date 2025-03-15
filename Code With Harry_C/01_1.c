#include<stdio.h>
int main()
{
    int length,breadth,area;
    
    printf("Enter the value of length\n");
    scanf("%d", &length);
    printf("Enter the value of breadth\n");
    scanf("%d", &breadth);
    area = length * breadth;
    printf("The area of rectangle is %d", area);
    return 0;
}
// #include<stdio.h>
// int main(){
//     int a;
//     a = 3.0 + 1;
//     printf("Ans is %d",a);
//     //   printf(type'a');
//     return 0;
// }