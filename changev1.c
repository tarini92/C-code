#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    //char den[100];
int den,test,num[10],i=0,j,k=0,m,temp=0;
int denom[100];
//fgets(den,sizeof(den),stdin);
//char* token;
//token = strtok(den, ",");

   
/* walk through other tokens */
/*while( token != NULL ) 
   {   
   denom[i] = toint(token);
   i++; 
   token = strtok(NULL,",");

   }*/

scanf("%d",&den);
scanf("%d",&test);

for(j=0;j<den;j++)
{
scanf("%d,",&denom[j]);
}
for(j=0;j<test;j++)
{
scanf("%d",&num[j]);
}

for(j=0;j<den-1;j++)
{
printf("%d,",denom[j]);
}
printf("%d",denom[j]);
printf("\n");



for( j = 0;j<test;j++)
{
//printf("%d",num[j]);
for(m = 0;m<den;m++)
{

if(num[j]<denom[m])
continue;
else
{
temp = num[j]; 
num[j] = num[j]%((num[j]/denom[m])*denom[m]);
if(num[j]!=0)
    printf("%d:%d,",denom[m],(temp/denom[m]));
else
    printf("%d:%d",denom[m],(temp/denom[m]));
}
}

printf("\n");
} 
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    //char den[100];
int den,test,num[10],i=0,j,k=0,m,temp=0;
int denom[100];
//fgets(den,sizeof(den),stdin);
//char* token;
//token = strtok(den, ",");

   
/* walk through other tokens */
/*while( token != NULL ) 
   {   
   denom[i] = toint(token);
   i++; 
   token = strtok(NULL,",");

   }*/

scanf("%d",&den);
scanf("%d",&test);

for(j=0;j<den;j++)
{
scanf("%d,",&denom[j]);
}
for(j=0;j<test;j++)
{
scanf("%d",&num[j]);
}

for(j=0;j<den-1;j++)
{
printf("%d,",denom[j]);
}
printf("%d",denom[j]);
printf("\n");



for( j = 0;j<test;j++)
{
//printf("%d",num[j]);
for(m = 0;m<den;m++)
{

if(num[j]<denom[m])
continue;
else
{
temp = num[j]; 
num[j] = num[j]%((num[j]/denom[m])*denom[m]);
if(num[j]!=0)
    printf("%d:%d,",denom[m],(temp/denom[m]));
else
    printf("%d:%d",denom[m],(temp/denom[m]));
}
}

printf("\n");
} 
    return 0;
}

