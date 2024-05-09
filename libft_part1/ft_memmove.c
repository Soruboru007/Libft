#include <stdio.h>
#include <string.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (d > s)
		while (len-- > i)
			d[len] = s[len];
	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	return (dst);
}
int main() {
    char str[] = "HelloWorld!";
    char str1[] = "HelloWorld!";
    memmove(str + 3, str, 5);
    ft_memmove(str1 + 3, str, 5); 
    printf("%s\n", str);  
     printf("%s\n", str1);
    return 0;
}
