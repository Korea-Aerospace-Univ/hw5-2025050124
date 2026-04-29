#include <stdio.h>



int main()
{
    int N; int i=1; int j=1; int k=1; int answer=0;
    
    scanf("%d",&N);
    
    for(i=1; 900*i<=N;i++){
        
        for(j=1; 1500*j<=N-900*i; j++){
            
            for(k=1; 200*k<=N-900*i-1500*j;k++){
                
                if(900*i+1500*j+200*k==N ){
                    
                    if(i>k || 2*j>k){
                        printf("%d %d %d\n",i,2*j,k);
                        
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
