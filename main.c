#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include "shell_alias.c"
#include "shell_cd.c"
#include "shell_echo.c"
#include "shell_exit.c"
#include "shell_help.c"
#include "shell_launch.c"
#include "shell_mkdir.c"
#include "shell_pwd.c"
#include "shell_rmdir.c"
#include "com_execute.c"
#include "parser.c"
#include "main_loop.c"
#include "shell_history.c"


int main()
{
    main_loop();
    return 0;
}