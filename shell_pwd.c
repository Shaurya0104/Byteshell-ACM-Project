int shell_pwd(char **arguments)
{
    char *temp=malloc(100 * sizeof(char));
    getcwd(temp, 100 * sizeof(char));
    printf("%s\n", temp);
    return 1;
}