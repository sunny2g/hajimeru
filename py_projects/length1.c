#include <cs50.h>
#include <stdio.h>

int main()
{
    char str[6];
    fgets(str,6,stdin);
    printf("%s", str);
    return 0;
}