
void main_loop()
{
    char **arguments;
    int status;
    while (1)
    {
        printf(">>> ");
        char *curline = NULL;
        ssize_t line_size = 0;
        getline(&curline, &line_size, stdin);
        arguments = parser(curline);
        status = com_execute(arguments);
        // printf("%d\n", status);
        add_history(arguments);
        free(curline);
        free(arguments);
        if (status == 0)
        {
            break;
        }
        // printf("che\n");

    }
}