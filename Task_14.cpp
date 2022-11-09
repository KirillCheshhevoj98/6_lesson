#include<cstdio>

int main()
{
	/*
	Дано пятизначное число. Найти число, получаемое при прочтении его цифр справа налево.
	*/

	int a, b, c, sum = 0;
	
	/*
	for(step = 4; step >= 0; step--)
	{
		last = x % 10;
		res = res + last * pow(10, step);
		x = x / 10;
	}
	printf("%d", res);
		
	for(i = 1; i <= 5; i++)
	{
		last = x % 10;
		res = res * 10 + last;
		x = x / 10;
	}
	printf("%d", res);
	*/
	printf("Enter number a: ");
	scanf("%d", &a);
	if (a > 9999 && a < 100000)
		for (int i = a; i; i /= 10)
		{
			printf("%d", i % 10);
		}
	getchar();
	return 0;
}
