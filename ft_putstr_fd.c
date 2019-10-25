void	ft_putstr_fd(char *s, int fd)
{
	if (fd >= 0)
	{
		write(fd, s, ft_strlen(s));
	}
}
