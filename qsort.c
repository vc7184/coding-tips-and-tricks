#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b)
{
	return (*(int*)a > *(int*)b);//'>' for ascending
}

int main()
{
	int i;
	int a[5]={5,8,10,-5,66};
	qsort(a,5,sizeof(int),compare);
	for(i=0;i<5;i++)	
		printf("%d ",a[i]);
	return 0;
}
