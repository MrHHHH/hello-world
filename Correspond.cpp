#include <stdio.h>
#include <string.h>
#define MAX 1000000
int main()
{
	char input[MAX] = { 0 };
	int i = 0;
	int count = 0;
	while (scanf("%s", input) != EOF) {
		for (i = 0; i < strlen(input); i++) {
			if (input[i] == '{') {
				count++;
			}
			if (input[i] == '}'&&count == 0) {
				printf("Cannot find '{' corresponding '}'\n");
				return 0;
			}
			else if (input[i] == '}'&&count != 0) {
				count--;
			}
		}
		if (count == 0) {
			printf("Can find all '{' corresponding '}'\n");
		}
		else {
			printf("Cannot find all '{' corresponding '}'\n");
		}
	}
	return 0;
}