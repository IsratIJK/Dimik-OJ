#include<stdio.h>
int main(){
    int t,i,j,n;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        for(j=0;j<n;j++){
            for(int k=0;k<n;k++){
                printf("*");
            }
            printf("\n");
        }
        if(i<t-1){
            printf("\n");
        }
    }
}

