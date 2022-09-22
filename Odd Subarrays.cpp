//
// Created by Mihail Plesa on 21.09.2022.
//

#include <stdio.h>
#include <stdlib.h>
int main() {
    int t;
    int n, a[100001], dp[100001];
    int i;
    int max;

    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        for(i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        if(n == 1) {
            printf("0\n");
            continue;
        }
        dp[0] = 0;
        if(a[0] > a[1]) {
            dp[1] = 1;
        }
        else {
            dp[1] = 0;
        }
        for(i=2; i<n; i++) {
            if(a[i] < a[i-1]) {
                if(dp[i-1] > (dp[i-2] + 1)) {
                    dp[i] = dp[i-1];
                }
                else {
                    dp[i] = dp[i-2] + 1;
                }
            }
            else {
                dp[i] = dp[i-1];
            }
        }
        max = dp[0];
        for(i=1; i<n; i++) {
            if(dp[i] >max) {
               max = dp[i];
            }
        }
        printf("%d\n", max);
    }
}