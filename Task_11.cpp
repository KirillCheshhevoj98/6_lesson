#include<cstdio>

int main()
{
	/*
	����� ����� ������������� �������� �����, ������� 50. 
	*/

	int sum = 0;

	for (int i = 0; i <= 50; i++)
	{
		if (i % 2 == 1)
		{
			sum += i;
		}
	}
	printf("Sum: %d", sum);
	getchar();
	return 0;
}