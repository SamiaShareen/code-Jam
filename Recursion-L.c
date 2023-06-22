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

long long s=0;
int n,a[(int)1E4];

long long sum(int x){
    if(x==n-1){
        s+=a[x];
        return s;
    }
    s+=a[x];
    sum(x+1);
}

void solve(void){
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("%lld\n", sum(0));
}

int main(){
    int t=1;
    //scanf("%d",&t);       // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}