#define _CRT_SECURE_NO_WARNINGS 1

//strcpy
#include<stdio.h>
#include<string.h>

//int main() 
//{
	//char arr1[20] = {0};//Ŀ��ռ�
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
	//��2�����Ľϴ�ֵ
	int max=get_max(a,b);
	printf("max=%d\n",max);
	return 0;
}