# Byteshell-ACM-Project

This is a shell program written in C that provides a command-line interface with various built-in functions. It offers a range of features such as aliases, directory navigation, file system manipulation, and command execution. This repository contains the source code for Byteshell along with a comprehensive readme to help you understand its functionality and how to use it.

## Features

Byteshell offers the following features:

1. **Alias**: Define custom aliases for frequently used commands, making your workflow more efficient.
2. **Change Directory (cd)**: Easily navigate through the file system by changing the current working directory.
3. **Echo**: Display messages on the shell with the ability to interpret escape sequences and variables.
4. **Print Working Directory (pwd)**: Display the current working directory.
5. **History**: Access and browse through a command history log.
6. **Make Directory (mkdir)**: Create new directories in the file system.
7. **Command Execution**: Execute external commands using the `execv` function.
8. The shell stores the history of commands also.

## Getting Started

To use Byteshell, follow these steps:

1. Clone the repository to your local machine using the following command:

```bash
git clone https://github.com/Shaurya0104/Byteshell-ACM-Project.git
```

2. Compile the main function in linux based environment or wsl using the following command:

```bash
gcc -o shell main.c
```

3. Run the file using the following command:

```bash
./shell.out
```



