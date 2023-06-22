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

int n,a[10000];

int max(int x,int y){
    int p;
    if(n>1){
        if(y==n-1){
            if(a[x]>a[y]) return a[x];
            else return a[y];
        }
        if(a[x]>a[y]) p=x;
        else p=y;

        max(p,y+1);
    }
    else{
        return a[x];
    }
}

void solve(void){
    scanf("%d",&n);
    for(int j=0;j<n;j++)
        scanf("%d",&a[j]);

    printf("%d\n",max(0,1));
}

int main(){
    int t=1;
    //scanf("%d",&t);       // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}