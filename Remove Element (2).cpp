//
// Created by Mihail Plesa on 18.09.2022.
//

#include <stdio.h>
#include <limits.h>
int main() {
    int t;
    int n, k, i;
    int min, max, x;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &n, &k);
        min = INT_MAX;
        max = 0;
        for(i=0; i<n; i++) {
            scanf("%d", &x);
            if(x < min) {
                min = x;
            }
            if(x > max) {
                max = x;
            }
        }
        if((min + max) <= k || n==1) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}