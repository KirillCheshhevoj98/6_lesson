#include<cstdio>

int main()
{
	/*
	������� �� ����� ��� ����� ����� �� 100 �� 200, ������� ����. 
	*/

	for (int i = 100; i <= 200; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d\n", i);
		}
	}
	getchar();
	return 0;
}