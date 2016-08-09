#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int total[100],denom[100],den,test,coin[10],tst[10],res;
    int i,j,k,l,m,n;  
    scanf("%d",&den);
    scanf("%d",&test);
    for(i=0;i<den;i++)
        {
        scanf("%d",&coin[i]);
        }
    total[0]=0;
    for( j=0;j<test;j++)
        {
        scanf("%d",&tst[j]);
        for( m = 1;m=tst[j];m++)
            total[i]=999;
        for( l = 0;l<den;l++)
             {   
             for( k=1;k<=tst[j];k++)
                  {
                  total[k] = min(total[k],1+total[k-coin[l]]);
                  denom[k] = l;
                  }
             }
	res = tst[j];
	for(n=tst[j];n>=0;n--)
             {
		if(res!=0)
			res = res - coin[n];
		printf("%d ",coin[n]);
	     }

		

	}



               
    
 return 0;
    
}

int min(int a,int b)
{
return a<b?a:b;
}

