#include <stdio.h>

int main()
{
    int T, N, M, K, total;
    scanf("%d", &T);
    while (T--)
    {
        total = 0;
        scanf("%d%d%d", &N, &M, &K);

        if (N % K == 0)
            total += N / K;

        else
            total += (N / K) + 1;

        if (M % K == 0)
            total += M / K;

        else
        {
            total += (M / K) + 1;
        }

        printf("%d\n", total);
    }
    return 0;
}