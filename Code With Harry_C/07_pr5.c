// // #include<stdio.h>
// // #include<conio.h>
// // reversearr(int *arr,int n){
// //     for (int i = 0; i < (n / 2);i++){
// //         int temp;
// //         temp = arr[i];
// //         arr[i] = arr[n - i - 1];
// //         arr[n - i - 1] = temp;
// //     }
// // }
// // int main(){
// //     int arr[]={1,2,3,4,5,6,7};
// //     reversearr(arr, 7);
// //     for (int i = 0; i < 7;i++){
// //         printf("The value of %d element is %d:\n ", i, arr[i]);
// //     }


// //     return 0;
// // }


// //          To reverse a character array
// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// void reversearr(char *arr,int n){
//     for (int i = 0; i < (n / 2);i++){
//         int temp;
//         temp = arr[i];
//         arr[i] = arr[n - i - 1];
//         arr[n - i - 1] = temp;
//     }
// }
// int main(){
//     char arr[]={"rishu"};
//     printf("%d\n",strlen(arr));
//     int z = strlen(arr);
//     reversearr(arr, z);
//     for (int i = 0; i < z;i++){
//         printf("%c", arr[i]);
//     }


//     return 0;
// }


// // #include<stdio.h>
// // #include<conio.h>
// // reversearr(int *arr,int n){
// //     for (int i = 0; i < (n / 2);i++){
// //         int temp;
// //         temp = arr[i];
// //         arr[i] = arr[n - i - 1];
// //         arr[n - i - 1] = temp;
// //     }
// // }
// // int main(){
// //     int arr[]={1,2,3,4,5,6,7};
// //     reversearr(arr, 7);
// //     for (int i = 0; i < 7;i++){
// //         printf("The value of %d element is %d:\n ", i, arr[i]);
// //     }


// //     return 0;
// // }


//          To reverse a character array
#include<stdio.h>
#include<conio.h>
#include<string.h>
void reversearr(char *arr,int n){
    for (int i = 0; i < (n / 2);i++){
        int temp;
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
int main(){
    char arr[10];
    printf("enter name\n");
    gets(arr);
    printf("%c", arr);
    int z = strlen(arr);
    printf("-->%d\n",z);
    reversearr(arr, z);
    printf("%s", arr);
    // for (int i = 0; i < z;i++){
    //     printf("%c", arr[i]);
    // }


    return 0;
}



