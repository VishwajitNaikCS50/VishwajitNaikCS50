#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("what's is your name? ");
    printf("hello, %i\n", answer);
}
