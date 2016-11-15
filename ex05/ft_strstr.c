#include <unistd.h>

unsigned int	ft_str_len(char *str)
{
	unsigned int i;

	while (*(str + i) != 0)
	{
		i++;
	}
	return (i);
}

char		*ft_match_sub(char *str, char *to_match, unsigned int sub_len)
{
	unsigned int 	j;
	unsigned int 	found_char_cnt;
	char 		*result;

	result = 0;
	j = 0;
	while (j < sub_len)
	{
		if(*(str + j) == *(to_match + j))
			found_char_cnt++;
		j++;
	}
	if (found_char_cnt == sub_len)
		result = str;
	return (result);
}

char		*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int sub_len;
	unsigned int main_len;
	char *start_sub;
	
	i = 0;
	start_sub = 0;
	main_len = ft_str_len(str);
	sub_len = ft_str_len(to_find);
	while (*(str + i) != 0 && main_len >= sub_len)
	{
		if (*(str + i) == *(to_find))
			start_sub = ft_match_sub(str + i, to_find, sub_len);
		i++;
	}
	return (start_sub);
}
