#include<stdio.h>
long long int arra[1000001],arrb[1000002],arrc[1000003];
int main()
{	
	long long int i,n;
	scanf("%lld",&n);
	
	for (i=0;i<n;i++)
	scanf("%lld",&arra[i]);

	for (i=0;i<n;i++)
        scanf("%lld",&arrb[i]);

	for (i=0;i<n;i++)
        scanf("%lld",&arrc[i]);

	for (i=0;i<n;i++)
{	if (arra[i]+arrb[i]<=arrc[i] || arra[i]+arrc[i]<=arrb[i] || arrb[i]+arrc[i]<=arra[i])
	printf("No\n");
	else
	printf("Yes\n");
}

return 0;
}
