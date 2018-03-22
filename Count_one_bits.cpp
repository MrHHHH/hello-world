#include <stdio.h>
int count_one_bits(unsigned int value)
{
	// 返回 1的位数
	int count = 0;
	while (value) {
		value = value & (value - 1);
		count++;
	}
	return count;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int count = count_one_bits(num);
	printf("%d", count);
	return 0;
} 
