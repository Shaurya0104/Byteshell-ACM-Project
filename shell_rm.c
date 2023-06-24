int shell_rm(char **arguments)
{
    if (arguments[1] == NULL)
    {
        printf("Shell : expected argument after \"rm\"\n");
    }
    else
    {

        if (remove(arguments[1]) != 0)
        {
            printf("Shell : '%s' - No such file exists\n", arguments[1]);
        }
    }
    return 1;
}
