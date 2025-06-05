#include "../includes/Minishell.h"

void init_shell(char **envp)
{
    (void)envp;
    // initialize env variables (if needed)
}

void cleanup_shell(void)
{
    // free environment list, etc.
}

int parse_and_execute(char *input)
{
    // tokenize input
    // handle built-ins
    // search executable in PATH
    // execute
    return (1); // success
}

int main(int ac, char *av[], char *envp[])
{
    char *input;

    // Input Validation
    if (ac != 1)
        return (EXIT_FAILURE);
    (void)av;

    // Initialize shell environment, history, etc.
    init_shell(envp);

    // Shell main loop
    while (1)
    {
        input = readline("minishell> ");
        if (!input)  // ctrl+D
            break;

        if (*input)
            add_history(input);

        // Tokenize input, parse it, and execute
        if (!parse_and_execute(input))
            fprintf(stderr, "Command not found or error.\n");

        free(input);
    }

    // Cleanup
    cleanup_shell();
    return (EXIT_SUCCESS);
}
