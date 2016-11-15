int	ft_str_is_lowercase(char *str)
{
	unsigned int i;
	int result;

	result = 1;
	i = 0;
	while (*(str + i) != 0)
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
