#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0
 */
int main(void)

{
char lower_case;
char upper_case;

for (upper_case = 'A'; upper_case <= 'z'; upper_case++)
{
puchar(upper_case);
}

for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
{
putchar(lower_case)
}

puchar('\n');
}
