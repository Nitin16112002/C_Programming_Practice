#include <stdio.h>
#include <conio.h>
void print(int *arr, int n)
{
    for (int i=0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void selectionsort(int *arr, int n)
{
    int indexofmin;
    int temp;
    printf("Running Selection sort...\n");
    for (int i = 0; i < n - 1; i++)
    {
        indexofmin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[indexofmin])
            {
                indexofmin= j;
            }
        }
        temp = arr[i];
        arr[i] = arr[indexofmin];
        arr[indexofmin] = temp;
    }
}
int main()
{
    // int arr[] = {6, 8, 2, 4, 3, 1};
    int arr[] = {3, 5, 2, 13, 12};
    int n = 5;
    // n = sizeof(arr) / sizeof(int);

    print(arr, n);
    selectionsort(arr, n);
    print(arr, n);

    return 0;
}
// Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)
    //  00  01  02  03  04
    // |03, 05, 02, 13, 12

    // After first pass
    //  00  01  02  03  04
    //  02,|05, 03, 13, 12

    // After second pass
    // 00  01  02  03  04
    // 02, 03,|05, 13, 12

    // After third pass
    // 00  01  02  03  04
    // 02, 03, 05,|13, 12

    // After fourth pass
    // 00  01  02  03  04
    // 02, 03, 05, 12,|13