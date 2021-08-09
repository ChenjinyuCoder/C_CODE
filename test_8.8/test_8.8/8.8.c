#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	const int num = 10;
//	num = 20;
//	printf("%d",num);
//
//}
//int main()
//{
//	int n = 10;
//	int arr[n] = {0};
//	return 0;
//}
//#define MAX 100
//#define N 10;
//int main()
//{
//	printf("%d\n",MAX);
//	int arr[N] = { 0 };
//	return 0;
//}
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
int main()
{
	enum Sex s = FEMALE;
	printf("%d\n",MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	return 0;
}