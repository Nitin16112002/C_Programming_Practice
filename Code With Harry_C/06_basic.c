// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int marks[3];
//     int i,j;
//     for (i = 0; i < 3;i++){
//         printf("Enter the marks of student %d\n", i + 1);
//         scanf("%d", &marks[i]);
//     }
//     for (i = 0; i < 3;i++){
//         printf("The marks of student %d is %d\n", (i + 1),marks[i]);
        
//     }

//         return 0;
// }


// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int c = 52;
//     int d = 6;
//     int *f = &d;
//     int *ptr = &c;
//     printf("The value of f is %u\n", f);
//     printf("The value of ptr is %u\n", ptr);
//     // ptr=ptr + 2;
//     // ptr++;
//     ptr = ptr + *f;
//     printf("The value of ptr is %u\n", ptr);
//     printf("The value of f is %u\n",f);
   
//  return 0;
// }


#include<stdio.h>
#include<conio.h>
int main(){
    // int a, b;
    int n, m,i,j;
    int nstudents = n;
    int nsubjects = m;
    printf("Enter the number of students:\n");
    scanf("%d", &n);
    printf("Enter the number of subjects:\n");
    scanf("%d", &m);

    int marks[n][m];
    for (i = 0; i < n;i++){
        for (j = 0; j < m;j++){
            printf("Enter the marks of student %d in subject %d \n", (i + 1), (j + 1));
            scanf("%d", &marks[i][j]);
        }
    }
    for (i = 0; i < n;i++){
        for (j = 0; j < m;j++){
            printf("The marks of student %d in subject %d is: %d\n", (i + 1), (j + 1),marks[i][j]);
        }
    }
        return 0;
}