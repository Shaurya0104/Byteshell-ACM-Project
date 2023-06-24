int shell_mkdir(char **arguments)
{
    if (arguments[1] == NULL)
    {
        printf("Shell : expected argument after \"mkdir\"\n");
    }
    else
    {
        int checker = mkdir(arguments[1], 0777);
        if (checker != 0)
        {
            printf("Shell : The directory is not created\n");
        }
    }
    return 1;
}