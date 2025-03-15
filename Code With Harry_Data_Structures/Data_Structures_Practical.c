/*Write a program to perform following operations on any database:
 Add, Delete, Display, Search & Sort etc.*/

#include <stdio.h>
#include <conio.h>

// Add
int add(int arr[], int size, int element, int capacity, int index)
{
    printf("Enter the index at which you want to add \n");
    scanf("%d", &index);
    printf("Enter the element you want to add \n");
    scanf("%d", &element);

    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

//  Delete
void Deletion(int arr[], int size, int index)
{
    printf("Enter the index which you want to delete \n");
    scanf("%d", &index);
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

// Display
void display(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// search
int search(int arr[], int size, int element)
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

// Sort
void sort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[100] = {8, 5, 4, 2, 6, 1};
    int size;
    size = 6;
    int element;
    int index;

    // display(arr, size);

    // add
    // display(arr, size);
    // add( arr,  size,  element,  100,  index);
    // size +=1;
    // display(arr, size);

    // delete
    // display(arr, size);
    // Deletion(arr, size, index);
    // size -= 1;
    // display(arr, size);

    // Search
    // display(arr, size);
    //  printf("Enter the number you want to search for :- \n");
    // scanf("%d", &element);
    //  int searchindex = search(arr, size, element);
    // if(searchindex!=-1){
    //     printf("%d is in index %d\n", element, searchindex);
    //     }

    // sort
    display(arr, size);
    sort(arr, size);
    printf("After Sorting\n");
    display(arr, size);

    return 0;
}