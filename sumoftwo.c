#include<stdio.h>
#include<string.h>

int main()
{
int sum,m,flag=0,j2len,jlen,n,len;
int zeroasci = (int)'0';
//printf("%d",zeroasci);
char i[100],j[100];
printf("Enter first number");
scanf("%s",i);
printf("Enter second number ");
	scanf("%s",j);
jlen = strlen(i);
j2len =jlen;
int new[10];
len = 10;
for(m = jlen;m>=0;m--)
{

 sum = flag + (int)i[m] + (int)j[m] - 2*zeroasci;
//printf("%d \n",sum);
if(sum<9)
{
flag = 0;
new[len]=sum;			
}
else
{
new[len] = sum%10;
flag = sum/10;
}
len--;
}

printf("%d",flag);
for(n = len+1;n< 10;n++)
printf("%d",new[n]);

return 0;
}

