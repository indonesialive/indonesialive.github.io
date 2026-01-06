void test(int n)
{
    if (n == 0)
        return;

    printf("%d ", n);
    test(n - 1);
    printf("%d ", n);
}

int main()
{
    test(3);
}
