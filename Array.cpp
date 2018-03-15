#include<stdio.h>
#include<string.h>
void init(int arr[10])               //初始化数组
{
	int j = 0;
	for (j = 0; j <= 9; j++)
	{
		arr[j] = j;
	}
}
void empty(int arr[10],int SZ)             //清空数组
{
	memset(arr, 0, SZ*sizeof(arr[0]));
}
void reverse(int arr[10],int SZ)           //逆置数组元素
{
	int i = 0;
	int temp = 0;
	for (i = 0; i < SZ / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[SZ - 1 - i];
		arr[SZ - 1 - i] = temp;
	}
}
int main()
{
	int arr[10] = { 1,2,3,6,5,4,2 };
	int SZ = sizeof(arr) / sizeof(arr[0]);
	empty(arr, SZ);                  //清空数组
	init(arr);                       //初始化数组
	reverse(arr,SZ);                 //数组元素逆置
	int i = 0;
	return 0;
}