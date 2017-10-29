#include<stdio.h>
#define N 10000005
#define M 100005
long long int arr[M],drr[M];
long long int count[N];
int main()
{
	int n,i;

	scanf("%d",&n);

	for(i=0;i<n;i++)
		{	scanf("%lld",&arr[i]);
			count[arr[i]]++;
		}
	
	int p=0;
	for(i=0;i<N;i++)
		{ 
			if (count[i]!=0)
			{	
				while(count[i]--)
				{	drr[p]=i;
					p++;
				}
			}
		}
	int diff,b=drr[n-1],a=drr[0];
	diff=drr[n-1] -drr[0];
	for (i=0;i<p-1;i++)
	{	
		if (drr[i+1]-drr[i] < diff)
		{	
			diff=drr[i+1]-drr[i];
			a=drr[i];
			b=drr[i+1];

		}
	}

	printf("%d %d\n",a,b);
return 0;
}
