#include<stdio.h>
//��1-100֮�����������ĺ�
   int main(void)
{
	   int i = 1;
	   int sum = 0;
	   for (i = 1; i <= 100; i=i+2)
	   {
		   sum = sum + i;
	   }
	   
	   printf("����֮��Ϊ%d\n", sum);
	   
	   return 0;
}