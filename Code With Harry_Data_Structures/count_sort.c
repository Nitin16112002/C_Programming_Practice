#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<limits.h>

void print_array(int *arr,int n){
    for (int i = 0; i < n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int maximum(int *arr,int n){
    int max = INT_MIN;
    for (int i = 0; i < n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}

void count_sort(int *arr,int n){
    int i ;
    int j = 0;
    int max = maximum(arr, n);
    int *count = (int *)malloc((max + 1) * sizeof(int));
    for (i = 0; i < max+1;i++){
        count[i] = 0;
    }
    for (i = 0; i < n;i++){
        count[arr[i]] = count[arr[i]] + 1;
    }
  i =  0;
  j = 0;
    while(i<=max){
        if(count[i]>0){
            arr[j] = i;
            count[i] = count[i]--;
            j++;
        }
         else{
            i++;
        }
    }

}

int main(){
int arr[] = {5, 4, 6, 1};
    int n = sizeof(arr) / sizeof(int);
    print_array(arr, n);
    count_sort(arr, n);
    print_array(arr, n);
    return 0;
return 0;
}