// #include<stdio.h>
// #include<conio.h>
// void display(int arr[],int sizen ){
//     for (int i=0;i<=sizen;i++){
//         printf("%d ", arr[i]);
//     }
//     printf(" \n");
// }
// void traversal(int arr[], int sizen){
//         for (int i = 0; i < sizen;i++){
//             printf("%d \n",arr[i]);
//         }
            
//     }
// int insertion(int arr[],int sizen,int capacity,int element,int index){
//     if (sizen>=capacity){
//         return -1;
//     }
//     for (int i = (sizen-1); i >=index ;i--){
//         arr[i + 1] = arr[i];
//     }
//     arr[index] = element;
// return 1;
//             // printf("%d \n",arr);
// }
// int main(){
//     int arr[] = {5, 6, 9, 6, 8};
//     // int sizen = sizeof(arr) / sizeof(int);
//     int sizen = 5;
//     traversal(arr, sizen);
//     insertion(arr, sizen, 10, 12, 2);
//     sizen += 1;
//     display(arr, sizen);
//     // printf("\n%d\n", arr);
//     return 0;
// }


#include<stdio.h>
 
 
void display(int arr[], int n){
    // Code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");   
}
 
int indInsertion(int arr[], int size, int element, int capacity, int index){
    // code for Insertion
    if(size>=capacity){
        return -1;
    }
    for (int i = size-1; i >=index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1; 
}
 
int main(){
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index=1;
    display(arr, size); 
    indInsertion(arr, size, element, 100, index);
    size +=1;
    display(arr, size);
    return 0;
}