# simple_shell project

A **UNIX** command shell based on bash that executes commands from the standard input or from a file.

## Usage

The shell starts with standard input connected to terminal.
To start, compile all `.c` located in this repo using this command:

```c
$ gcc -Wall -Werror -Wextra -pedantic *.c -o simh
$ ./simh
```

The shell has two modes **interactive** and **non-interactive** modes. If it is invoked with standard input not connected to a terminal, it reads and executes received commands in order.

> For Example:

```c
$ echo "echo 'testing'" | ./simh
'testing'
```

When the shell is invoked with standard input connected to a terminal, it Will use the symbol `($)` as prompt.

> For Example:

```c
$./simh
($)
```

If a command line argument is invoked, it will take that first argument as a file from which to read commands.

> For Example:

```c
$ cat text
echo 'testing'
$ ./simh text
'testing'
```
