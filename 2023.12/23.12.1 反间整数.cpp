#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000]={0};char b[1000];char c[1000];int i,m,n;
	while(scanf("%s",&a)!=EOF)
	{
		char b[1000]={0};char c[1000]={0};
		int len=strlen(a);int count=0;
		for(i=0;i<len;i++)
		{
			b[i]=a[len-i-1];
		}
		int len3=strlen(b);//printf("b(len)=%d\n",len3);
			for(i=0;i<=len;i++)
			{
				if(i==len&&count==1)c[len]='1';
				//if(a[i]=='-'){a[i]=b[i]=c[i]='0';continue;} 
				if(a[i]+b[i]-'0'<'9'&&a[i]+b[i]-'0'>='0')
				{
					if(count)
					{
						c[i]=a[i]+b[i]-'0'+1;
						count=0;
					}
					else c[i]=a[i]+b[i]-'0';
				}
				else if(a[i]+b[i]-'0'>='9')
				{
					if(count&&a[i]+b[i]-'0'=='9')
					{
						c[i]='0';
					}
					else if(a[i]+b[i]-'0'=='9')
					{
						c[i]=a[i]+b[i]-'0';
					}
					else if(count)c[i]=a[i]+b[i]-'9';
					else c[i]=a[i]+b[i]-'9'-1;
					if(a[i]+b[i]-'0'>'9')count=1;
					else count=0;
				}
				//printf("%d",i);
			}
			int len2=strlen(c);//printf("c(len)=%d\n",len2);//printf("clen=%c\n",c[len2-1]);
			//if(a[0]=='-')printf("-");
			for(i=0;i<len2;i++)
			printf("%c",c[len2-i-1]);
			printf("\n");
		}
	}
		
