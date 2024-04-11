int recursionSum(int n)
{
    if (n <= 0)
        return n;
    return (n + recursionSum(n - 1));
}