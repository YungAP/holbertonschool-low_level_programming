#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - gives info about the last digit of a random number
* Return :0
*/
int main(void)
{
int n;
int o;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (o > 5)
	printf("last digit of %i is %i and is greater than 5\n", n, o); else if (o == 0) 
printf("last digit of %i is 0 and is 0\n", n);
else
printf("Last digit of %i is %i  and is less than 6 and not 0\n", n, o);
return (0);
}
