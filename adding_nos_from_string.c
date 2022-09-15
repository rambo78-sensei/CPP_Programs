#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int i,sum=0,res=0;
    scanf("%s",a);
    for(i=0;i<strlen(a);i++)
    {
        sum=sum+a[i]-48;
        res+=sum;

    }
    printf("%d",res);
}