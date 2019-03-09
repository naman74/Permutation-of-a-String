#include <stdio.h> 
#include <string.h> 
void swap(char *x,char *y)
{
	char ch;
	ch=*x;
	*x=*y;
	*y=ch;
}
void permutation(char *s,int i,int n)
{
	int j;
	if(i==n)
	{
		printf("%s\n",s);
	}
	else
	{
		for(j=i;j<=n;j++)
		{
			swap((s+i),(s+j));
			permutation(s,i+1,n);
			swap((s+i),(s+j));
		}
	}
}
int main()
{
	char str[20];
	
	puts("Enter a String");
	gets(str);
	permutation(str,0,strlen(str)-1);
	return 0;   
}
