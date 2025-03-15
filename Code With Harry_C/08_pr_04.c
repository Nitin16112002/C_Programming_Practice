#include<stdio.h>
#include<conio.h>
void slice(char *str,int m, int n){
    int i = 0;
    while((i+m)<n){
        str[i] = str[i + m];
        i++;
    }
    str[i] = '\0';  //reason behind using this is still unknown
}
int main(){
    char str[] = "rishubhai";
    slice(str, 1, 6);
    printf("%s", str);
    printf("\n%d", strlen(str));
    return 0;
}