#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
    int age;
    float salary;
    char name[10];
};
int main(){
    struct employee e1, e2, e3;
    e1.age = 20;
    e1.salary = 55.2;
    strcpy(e1.name, "Arnav");
    e2.age = 21;
    e2.salary =45.2;
    strcpy(e2.name, "rishu");
    e3.age = 19;
    e3.salary = 155.2;
    strcpy(e3.name, "harry");
    printf("%d\n", e1.age);
    printf("%0.2f\n", e1.salary);
    printf("%s\n", e1.name);
    printf("%d\n", e2.age);
    printf("%0.2f\n", e2.salary);
    printf("%s\n", e2.name);
    printf("%d\n", e3.age);
    printf("%0.2f\n", e3.salary);
    printf("%s\n", e3.name);

    return 0;
}