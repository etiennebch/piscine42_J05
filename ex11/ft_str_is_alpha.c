int	ft_str_is_alpha(char *str)
{
	unsigned int i;
	int result;

	result = 1;
	i = 0;
	while (*(str + i) != 0)
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a'))
		{
			result = 0;
			break ;
		}
 		if ((str[i] < 'a' && str[i] > 'Z') || str[i] > 'z')
		{	
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
