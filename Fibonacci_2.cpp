#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a=1,b=1,ans=1;
    for (i=1;i<=n-2;i++){
        ans=(a+b)%10007;
        a=b;
        b=ans;
    }
    printf("%d\n",ans);
    return 0;
}