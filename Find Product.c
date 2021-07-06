#include<stdio.h>
#include<math.h>
int main()
{
	long long int p,i,a[10000],n,j=1;
	//printf("enter the value of n:\n");
	scanf("%d\n",&n);
	for(i=0; i<n; i++)
	{
		scanf("%d\t",&a[i]);
	}
	p=pow(10,9)+7;
	for(i=0; i<n; i++)
	{
		j=(j*a[i])%p;
	}
	printf("%lld",j);
}
