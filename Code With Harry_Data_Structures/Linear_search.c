// /*      Nitin Abhishek Mishra, Hitesh Milind Mahajan, Rupesh Dharmendra Jha

//                                             Linear Search code
// */
// #include <stdio.h>
// #include <conio.h>
// int linearsearch(int arr[], int size, int element)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == element)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {3, 89, 6, 54, 96, 35, 25, 45, 653};
//     int element, size;
//     size = sizeof(arr) / sizeof(int);
//     printf("Enter the number you want to search for :- \n");
//     scanf("%d", &element);
//     int searchindex = linearsearch(arr, size, element);
//     printf("%d is in index %d\n", element, searchindex);
//     return 0;
// }


/*   

                    Alternate Method to print not present Linear Search code
*/
#include <stdio.h>
#include <conio.h>
int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
     printf("%d is not in index \n", element);
     return -1;
}
int main()
{
    int arr[] = {3, 89, 6, 54, 96, 35, 25, 45, 653};
    int element, size;
    size = sizeof(arr) / sizeof(int);
    printf("Enter the number you want to search for :- \n");
    scanf("%d", &element);
    int searchindex = linearsearch(arr, size, element);
    if(searchindex!=-1){
        printf("%d is in index %d\n", element, searchindex);
        }
    return 0;
}


