#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
int main() {
    int n,k;
    int sum_0 = 0;
    int sum_1 = 0;
    int L_1[101];
    int L, T;
    int i,j;
    int aux;
    int cnt = 0;

    scanf("%d %d", &n, &k);
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &L, &T);
        if(T==0)
        {
            sum_0 = sum_0 + L;
        }
        else
        {
            L_1[cnt] = L;
            cnt++;
        }
    }
    for(i=0; i<cnt; i++)
    {
        for(j=i; j<cnt; j++)
        {
            if(L_1[i] < L_1[j])
            {
                aux = L_1[i];
                L_1[i] = L_1[j];
                L_1[j] = aux;
            }
        }
    }

    for(i=0; i<cnt; i++)
    {
        if(k>0)
        {
            sum_1 = sum_1 + L_1[i];
            k--;
        }
        else
        {
            sum_1 = sum_1 - L_1[i];
        }
    }

    printf("%d\n", sum_0 + sum_1);
    return 0;
}