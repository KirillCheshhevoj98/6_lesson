#include<cstdio>

int main()
{
	/*
	���� ����������� �����. ����� �����, ���������� ��� ��������� ��� ���� ������ ������.
	*/

	int a, b, c, sum = 0;

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