#include<cstdio>

int main()
{
	/*
	��������� 1 ������ ������ ���� � �����, ������ n ���.
	����� ������ ����� ������ ������ ������������� �� 2% �� ��������� �����. 
	���������� ������� ����� ������ � ����� ������ �� ������ ����� ����� ����.
	*/

	const int MON = 12;
	double money, sum = 0, percent;
	printf("Enter your money: ");
	scanf("%lf", &money);

	if (money > 0)
	{
		for (int i = 0; i <= MON; i++)
		{
			sum = sum + money * 0.02;
			printf("Month %lf\n", sum);
		}
	}
	getchar();
	return 0;
}