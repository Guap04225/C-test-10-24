#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

//�ݹ������

//���n��쳲�������

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	//ret = Fac1(n);//ѭ���ķ�ʽ
	ret = Fib(n);//�ݹ�ķ�ʽ
	printf("%d\n", ret);
	return 0;
}



//��ϰ3 ��n�Ľ׳�(���������)

//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}

//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}

//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//ret = Fac1(n);//ѭ���ķ�ʽ
//	ret = Fac2(n);//�ݹ�ķ�ʽ
//	printf("%d\n", ret);
//	return 0;
//}