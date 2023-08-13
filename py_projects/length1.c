#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = "aaaa";
    int string_length( string name);
    int i = 0;
    while (name[i] != '\0')
    {
        i++;
    }
    printf("%i\n", i);
    printf("%i\n", name );
}