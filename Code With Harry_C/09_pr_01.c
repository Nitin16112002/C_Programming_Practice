#include<stdio.h>
#include<conio.h>
typedef struct vector{
    int x;
    int y;

} ve;
int main(){
    ve v1, v2;
    v1.x = 3;
    v1.y = 5;
    printf("The value of x and y of v1 is %d,%d \n", v1.x, v1.y);
    v2.x = 9;
    v2.y = 2;
    printf("The value of x and y of v1 is %d,%d \n", v2.x, v2.y);

    return 0;
}