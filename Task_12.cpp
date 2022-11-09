#include<cstdio>

int main()
{
	/*
	Ќайти сумму целых положительных чисел из промежутка от a до b, кратных четырем.
	*/

	int a, b, c, sum = 0;

	printf("Enter number a: ");
	scanf("%d", &a);

	printf("Enter number b: ");
	scanf("%d", &b);
	if (a < b)
	{
		for (int i = a; i <= b; i++)
		{
			if (i % 4 == 0)
			{
				sum += i;
			}
		}
	}
	printf("Sum: %d", sum);
	getchar();
	return 0;
}