char	ft_is_alphanum(char c)
{
	char result;

	result = 0;
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		result = 1;
	if (c >= '0' || c <= '9')
		result = 1;
	return (result);
}

void	ft_to_upper(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

void	ft_to_lower(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}

char	*ft_strcapitalize(char *str)
{
	unsigned int i;
	char is_first_letter;

	i = 0;
	while (*(str + i) != 0)
	{
		if (i == 0 || (i >= 1 && ft_is_alphanum(*(str + i - 1)) != 1))
			is_first_letter = 1;
		if (ft_is_alphanum(*(str + i)) == 1)
		{
			if (is_first_letter == 1)
			{
				ft_to_upper(str + i);
				is_first_letter = 0;
			}
			else
			{
				ft_to_lower(str + i);
			}
		}
	i++;
	}
	return (str);
}
