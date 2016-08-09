#include<stdio.h>
#include<string.h>

int main()
{
int den,test,num[10],i=0,j,k=0,m,temp=0;
int denom[100],count[100];
 
scanf("%d",&den);
scanf("%d",&test);

for(j=0;j<den;j++)
	{
scanf("%d:%d,",&denom[j],&count[j]);
	}


for(j=0;j<test;j++)
	{
scanf("%d",&num[j]);
	} 

for(j=0;j<den;j++)
{
if(j==den-1)
printf("%d:%d",denom[j],0);
else
printf("%d:%d,",denom[j],0);
}

printf("\n");

for( j = 0;j<test;j++)
	{
	for(m = 0;m<den;m++)
		{
		temp = num[j]/denom[m];
		if(num[j]<denom[m])
		continue;
		else
			{

			if(temp>count[m] && count[m]!=0 && count[m]>0)
				{
				num[j] = num[j]-(count[m]*denom[m]);

                                if(m<den-1)
				printf("%d:%d,",denom[m],count[m]);
                                else
                                printf("%d:%d",denom[m],count[m]);

				count[m] = 0;
				}

			else if(count[m]!=0)
				{
				num[j] = num[j]-(temp*denom[m]);
                                if(num[j]!=0)
                                printf("%d:%d,",denom[m],temp);
				else 
                                printf("%d:%d",denom[m],temp);
                                                               
				count[m] = count[m]-temp;
				}	

			}

		}
printf("\n");
	}

return 0;
}



int toint(char *str)
{
  int  res;
  int  p;

  res = 0;
  p = 1;
  while (('-' == (*str)) || ((*str) == '+'))
    {
      if (*str == '-')
        p = p * -1;
      str++;
    }
  while ((*str >= '0') && (*str <= '9'))
    {
      res = (res * 10) + ((*str) - '0');
      str++;
    }
  return (res * p);
}

