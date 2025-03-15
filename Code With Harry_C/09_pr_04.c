#include<stdio.h>
#include<conio.h>
typedef struct employee{
    int code;
    float salary;
    char name[20];
} emp;
    int main()
{
    emp e1;
    emp *ptr;
    ptr = &e1;
    ptr->code = 603;
    ptr->salary = 32.5;
    strcpy(ptr->name, "Harry");
    printf("%s\n", e1.name);
    printf("%d\n", e1.code);
    printf("%f\n", e1.salary);

    return 0;
}

// #include<stdio.h>
// #include<conio.h>

// typedef struct empdetails{
//     int code;
//     float salary;
//     char nam[];
// } emp;

// int main(){

//     emp bt;
//     emp *ptr;
//     ptr = &bt;
//     ptr->code = 2;
//     ptr->salary = 25.3;
//     strcpy(ptr->nam, "Arnav Kumar Mishra");
//     printf("%d\n", bt.code);
//     printf("%0.5f\n", bt.salary);
//     printf("%s\n", bt.nam);


//     return 0;
// }