#include<stdio.h>
#include<conio.h>
int main(){
    char st[] = "Rishu";
    char *ptr = st;
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}