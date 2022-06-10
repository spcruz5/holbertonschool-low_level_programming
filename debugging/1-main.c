#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;
	
	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
        {
		putchar(i);	//needs an increment i++ so that 
	}			//the i=10 and the loop can finish

	printf("Infinite loop avoided! \\o/\n");

return (0);
}
