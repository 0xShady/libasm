#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

ssize_t     ft_write(int fd, char const *buf, size_t nbyte);
ssize_t     ft_read(int fd, char const *buf, size_t nbyte);
size_t	    ft_strlen(char const *str);
int         ft_strcmp(char *a, char *b);
char        *ft_strdup(char *a);
int         ft_list_size(t_list *list);

typedef struct	s_list
{
	void			*data;
	struct s_list	*next;
}				t_list;

int main()
{
	t_list	list;
	t_list	list_1;
	t_list	list_2;
	list.data = strdup("kkk");
	list.next = &list_1;
	list_1.data = strdup("aaa");
	list_1.next = &list_2;
	list_2.data = strdup("bbb");
	list_2.next = NULL;
	///////////////////////////

	int size = ft_list_size(&list);
	printf ("%d\n",size);
	char *x = ft_strdup("aaa->>");
	printf("%s\n",x);
	return 0;
}