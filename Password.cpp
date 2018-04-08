#include<stdio.h>
#include<string.h>
#include<windows.h>
int main() 
{
	char passwd[10] = { 0 };
	for (int i = 0; i <= 3; i++)
	{
		scanf("%s", passwd);
		if (strcmp(passwd, "123456") == 0)
		{
			printf("正确\n");
			break;
		}
		else 
		{
			printf("错误\n");
			if (i == 2)
			{
				printf("错误3次，退出系统\n");
				exit(0);
			}
		}
	}
	return 0;
} 
