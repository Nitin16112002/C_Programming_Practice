#include<stdio.h>
#include<conio.h>
typedef struct vector
{
    int x;
    int y;
} ve;
ve  vectorsum(ve v1,ve v2){
    ve result;
    result.x= v1.x+v2.x;
    result.y= v1.y+v2.y;
}
int main(){
    ve v1, v2, sum;
    v1.x = 96;
    v1.y = 6;
    printf("X dim is %d and Y dim is %d \n", v1.x, v1.y);
    v2.x = 26;
    v2.y = 8;
    printf("X dim is %d and Y dim is %d \n", v2.x, v2.y);
    sum = vectorsum(v1, v2);
    printf("The result of X dim is %d and result of Y dim is %d \n", sum.x, sum.y);
    return 0;
}