#include <stdio.h>
#include <conio.h>
// char character;
int occurence(char *str, char character)
{
    char *ptr = str;
    int times = 0;
    while (*ptr != '\0')
    {
        if (*ptr == character)
        {
            times++;
        }
        ptr++;
    }
    return times;
}
int main()
{
    char character;
    char str[] = "Hello Mootoo\n";
    printf("%s", str);
    printf("Enter a character you want to search for\n");
    scanf("%s", &character);
    int times = occurence(str, character);
    printf("The occurence of %c is %d: \n", character, times);
    return 0;
}




