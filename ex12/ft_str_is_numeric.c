int	ft_str_is_numeric(char *str)
{
	unsigned int i;
	int result;

	result = 1;
	i = 0;
	while (*(str + i) != 0)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
