#include<cstdio>

int main()
{
	/*
	��������� ��������� ������ ������ ����� ����� �������� ����� ��� � ����, ����������� ����������� � ���������� ������.
	*/

	int value, a;
	printf("Enter number: ");
	scanf("%d", &value);
	printf("Enter a: ");
	scanf("%d", &a);

	if (a > 0)
	{
		for (int i = 0; i < a; i++)
		{
			printf("%d ", value);
		}
	}
	else
	{
		printf("Error");
	}
	getchar();
	return 0;
}