#include<stdio.h>  
#include<string.h>  
int n, a[100001], b[100001], ans, x, tot;
int flag[100001];
void kp(int l, int r)    //©Лее
{
    int i = l, j = r, x, t;
    x = a[(i + j) / 2];
    while (i <= j)
    {
        while (a[i] < x) i++;
        while (a[j] > x) j--;
        if (i <= j)
        {
            t = a[i]; a[i] = a[j]; a[j] = t;
            t = b[i]; b[i] = b[j]; b[j] = t; i++; j--;
        }
    }
    if (l < j) kp(l, j);
    if (i < r) kp(i, r);
}
int main()
{
    //memset(flag, 0, sizeof(flag));
    scanf_s("%d", &n);
    for (int o = 1; o <= n; o++)
    {
        scanf_s("%d", &a[o]);
        b[o] = o;
    }
    kp(1, n);
    for (int i = 1; i <= n; i++)
    {
        //printf("for:i = %d , flag[i] = %d\t", i, flag[i]);
        if (!flag[i])
        {
            x = i; tot = 0;
            //printf("if:x = %d\t", x);
            while (!flag[x])
            {
                flag[x] = 1;
                tot++;
                x = b[x];
                //printf("while:x = %d , b[x] = %d\n", x, b[x]);
            }
            ans += tot - 1;
        }
    }
    printf("%d", ans);
    return 0;
}