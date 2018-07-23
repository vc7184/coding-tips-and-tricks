//This code will print 'z' if input is 'a', 'y if input is 'b' and so on..
#include<stdio.h>
int main()
{
	char s[100];
	scanf("%s",s);
	int n,i;
	for(i=0;s[i]!='\0';i++){
		n = s[i] - 97;
		printf("%c",(122-n));
	}
	return 0;
}
