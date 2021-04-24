#include<stdio.h>
#include<conio.h>
void main()
{
	int n, rev=0,rem=0;
	long int sum;
	clrscr();
	printf("enter any number");
	scanf("%d",&n);
	while(n!=0)
		{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;

		}
			printf("reverse is %d", rev);
			sum=sum+rem;
			printf("sum will be %ld", sum);

getch();
}
