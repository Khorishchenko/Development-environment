int mx_strlen(const char *s)
{
	int i;

	i = 0;
	while (*s++ != '\0')
		i++;
	return i;
}
