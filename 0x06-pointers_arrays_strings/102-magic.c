int main(void)
{
	int a[] = {0, 1, 2, 3, 4};
	int *p = a + 2;

	*(p) = 98;
	printf("a[2] = %d\n", *(p));

	return (0);
}
