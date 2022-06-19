#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main()
{
	int arr[10];
	int sum = 0;

	int* ptr = &arr[0];

	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		int random = rand() % 100;
		*(ptr + i) = random;
		printf("%d\t", *(ptr+i));
		sum += *(ptr + i);
	}

	printf("\nAvrage=%d\n", sum / 10);

	int max = *(ptr + 0);
	int min = *(ptr + 0);

	for (int i = 1; i < 10; i++)
	{
		if (max < *(ptr + i))
			max = *(ptr + i);

		if (min > *(ptr + i))
			min = *(ptr + i);
	}
	printf("Min=%d\n", min);
	printf("Max=%d\n", max);
}