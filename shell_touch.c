int shell_touch(char **arguments)
{
    if (arguments[1] == NULL)
    {
        printf("Shell : expected argument after \"touch\"\n");
    }
    else
    {
        FILE *f = fopen(arguments[1], "w");

        if (f == NULL)
        {
            printf("The File cannot be created\n");
        }
        fclose(f);
    }
    return 1;
}
