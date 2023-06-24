int shell_echo(char **arguments)
{
    if (arguments[1] == NULL)
    {
        printf("\n");
    }
    else
    {
        int index = 1;

        while (arguments[index] != NULL)
        {
            printf("%s", arguments[index]);
            printf(" ");
            index++;
        }
        printf("\n");
    }
    return 1;
}