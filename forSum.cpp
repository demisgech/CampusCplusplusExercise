int sum(int n)
{
    int sum = 0;
    if (n <= 0)
        return n;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}