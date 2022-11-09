#include<cstdio>

int main()
{
	/*
	Вывести на экран все целые числа от 100 до 200, кратные трем. 
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