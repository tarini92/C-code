#include <stdio.h>



int main(){
    int t;
    //int a[100];
    int i,j,n,k,timely=0;
    int nk[t][2]; 
    scanf("%d",&t);
    int arr[t][10];
    for(int a = 0; a < t; a++)
    {
     
        scanf("%d %d",&nk[a][0],&nk[a][1]);
          n = nk[a][0],k = nk[a][1]; 
        
        
        for(int b = 0; b < n; b++)
               {
               scanf("%d",&arr[a][b]);
               }
    }
  if(k<n && t<=10)
      {
    for(i=0;i<t;i++)
        {
        n = nk[i][0];k = nk[i][1];
        for(j=0;j<n;j++)
            {
            if(arr[i][j]<=0)timely++;
            }
        if(timely<k)printf("YES \n");
        else printf("NO \n");
        }
  }
    return 0;
}
