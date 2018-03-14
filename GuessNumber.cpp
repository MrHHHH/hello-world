#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("***********************\n");
	printf("****  1.Play Game  ****\n");
	printf("****  0.Exit Game  ****\n");
	printf("***********************\n");
}
void game()
{
	int num = rand() % 100 + 1;
	int n = 0;
	while (1) {
		printf("Input a number:\n");
		scanf("%d", &n);
		if (n > num)
			printf("猜大了！\n");
		if (n < num)
			printf("猜小了！\n");
		if (n == num)
		{
			printf("猜对了！\n");
			break;
		}
	}
}
int main()
{
	int choice = 0;
	srand((unsigned int)time(NULL));
	do
	{
		
		menu();
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("Error!\n");
			break;
		}
	} while (choice);
	return 0;
}