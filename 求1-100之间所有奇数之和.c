#include<stdio.h>
//求1-100之间所有奇数的和
   int main(void)
{
	   int i = 1;
	   int sum = 0;
	   for (i = 1; i <= 100; i=i+2)
	   {
		   sum = sum + i;
	   }
	   
	   printf("奇数之和为%d\n", sum);
	   
	   return 0;
}