#include<cstdio>

int main()
{
	/*
	Ќапечатать "столбиком":
		а) все целые числа от 20 до 35;
		б) целые числа от 10 до b (значение b вводитс€ с клавиатуры; b>10);
		в) целые числа от a до 50 (значение a вводитс€ с клавиатуры; a<50);
		г) все целые числа от a до b (значени€ a и b ввод€тс€ с клавиатуры; b>a).

	*/

	// a)

	for (int i = 20; i < 36; i++)
	{
		printf("%d\n", i);
	}

	// б)
	int b;
	printf("\nEnter b: ");
	scanf("%d", &b);

	if (b > 10)
	{
		for (int i = 10; i <= b; i++)
		{
			printf("%d\n", i);
		}
	}
	else
	{
		printf("The number b must be greater than 10\n");
	}

	// в)
	int a;
	printf("\nEnter a: ");
	scanf("%d", &a);

	if (a < 50 && a > 0)
	{
		for (int i = a; i <= 50; i++)
		{
			printf("%d\n", i);
		}
	}
	else
	{
		printf("The number a must be smallest than 50\n");
	}

	// в)
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);

	if (b > a)
	{
		for (int i = a; i <= b; i++)
		{
			printf("%d\n", i);
		}
	}
	else
	{
		printf("The number b must be greater than b\n");
	}
	getchar();
	return 0;
}