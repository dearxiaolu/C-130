#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int n = 0;
    int a[50] = { 0 };
    int i = 0;
    int j = 0;
    //输入n的大小
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]); //输入成绩

    }
    //冒泡排序来把数组里的成绩升序排列
    for (i = 0; i < n - 1; i++)   //排序的趟数
    {
        int j = 0;
        int temp = 0;
        for (j = 0; j < n - 1 - i; j++)  //尤其要注意 j<n-1-i；假设10个数排序，那么数字两两比较交换9次就行，多一次的话会把最大值换走
        {
            if (a[j] > a[j + 1])     //这里默认采用升序来排列 
            {
                int temp;        //定义一个临时值来存储数据，以此来达到交换数值的目的
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    //输出
    printf("%d %d %d %d %d", a[n - 1], a[n - 2], a[n - 3], a[n - 4], a[n - 5]);

    return 0;
}


//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[40];
//    int i, j;
//    for (i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//    for (i = 0; i < n - 1; i++)
//    {
//        int temp;
//        for (j = 0; j < n - 1 - i; j++)
//        {
//            if (arr[j] < arr[j + 1])
//            {
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//    for (i = 0; i < 5; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}
