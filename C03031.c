#include <stdio.h>
#include <math.h>

#define ll long long

int gcd(int a, int b){
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        printf("%s\n", (gcd(a, b) == gcd(c, d)) ? "YES" : "NO");
    }
    return 0;
}