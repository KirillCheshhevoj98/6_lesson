#include<cstdio>

int main()
{
	/*
	�����: 
		�) ����� ���� ����� ����� �� 100 �� 500; 
		�) ����� ���� ����� ����� �� a �� 500 (�������� a �������� � ����������; a<500); 
		�) ����� ���� ����� ����� �� �10 �� b (�������� b �������� � ����������; b>�10); 

	*/
	
	// a)
	int sum1 = 0, sum2 = 0, sum3 = 0;

	for (int i = 100; i <= 500; i++)
	{
		sum1 += i;
	}
	printf("Sum number: %d", sum1);

	// b)

	int a;
	printf("Enter number a: ");
	scanf("%d", &a);

	if (a > 0 && a < 500)
	{
		for (int i = a; i <= 500; i++)
		{
			sum2 += i;
		}
		printf("\nSum number: %d", sum2);
	}
	else
	{
		printf("Error");
	}

	int b;
	printf("Enter number b: ");
	scanf("%d", &b);
	if (b > -10)
	{
		for (int i = -10; i <= b; i++)
		{
			sum3 += i;
		}
		printf("\nSum number: %d", sum3);

	}
	else
	{
		printf("Error");
	}
	getchar();
	return 0;
}