// #include<stdio.h>
// #include<conio.h>
// int main(){
//     char st[] = "rishu";
//     char *ptr = st;
//     // printf("%s", &st);
//     printf("\nEnter tour name:\n");
//     gets(st);
//     // printf("%s", &st);
//     puts(st);
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// int main(){
//     // char st[] = "harry";
//     // st[] = "rohan";
//     char *ptr = "harry";
//     printf("%s\n", ptr);
//     ptr = "arnav";
//     printf("%s\n", ptr);
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// // #include<string.h>
// int main(){
//     char str[] = "Harrhy";
//     // int length = strlen(str);
//     printf("%d", strlen(str));
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// int main(){
//     char str[] = "Arnav is a good boy";
//     char stp[30];
//     // strcpy(stp, str);
//     printf("%s", strcpy(stp, str));
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// int main(){
//     char st[] = "hello";
//     char sr[] = " harry";
//     printf("%s", strcat(st, sr));
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// int main(){
//     char st[] = "harry";
//     char str2[] = "zhaarry";
//     // int val=strcmp;
//     printf("%d", strcmp(st, str2));
//     return 0;
// }

#include <stdio.h>
 
void display(int arr[], int n)
{
    // Code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
 
void indDeletion(int arr[], int size, int index)
{
    // code for Deletion
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i + 1];
    }  
}
 
int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index = 2;
    display(arr, size);
    indDeletion(arr, size, index);
    int p=(arr);
    printf("-->%d\n", p);
    size -= 1;
    display(arr, size);
    return 0;
}