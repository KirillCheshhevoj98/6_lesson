#include<cstdio>

int main()
{
	/*
	����� ����� ����� ������������� ����� �� ���������� �� a �� b, ������� �������.
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