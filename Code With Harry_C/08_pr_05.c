#include<stdio.h>
#include<conio.h>
#include<string.h>
char copym(char *str1,char *str2){
    char *ptr = str1;
    int i = 0;
    while(*ptr!='\0'){
        str2[i] = str1[i];
        i++;
    }
    // str2[i] = '\0';
}
int main(){
    char str1[] = "harry bhai";
    char str2[32];
    printf("%s\n", str1);
    char *ptr = str1;
   copym(str1, str2);
    printf("the value is %s \n", str2);
    return 0;
}