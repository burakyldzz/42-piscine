0)
int	main(void)
{
	int	a;
	int	*nbr;

	nbr = &a;
	ft_ft(nbr);
	printf("%d", a);
}

1)
int	main()
{
	int a;
	int *nbr8;
	int **nbr7;
	int ***nbr6;
	int ****nbr5;
	int *****nbr4;
	int ******nbr3;
	int *******nbr2;
	int ********nbr1;
	int *********nbr;

	nbr8 = &a;
	nbr7 = &nbr8;
	nbr6 = &nbr7;
	nbr5 = &nbr6;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	nbr1 = &nbr2;
	nbr = &nbr1;

	ft_ultimate_ft(nbr);
	printf("\n %d", a);
}

2)
int	main(void)
{
	int	f;
	int	s;

	f = 5;
	s = 10;
	printf("degismeden once a:%d b:%d", f, s);
	ft_swap(&f, &s);
}

3)
int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 12;
	b = 5;
	ft_div_mod(a, b, &c, &d);
}

4)
int	main(void)
{
	int	s1;
	int	s2;

	s1 = 15;
	s2 = 2;
	printf("degismeden once s1:%d, s2:%d ", s1, s2);
	ft_ultimate_div_mod(&s1, &s2);
}

5)
int main()
{
	char *c = "hello";
	ft_putstr(c);
}

6)
int	main(void)
{
	char	*c;

	c = "Hello";
	printf("%d", ft_strlen(c));
}

7)
int	main(void)
{
	int tab[] = {1,2,3,4,5};
	int size;

	ft_rev_int_tab(tab, 5);
	printf("%d, %d, %d, %d, %d",tab[0], tab[1], tab[2], tab[3], tab[4]);
}

8)
int	main()
{
	int tab[6] = {7, 6, 3, 4, 2, 5};
	int size = 6;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}

