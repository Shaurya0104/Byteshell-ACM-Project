int shell_launch(char **arguments)
{
    pid_t pid;
    int status;
    pid = fork();
    if (pid == 0)
    {
        if (execvp(arguments[0], arguments) == -1)
        {
            printf("%s: command not found\n", arguments[0]);
        }
        exit(1);
        // return 1;
    }
    else
    {
        do
        {
            waitpid(pid, &status, WUNTRACED);
        } while (!WIFEXITED(status) && !WIFSIGNALED(status));
    }
    return 1;
}