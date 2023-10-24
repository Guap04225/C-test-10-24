#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

//递归与迭代

//求第n个斐波那契数

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
	//ret = Fac1(n);//循环的方式
	ret = Fib(n);//递归的方式
	printf("%d\n", ret);
	return 0;
}



//练习3 求n的阶乘(不考虑溢出)

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
//	//ret = Fac1(n);//循环的方式
//	ret = Fac2(n);//递归的方式
//	printf("%d\n", ret);
//	return 0;
//}