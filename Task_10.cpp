#include<cstdio>

int main()
{
	/*
	������� �� ����� ��� ����� ����� �� a �� b, ������� ���������� ����� c. 
	*/

	int a, b, c;

	printf("Enter number a: ");
	scanf("%d", &a);

	printf("Enter number b: ");
	scanf("%d", &b);

	printf("Enter number c: ");
	scanf("%d", &c);
	if (a < b)
	{
		for (int i = a; i <= b; i++)
		{
			if (i % c == 0)
			{
				printf("%d\n", i);
			}
		}
	}
	else
	{
		printf("Error");
	}
	getchar();
	return 0;
}