#include<stdio.h>
//求1-100之间奇数的个数
int main(void)
{
	int   i = 1;
	int sum = 0;
	for (i = 1; i <= 100; i++)
		{
		if (i % 2 == 1)
			sum++;
		}
printf("1-100之间奇数的个数为：%d\n",sum);


	return 0;

}