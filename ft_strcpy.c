/*WARNING: This function isn't fully tested.*/

char    *ft_strcpy(char *dst, const char *src)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len++]);
	while (src_len != 0)
	{
		dst[i] = src[i];
		i++;
		src_len--;
	}
	return (dst);
}
