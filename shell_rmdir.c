int shell_rmdir(char **arguments)
{
    if (arguments[1] == NULL)
    {
        printf("Shell : expected argument after \"rmdir\"\n");
    }

    else
    {

        if (rmdir(arguments[1]) != 0)
        {
            printf("Shell: '%s' -  No such directory exists\n", arguments[1]);
        }
    }

    return 1;
}