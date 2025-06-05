# ifndef MINISHELL_H
# define MINISHELL_H

# include "../Libft/libft.h"
# include <signal.h>
# include <stdbool.h>

void init_shell(char **envp);
int parse_and_execute(char *input);
void cleanup_shell(void);

# endif
