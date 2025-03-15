#include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
    ptr = (float *)malloc(2*sizeof(float));
    for (int i = 0; i < 2;i++){
        printf("Enter a key\n");
        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < 2;i++){
        printf("The key are|-%f\n", ptr[i]);
    }
        return 0;
}