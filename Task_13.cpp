#include<cstdio>

int main()
{
	/*
	Найти все двузначные числа, которые делятся на n или содержат цифру n.
	*/

	int a, b, c, sum = 0;

	printf("Enter number a: ");
	scanf("%d", &a);
	for (int i = 10; i <= 99; i++)
	{
		int unit, dozen;
		unit = i % 10;
		dozen = i / 10;
		if (i % a == 0 || unit == a || dozen == a)
		{
			printf("%d\n", i);
		}
	}
	getchar();
	return 0;
}