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
			printf("��ȷ\n");
			break;
		}
		else 
		{
			printf("����\n");
			if (i == 2)
			{
				printf("����3�Σ��˳�ϵͳ\n");
				exit(0);
			}
		}
	}
	return 0;
}