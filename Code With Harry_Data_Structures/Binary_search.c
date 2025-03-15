// /*      Nitin Abhishek Mishra, Hitesh Milind Mahajan, Rupesh Dharmendra Jha

//                                             Linear Search code
// */
// #include<stdio.h>
// #include<conio.h>
// int binarysearch(int arr[],int size,int element){
//     int low, mid, high;
//     low = 0;
//     high = size - 1;
//     while(low<=high){
//         mid = (low + high) / 2;
//         if(arr[mid]==element){
//             return mid;
//         }
//         if(arr[mid]<element){
//             low= mid + 1;
//         }
//         else{
//             high = mid - 1;
//         }
//     }
//     return -1;
// }
// int main(){
// int arr[] = {3,6,12,23,35,46,56,69,78,85,96,111};
//  int element, size;
//     size = sizeof(arr) / sizeof(int);
//     printf("Enter the number you want to search for :- \n");
//     scanf("%d", &element);
//     int searchindex = binarysearch(arr, size, element);
//     printf("%d is in index %d\n", element, searchindex);
// return 0;
// }
/*     

              Alternate Method to print not present Linear Search code
*/
#include<stdio.h>
#include<conio.h>
int binarysearch(int arr[], int size, int element);
int main(){
int arr[] = {3,6,12,23,35,46,56,69,78,85,96,111};
 int element, size;
    size = sizeof(arr) / sizeof(int);
    printf("Enter the number you want to search for :- \n");
    scanf("%d", &element);
    int searchindex = binarysearch(arr, size, element);
    if(searchindex!=-1){
        printf("%d is in index %d\n", element, searchindex);
        }
return 0;
}
int binarysearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size - 1;
    while(low<=high){
        mid = (low + high) / 2;
        if(arr[mid]==element){
            return mid;
        }
        else if(arr[mid]<element){
            low= mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    printf("%d is not in index \n", element);
    return -1;
}