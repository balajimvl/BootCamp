#include<stdio.h>
int check(int a[],int n,int s)
{
	int i,k=1;
	for(i=0;i<s;i++)
	{
		if(a[i]>n)
		{
			k=i;
			break;
		}
	}
	if(k==1)
	 {
		  printf("-1 Not found");
	 }
	
	return k;
}


int main()
{
	int a[30],s,i,n,ind;
	printf("Enter the size of the Array\n");
	scanf("%d",&s);
	printf("Enter the Elements of the Sorted Array\n");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter a Number\n");
	scanf("%d",&n);
	ind=check(a,n,s);
	printf("Index is %d\n",ind);
	return 0;
}

	
	
