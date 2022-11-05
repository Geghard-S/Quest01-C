#include <stdio.h>
void my_print_alphabet()
{
    char    letter;

    letter = 'a';
    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }
        putchar('\n');    
}