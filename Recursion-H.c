#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int iseven(int x){
    return x%2==0?1:0;
}
int isvowel(char ch){
    char s[]="aeiouAEIOU";
    for(int i=0;s[i];i++){
        if(s[i]==ch){
            return 1;
        }
    }
    return 0;
}
int n;
void fun(int x){
    int i;
    if(x==n){
        for(i=1;i<x;i++){
            printf(" ");
        }
        for(i=2*n;i>=2*x;i--){
            printf("*");
        }
        return;
    }
    for(i=1;i<x;i++){
        printf(" ");
    }
    for(i=2*n;i>=2*x;i--){
        printf("*");
    }
    printf("\n");
    fun(x+1);
}

//git github amr jibon dhonshow

int main(){
    scanf("%d",&n);
    fun(1);
    return 0;
}
