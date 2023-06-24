int shell_pwd(char **arguments)
{
    char *temp;
    if ((temp = malloc(100 * sizeof(char))) != NULL)
    {
        if ((getcwd(temp, 100 * sizeof(char))) != NULL)
        {
            printf("%s\n", temp);
        }
        else
        {
            printf("Shell: The Directory is too long\n");
        }
    }
    else
    {
        printf("Shell: Memory allocation error\n");
    }
    return 1;
}