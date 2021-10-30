#include<stdio.h>
int x, n, ans;
int main() 
{
    scanf_s("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf_s("%d", &x), ans ^= x;
    printf("%d\n", ans);
}