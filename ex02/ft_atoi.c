int	ft_count_digit(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != 0)
	{
		i++;
	}
	return (i);
}

int	ft_pow_of_10(int n)
{
	int result;

	result = 0;
	if (n == 0)
		result = 1;
	if (n > 0 && n < 10)
	{
		result = 1;
		while (n > 0)
		{
			result = result * 10;
			n--;
		}
	}
	return (result);
}

int	ft_add_if_not_overflow(int value, int add)
{
	const int min_int = -2147483648;
	const int max_int = 2147483647;
	int result;

	result = 0;
	if (value < 0 && add < 0 && min_int - value > add)
	{
		result = min_int;
	}
	else if (value > 0 && add > 0 && max_int - value < add)
	{	
		result = max_int;
	}
	else
	{
		result = value + add;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int i;
	char sign;
	int value;
	int digit_count;
	int add;

	i = 0;
	value = 0;
	sign = *(str + i) == '-' ? -1 : 1;
	if (*(str + i) == '-' || *(str + i) == '+')
		i++;
	digit_count = ft_count_digit(str + i);
	while (*(str + i) != 0)
	{	
		add = (*(str + i) - 48) * ft_pow_of_10(digit_count - 1) * sign;
		value = ft_add_if_not_overflow(value, add);
		i++;
		digit_count--;
	}
	return (value);
}
