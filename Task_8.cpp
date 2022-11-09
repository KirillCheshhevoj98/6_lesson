#include<cstdio>

int main()
{
	/*
	√ражданин 1 €нвар€ открыл счет в банке, вложив n руб.
	„ерез каждый мес€ц размер вклада увеличиваетс€ на 2% от имеющейс€ суммы. 
	ќпределить прирост суммы вклада и сумму вклада на каждый мес€ц этого года.
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