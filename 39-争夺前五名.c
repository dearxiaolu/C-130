#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int n = 0;
    int a[50] = { 0 };
    int i = 0;
    int j = 0;
    //����n�Ĵ�С
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]); //����ɼ�

    }
    //ð����������������ĳɼ���������
    for (i = 0; i < n - 1; i++)   //���������
    {
        int j = 0;
        int temp = 0;
        for (j = 0; j < n - 1 - i; j++)  //����Ҫע�� j<n-1-i������10����������ô���������ȽϽ���9�ξ��У���һ�εĻ�������ֵ����
        {
            if (a[j] > a[j + 1])     //����Ĭ�ϲ������������� 
            {
                int temp;        //����һ����ʱֵ���洢���ݣ��Դ����ﵽ������ֵ��Ŀ��
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    //���
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
