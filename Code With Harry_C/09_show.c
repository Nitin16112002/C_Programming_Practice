#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct empolyee
{
    int age;
    float salary;
    char name[20];
} emp;
void show ( emp e1){
    printf("The age of emplpyee is %d\n", e1.age);
    printf("The salary of emplpyee is %0.2f\n", e1.salary);
    printf("The name of emplpyee is %s\n", e1.name );
}
int main(){
    emp e1;
    emp *ptr;
    ptr = &e1;
    printf("Enter the age:-");
    scanf("%d", &ptr->age);
    // ptr->age = 19;
    ptr->salary = 29253;
    strcpy(ptr->name,"Harry");
    show( e1);
    return 0;
}