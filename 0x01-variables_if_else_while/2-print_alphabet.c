#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)

{
char alphabet;

for (alphabet = 'a'; alphabet <= 'Z'; alphabet++)
{
putchar(alphabet);
}

putchar('\n');

return (0);

}
