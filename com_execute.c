
int com_execute(char **arguments)
{
    if (arguments[0] == NULL)
    {
        // printf("hehe\n");
        return 1;
    }

    check_alias(arguments);
    if (strcasecmp(arguments[0], "alias") == 0)
    {
        // printf("%s\n",arguments[0]);
        return shell_alias(arguments);
    }
    else if (strcasecmp(arguments[0], "echo") == 0)
    {
        // printf("%s\n",arguments[0]);
        return shell_echo(arguments);
    }
    else if (strcasecmp(arguments[0], "cd") == 0)
    {
        return shell_cd(arguments);
    }
    else if (strcasecmp(arguments[0], "pwd") == 0)
    {
        // printf("%s\n",arguments[0]);
        return shell_pwd(arguments);
    }
    else if (strcasecmp(arguments[0], "mkdir") == 0)
    {
        return shell_mkdir(arguments);
    }
    else if (strcasecmp(arguments[0], "exit") == 0)
    {
        return shell_exit(arguments);
    }
    else if (strcasecmp(arguments[0], "rmdir") == 0)
    {
        return shell_rmdir(arguments);
    }
    else if (strcasecmp(arguments[0], "help")==0){
        return help();
    }
    else if (strcasecmp(arguments[0], "history")==0){
        return history();
    }

    return shell_launch(arguments);
}