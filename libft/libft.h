/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:39:42 by pgrellie          #+#    #+#             */
/*   Updated: 2023/11/24 16:23:44 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*****************************************************/
/* E1 :     #ifndef MONFICHIER_H                     */
/*          # define MONFICHIER_H                    */
/*          INCLUDE THE NEEDED LIBRARIES             */
/*          #define BUFF_SIZE XXX                    */
/*                                                   */
/*****************************************************/
#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <stdarg.h>

/*****************************************************/
/* E2 :          STRUCT DECLARATIONS                 */
/*          typedef struct      Mastructure          */
/*          {                                        */
/*              void/int/char/etc...(*)NAME;         */
/*              ^^  ^^  ^^  ^^  ^^  ^^  ^^ ;         */
/*            //struct Mastructure  (*)next;         */
/*          } Mastructure;                           */
/*         (      SI           BESOIN      )         */
/*****************************************************/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;

/*****************************************************/
/* E3 :           FUNCTION PROTOTYPE                 */
/*                                                   */
/*****************************************************/

int		ft_isascii(int x);
int		ft_isprint(int x);
int		ft_isalpha(int x);
int		ft_isdigit(int x);
int		ft_isalnum(int x);
int		ft_tolower(int x);
int		ft_toupper(int x);

int		ft_atoi(const char *str);
char	*ft_itoa(int nbr);

void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memchr(const void *str, int chr, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strdup(const char *str);
void	*ft_calloc(size_t count, size_t size);

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *str, int chr);
char	*ft_strrchr(const char *str, int chr);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(const char *str, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(const char *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	ft_putchar_fd(char x, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *blst);
t_list	*ft_lstlast(t_list *blst);
void	ft_lstadd_back(t_list **flst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif //Fin des gardes d'en-tete
