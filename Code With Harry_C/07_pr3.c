#include<stdio.h>
#include<conio.h>
int main(){
    int mul[10];
    int i, j,m;
    printf("Enter the number you want to find the table of \n");
    scanf("%d", &m);
    for (i = 0; i < 10; i++)
    {
        mul[i] = m * (i + 1);
    }
    for (i = 0; i < 10;i++){
        printf("%d X %d = %d\n", m, (i + 1), mul[i]);
    }
        return 0;
}