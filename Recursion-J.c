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

// main code start from here

int n;
long long fac(int x){
    if(x==1) return x;
    return fac(x-1)*x;
}
void solve(void){
    int n;
    scanf("%d",&n);
    printf("%lld\n",fac(n));
}

int main(){
    int t=1;
    //scanf("%d",&t);       // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}