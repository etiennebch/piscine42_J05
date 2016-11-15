char	*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int dest_len;
	
	i = 0;
	while (*(dest + i) != 0)
	{
		i++;
	}
	dest_len = i;
	i = 0;
	while (*(src + i) != 0)
	{
		*(dest + dest_len + i) = *(src + i);
		i++;
	}
	*(dest + dest_len + i) = 0;
	return (dest);
}
