#include<stdio.h>
#include<conio.h>
void show(int *arr,int size){
    for (int i = 0; i < size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void bubble_sort(int *arr,int size){
    int temp;
    for (int i = 0; i < size - 1;i++){
        for (int j = 0; j < size - 1 - i;j++)
        {
            if(arr[j]>arr[j+1]){
                temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {2, 8, 9, 4, 5, 3, 1};
    int size = sizeof(arr) / sizeof(int);
    show(arr, size);
    bubble_sort(arr, size);
    show(arr, size);

    return 0;
}