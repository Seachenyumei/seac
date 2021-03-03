#include<stdio.h>
#define N 3
int main()
{
	int a[N],*p,i,j;
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	printf("从小到大排序为:\n");
	for(i=0;i<N-1;i++)
		for(j=0;j<N-1-i;j++)
			if(a[j]>a[j+1])
			{
				p=a[j];
				a[j]=a[j+1];
				a[j+1]=p;
			}
			for(i=0;i<N;i++)
				printf("%d ",a[i]);
			printf("\n");
			return 0;
}