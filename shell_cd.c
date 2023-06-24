int shell_cd(char **arguments)
{
    if (arguments[1] == NULL)
    {
        printf("Shell : expected argument after \"cd\"\n");
    }
    else
    {
        chdir(arguments[1]);
    }
    return 1;
}
