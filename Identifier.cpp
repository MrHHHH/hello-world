#include <stdio.h>
int main()
{
	int n;
	char s[55];
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		int f=1,i;
		gets(s);
		if(s[0]>='0'&&s[0]<='9')
		{
			f=0;
		}
		for(i=0;s[i];i++){
			if(!(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z'||s[i]=='_'||s[i]>='0'&&s[i]<='9'))
			{
				f=0;
				break;
			}
			if(f)
			{
				printf("yes\n");
			}
			else printf("no\n");
		}
	return 0;
}