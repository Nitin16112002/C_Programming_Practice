#include<stdio.h>
#include<conio.h>
 int check(char *str,char alph){
    char *ptr = str;
        // printf("%d\n",&str);
    int i=0;
    while(*ptr!='\0'){
        // printf("%d\n", &str);
        if (*ptr==alph){
            // printf("%c is present in the string\n", alph);
            i+= 1;
        }
       
        ptr++;
    }
    return i;
}
int main(){
    int i;
    char str[] = "Hello arnav\n";
    char *ptr = str;
    char alph;
    printf("%s", str);
    printf("Enter the character you want to check for\n");
    scanf("%c", &alph);
    int times=check(str, alph);
    // printf("%d\n", times);
    if(times==0){
        printf("%c is not present in the string\n", alph);
    }
    else{
        printf("%c is present in the string %d times\n", alph,times);
    }
    return 0;
}