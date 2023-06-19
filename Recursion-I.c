#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
char s[500];
int n,cnt=0;

int iseven(int x){
    return x%2==0?1:0;
}
int isvowel(char ch){
    char s[12]="aeiouAEIOU";
    for(int i=0;s[i];i++){
        if(s[i]==ch){
            return 1;
        }
    }
    return 0;
}

int fun(int x){
    if(x==n-1){
        if(isvowel(s[x])){
            cnt++;
        }
        return cnt;
    }
    if(isvowel(s[x])){
        cnt++;
    }
    fun(x+1);
}
int main(){

    int num;
    gets(s);
    n=strlen(s);
    num=fun(0);
    printf("%d\n",num);
    return 0;
}
