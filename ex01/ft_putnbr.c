void	ft_putchar(char c);

void	ft_load_array(char *arr, int nb, char *digit_slot)
{
	if (nb < 0)
	{
		arr[*digit_slot] = nb % 10;
		arr[*digit_slot] = arr[*digit_slot] * (-1) + 48;
		nb = nb / 10;
		nb = -nb;
		*digit_slot -= 1;
	}
	while (nb > 9)
	{
		arr[*digit_slot] = nb % 10 + 48;
		nb = nb / 10;
		*digit_slot -= 1;
	}
	arr[*digit_slot] = nb + 48;
}

void	ft_putnbr(int nb)
{
	char nbr[10];
	char digit_slot;

	digit_slot = 9;
	ft_load_array(nbr, nb, &digit_slot);
	if (nb < 0)
	{
		ft_putchar('-');
	}
	while (digit_slot <= 9)
	{
		ft_putchar(nbr[digit_slot]);
		digit_slot++;
	}
}
