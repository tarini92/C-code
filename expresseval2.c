#include<stdio.h>
#include<string.h>
#include<math.h>
int value(char);
char *str;
int a[10],j,k;

int main()
{
char str1[20],tmp[20],c,d,e;
int i=0,sol=0,k,m,tem=0,n=0;
scanf("%s",str);

while(1)
{
scanf("%d",&a[i]);
if(a[i]!=1000)
i++;
else
break;
}


for(j=0;j<i;j++)
{
//sol = a[j];
//strcpy(str1,str);
	/*for( m=0 ;m<strlen(str);m++)
	{
		if(str1[m]>='a' && str1[m]<='z')
		{
		str1[m] = a[j] +48;
		//printf("%c ",str[m]);
		}
	}*/	
	
	for(k=0;k<strlen(str1)-1;k++)
	{
	
	c = str[k];
	d = str[k+1];	
		if(c=='(')
		{
		
		left = eval();
		printf("%d ",left);
		}
		else if(c=='+' || c=='-' || c=='*' || c=='/' || c=='^' && d!='(')
		{
			switch(c)
			{
			case '+': sol = left  + value(d); 
			//printf("%d ",sol);
			break;
			
			case '-' : sol = left - value(d);
			//printf("%d ",sol);
 			break;
	
			case '*' : //printf("%d %d",sol,value(d));
			sol = left * value(d);
			//printf("%d ",sol);
			 break;

			case '/' : sol = left /  value(d); break;
		
			case '^' : sol = (int)pow(sol,value(d)); break;
        	        printf("%d ",sol);
			}
		}
		/*else if(c=='+' || c=='-' || c=='*' || c=='/' || c=='^' && d=='(')
		{
		e = c;
		k+=2;
		n=0;
		while(str1[k]!=')')
			{
			tmp[n++]=str1[k++];
			}
		tem = eval(tmp,a[j]);
		printf("%d ",tem);
			switch(e)
			{
			case '+': sol = sol  + tem; 
			//printf("%d ",sol);
			break;
			
			case '-' : sol = sol - tem;
			printf("%d ",sol);
 			break;
	
			case '*' : //printf("%d %d",sol,value(d));
			sol = sol * tem;
			//printf("%d ",sol);
			 break;

			case '/' : sol = sol /  tem; break;
			
			case '^' : sol = (int)pow(sol,tem); break;
        		//printf("%d ",sol);
			}
		}*/	
	
	}
printf("%d \n",sol);
}	
	

return 0;
}

int value(char c)
{
return c- '0';
}

int eval()
{
int sol,k;
char c,d;
str++;
while(str[k]!=')]
{
         c = str[k];
	 d = str[k+1];
	//if(str[k]=='x')
	//{
	//sol = a[j];
	//printf("%d\n",sol);
	 if(c>='a' && c<='z')
	{
	sol = a[i];
	}
	 if( c=='+' || c=='-' || c=='*' || c=='/' || c=='^' )
	{
		switch(str[k])
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
	
k++;
}
return sol;

	
}
