char **parser(char *curline)
{
    int buffer_size = 64;
    char **arguments = malloc(buffer_size * sizeof(char *));
    int arguments_index = 0;
    curline[strlen(curline) - 1] = ' ';
    const char x[1] = " ";
    char *temp = strtok(curline, x);
    if (temp == NULL)
    {
        arguments[0] = NULL;
    }
    while (temp != NULL)
    {
        arguments[arguments_index++] = temp;
        if (arguments_index >= buffer_size)
        {
            buffer_size += 64;
            arguments = realloc(arguments, buffer_size * sizeof(char *));
        }
        temp = strtok(NULL, x);
    }
    // printf("checker\n");
    arguments[arguments_index] = NULL;

    return arguments;
}