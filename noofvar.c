#include<stdio.h>
int main()
{
	int a[26]={0};
	int count[10]={0},i,d,c=0,n;
	char str[10];
	scanf("%s",str);
	for(n=0;str[n]!='\0';n++);
	for(i=0;i<n;i++)
	{
		if((str[i]<='Z')&&(str[i]>='A'))
		{
			d=str[i]-'A';
			if(count[d]==0)
			{
				count[d]=1;
				c++;
			}
		}
	}
	printf("%d\n",c);
	return 0;
}
