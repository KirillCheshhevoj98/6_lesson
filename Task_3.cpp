#include<cstdio>

int main()
{
	/*
	���������� "���������":
		�) ��� ����� ����� �� 20 �� 35;
		�) ����� ����� �� 10 �� b (�������� b �������� � ����������; b>10);
		�) ����� ����� �� a �� 50 (�������� a �������� � ����������; a<50);
		�) ��� ����� ����� �� a �� b (�������� a � b �������� � ����������; b>a).

	*/

	// a)

	for (int i = 20; i < 36; i++)
	{
		printf("%d\n", i);
	}

	// �)
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

	// �)
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

	// �)
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