#include<stdio.h>
#include<conio.h>
void encrypt(char *str,int key){
    char *ptr = str;
    while (*ptr!='\0')
    {
        *ptr = *ptr + key;
        ptr++;
    }
}
void decrypt(char *str,int key){
    char *ptr = str;
    while (*ptr!='\0')
    {
        *ptr = *ptr-key;
        ptr++;
    }
} 

int main()
{
    int key;
    char str[] = "Hello Moto, All good?";
    char *ptr = str;
    printf("Enter key:-\n");
    scanf("%d", &key);
    encrypt(str, key);
    printf("The encrypted string is %s\n", str);

    decrypt(str,key);
    printf("The decrypted string is %s\n", str);
    return 0;
}