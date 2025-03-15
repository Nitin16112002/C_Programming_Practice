#include<stdio.h>
#include<conio.h>
void decrypt(char *str,int key){
    char *ptr = str;
    while (*ptr!='\0')
    {
        *ptr = *ptr- 1;
        ptr++;
    }
    
} int main()
{
    int key;
    char str[] = "Ifmmp!Npup";
    char *ptr = str;
    decrypt(str,key);
    printf("The decrypted string is %s", str);
    return 0;
}