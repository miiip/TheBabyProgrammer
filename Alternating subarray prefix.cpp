//
// Created by Mihail Plesa on 19.09.2022.
//

#include <stdio.h>
#include <stdlib.h>

int sign(int x, int y) {
    if((x < 0 && y > 0) || (x > 0 && y < 0)) {
        return 1;
    }
    return 0;
}

int main() {
    int t;
    int n, a[100001], i;
    int dp[100001];
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        for(i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        dp[n-1] = 1;
        for(i=(n-2); i>=0; i--) {
            if(sign(a[i], a[i+1]) == 1) {
                dp[i] = dp[i+1] + 1;
            }
            else {
                dp[i] = 1;
            }
        }
        for(i=0; i<n; i++) {
            printf("%d ", dp[i]);
        }
        printf("\n");
    }
}