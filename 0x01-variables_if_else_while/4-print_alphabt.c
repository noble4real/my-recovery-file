#include<stdio.h>

/**
 *main -> assign a random number to the variable n each time it is executed
 *and print the last digit of the number stored in the variable n
 *Return: Always 0 (Success)
 */
int main(void)
{
char h;
for (h = 'a'; h <= 'z'; h++)
{
if (h != 'q' && h != 'e')
{
putchar(h);
}
}

putchar(10); /* this is an ascii code for new line*/

return (0);
}
