#include<stdio.h>
#include<math.h>
int main()
{
int a,tmp,n,i,r=0,k,c,b,d=0;
scanf("%d", &a);
if(a==1)
printf("NO\n");
else{
	tmp=a;
	while(tmp!=0)
	{
		tmp=tmp/10;
		c++;
	}
	tmp=a;
	for(b=c;b>0;b--)
	{	while(tmp!=0)
		{
			k=tmp%10;
			r=k*10+r;
			tmp=tmp/10;
		}
		tmp=r;	
	
			for(i=2;i<=sqrt(a);i++)
			{
				n=a%i;
				if(n==0)
				{
				break;
				}
			}
		if (i> sqrt(a))
		    d++;
	}
if(d==c)
printf("yes");
}
return 0;
}
