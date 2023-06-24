#include<stdio.h>
#include<string.h>

int main(){
    int n,m,i,j,a[1000]={};
    char c;
    scanf("%d ",&n);
    for(i=0;i<n;i++){
        scanf("%c",&c);
        m=(int)c;
        a[m]++;
    }
    for(i=97;i<=123;i++){
        if(a[i]!=0){
            for(j=1;j<=a[i];j++){
                printf("%c",(char)i);
            }
        }
    }
    printf("\n");
    
    return 0;
}
