#include<stdio.h>
//��1-100֮�������ĸ���
int main(void)
{
	int   i = 1;
	int sum = 0;
	for (i = 1; i <= 100; i++)
		{
		if (i % 2 == 1)
			sum++;
		}
printf("1-100֮�������ĸ���Ϊ��%d\n",sum);


	return 0;

}