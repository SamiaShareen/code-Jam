#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void fun(int n){
    
    if(n==1){
        printf("%d",n);
        return;
    }
    fun(n/2);
    printf("%d",n%2);

}
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        fun(n);
        printf("\n");
    }
    return 0;
}