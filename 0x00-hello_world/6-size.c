#include <stdio.h>
/*
 * main- entry point
 * return (0)
 */

int main (void)
{
	printf("Size of a char:&zu bytes\n", sizeof (char));
	printf("Size of an int: &zu bytes\n" ,sizeof(int));
	printf("Size of a long: &zubytes\n", sizeof(long int));
	printf("Size of long long:&zu bytes\n", sizeof(long long));
	printf("Size of float: &zu bytes\n" , sizeof(float));

	return(0);
}

