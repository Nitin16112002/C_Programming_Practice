#include<stdio.h>
#include<conio.h>
#include<string.h>
int total(char *st){
    char *ptr = st;
    int length=0;
    while(*ptr!='\0'){
        length++;
        ptr++;
    }
    return length;
}
int main(){
    char st[] = "Harry";
    char *ptr = st;
    int l = total(st);
    printf("The value is %d\n", l);
    return 0;
}