#include <stdio.h>
 
int main() {
   int n,t,i,j,k;
   scanf("%d",&t);
   for(i=0;i<t;i++){
       scanf("%d",&n);
       int ar[n];
       for(j=0;j<n;j++){
           int need;
           scanf("%d",&need);
           int a,b,c;
           scanf("%d%d%d",&a,&b,&c);
 
           if(need<=(a+b+c)){
               ar[j]=1;
           }
           else{
               ar[j]=0;
           }
       }
       int cont=0;
       for(j=0;j<n;j++){
           if(ar[j]==0){
               printf("FAIL\n");
               cont=1;
               break;
           }
       }
       if(cont==1){
           continue;
       }
       else{
           printf("PASS\n");
       }
   }
    return 0;
}
