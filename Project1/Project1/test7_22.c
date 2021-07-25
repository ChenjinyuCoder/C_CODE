#define _CRT_SECURE_NO_WARNINGS 1

//strcpy
#include<stdio.h>
#include<string.h>

//int main() 
//{
	//char arr1[20] = {0};//目标空间
	//char arr2[] = "hello";
	//strcpy(arr1, arr2);
	//printf("%s\n",arr1);
	//return 0;
//}
//int main() 
//{
//	char arr[] = "hello bit";
//	char* ret=memset(arr,'x',5);
//	printf("%s\n",ret);
//
//	return 0;
//}
int get_max(int x,int y) 
{
	return(x > y ? x : y);
}

int main() 
{
	int a = 0;
	int b = 0;
	scanf("%d%d",&a,&b);
	//求2个数的较大值
	int max=get_max(a,b);
	printf("max=%d\n",max);
	return 0;
}