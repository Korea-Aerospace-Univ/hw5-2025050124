#include <stdio.h>



int main()
{
    int N; int i=1; int j=2; int k=1; int answer=0;
    
    scanf("%d",&N);
    
    for(i=1; 900*i<=N;i++){
        
        for(j=2; 750*j<=N-900*i; j=j+2){
            
            for(k=1; 200*k<=N-900*i-750*j;k++){
                
                if(900*i+750*j+200*k==N ){
                    
                    if(i>k || j>k){
                        printf("%d %d %d\n",i,j,k);
                        
                        answer++;
                    }
                }
            }     
        }
    }
   if(answer==0){
    printf("none");
   }


}
