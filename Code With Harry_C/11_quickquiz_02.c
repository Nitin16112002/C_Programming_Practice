#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int *ptr;
    printf("Enter the number of memory you want:-\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n;i++){
        printf("Enter the %d element\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n;i++){
        printf("The %d element is %d\n", i, ptr[i]);
    }
        return 0;
}