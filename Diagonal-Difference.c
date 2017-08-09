#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,sum=0,sum1=0,result=0; 
    scanf("%d",&n);
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
       }
    }
   
     for(int a_i = 0; a_i < n; a_i++)
       for(int a_j = 0; a_j < n; a_j++)
           if(a_i==a_j) 
           sum+=a[a_i][a_j];
    for(int a_i = 0; a_i < n; a_i++)
       for(int a_j = n-1-a_i; a_j < n-a_i; a_j++)
            sum1+=a[a_i][a_j];
    result=abs(sum-sum1);
printf("%d",result);
    return 0;
}
