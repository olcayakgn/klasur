#include <stdio.h>
#include <stdlib.h>


int qIterativ(int n)
{
	int *array;
		int i;
		int number1;
		int number2;

		array = (int *) malloc(sizeof(int)*(n+2));
		array[1] = 1;
		array[2] = 1;

		for(i=3;i<=n;i++)
		{
			number1 = array[i-2];
			number2 = array[i-1];

			array[i] = array[i - number1] + array[i - number2];
		}

		return array[n];
}
