#include<stdio.h>
int main()
{ 
	int n;
	int i,j;
	scanf("%d",&n);
	int str[34][34];  
    str[0][0]=1;  
    for(i=1;i<n;i++)  
    {  
        str[i][0]=1,str[i][i]=1;  
        for(j=1;j<i;j++)  
            str[i][j]=str[i-1][j-1]+str[i-1][j];  
    }  
    for(i=0;i<n;i++)  
    {  
        for(j=0;j<=i;j++)  
        {  
             printf("%d ",str[i][j]);  
        }  
        printf("\n");  
    }  
	return 0;
}
