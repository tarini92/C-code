#include<stdio.h>
#include<string.h>
#include<math.h>
int value(char);
int main()
{
char str[20],str1[20],c,d;
int n,a[10],i=0,sol=0,j,k,m;
scanf("%s",str);
while(1)
{
scanf("%d",&a[i]);
if(a[i]!=1000)
i++;
else
break;
}
//printf("%d ",i);
for(j=0;j<i;j++)
	{
	 
	sol = a[j];
	strcpy(str1,str);
	//printf("%s",str1);
	//printf("%d \n",a[j]);
        

	for( m=0 ;m<strlen(str);m++)
	{
	if(str1[m]=='x')
		{
		str1[m] = a[j]+48;
		//printf("%c ",str[m]);
		}
	}	

	for(k=1;k<strlen(str);k+=2)
	{
        char c = str1[k];
	char d = str1[k+1];
	//if(str[k]=='x')
	//{
	//sol = a[j];
	//printf("%d\n",sol);
	
	 if( c=='+' || c=='-' || c=='*' || c=='/' || c=='^' )
	{
		switch(str1[k])
		{
		case '+': sol = sol  + value(d); 
		//printf("%d ",sol);
		break;
		
		case '-' : sol = sol - value(d);
		//printf("%d ",sol);
 		break;
	
		case '*' : //printf("%d %d",sol,value(d));
		sol = sol * value(d);
		//printf("%d ",sol);
		 break;

		case '/' : sol = sol /  value(d); break;

		case '^' : sol = (int)pow(sol,value(d)); break;
                //printf("%d ",sol);
		}
	
	}
	

	}
	printf("%d \n",sol);

	}
return 0;
}

int value(char c)
{
return c- '0';
}


