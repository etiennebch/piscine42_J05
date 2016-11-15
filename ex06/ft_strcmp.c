int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	char		flag;
	int		result;

	i = 0;
	flag = 0;
	result = 0;
	while (*(s1 + i) != 0 && *(s2 + i) != 0 && flag == 0)
	{
		result = *(s1 + i) - *(s2 + i);
		if (result != 0)
			flag = 1;
		i++;
	}
	if (*(s1 + i) == 0 || *(s2 + i) == 0)
		result = *(s1 + i) - *(s2 + i);
	return (result);
}
