# Basic Shell by Linux Commands on xv6

## Overview

This project implements a basic shell on the **xv6 operating system**, a simple Unix-like teaching OS based on the Sixth Edition Unix (V6). The shell provides a command-line interface that interprets and executes fundamental Linux commands. 

The project demonstrates essential OS and shell concepts such as input processing, command parsing, process management (fork and wait), piping, and system calls.

---

## Features

- Interactive shell with a custom prompt `>`  
- Reads and executes commands line-by-line  
- Supports built-in commands:  
  - `clear` — clears the screen  
  - `cd <dir>` — change directory  
  - `pwd` — print working directory  
  - `mkdir <dir>` — create a directory  
  - `rm <dir>` — remove directory and contents  
  - `ls` — list files in the current directory  
  - `history` — display file history  
  - `head <file>` — print first 10 lines of a file  
  - `tail <file>` — print last 10 lines of a file  
  - `editor <file>` — edit a file  
  - `shutdown` — exit the shell and shutdown xv6  

---

## Implementation Details

### Shell Design

- **Input Processing:** Supports interactive mode to read user input continuously.  
- **Parsing:** Tokenizes commands and arguments, identifies built-in commands.  
- **Execution:** Uses `fork()` and `wait()` to run commands as child processes.  
- **Piping:** Implements kernel pipes for inter-process communication.

### Modifications to xv6

- Custom shell code (`shellnew.c`) replaces the default prompt with `>`.  
- Built-in commands implemented as separate `.c` files added to the `xv6-public` directory.  
- Commands registered in the `Makefile` under `UPROGS` for compilation.  
- Shutdown implemented as a system call with required edits to `syscall.h`, `syscall.c`, `usys.S`, and `user.h`.  
- Build and run with:  
make clean
make
make qemu-nox


---

## Usage Examples

| Command         | Description                       |
|-----------------|---------------------------------|
| `>`             | Shell prompt                    |
| `mkdir test`    | Creates a directory named "test"|
| `cd test`       | Changes to directory "test"      |
| `pwd`           | Prints the current directory     |
| `ls`            | Lists files in current directory |
| `rm test`       | Removes directory "test"         |
| `head file.txt` | Prints first 10 lines of file    |
| `tail file.txt` | Prints last 10 lines of file     |
| `editor file`   | Edits the specified file         |
| `history`       | Displays file history            |
| `clear`         | Clears the terminal screen       |
| `shutdown`      | Exits shell and shuts down xv6   |

---

## Tools & Technologies

- C programming language  
- xv6 Operating System  
- GNU Make (`make`, `Makefile`)  
- QEMU Emulator  
- Unix system calls (`fork()`, `wait()`, `exec()`, `pipe()`)

---

## Conclusion

This project demonstrates how a shell works as a user interface for the operating system. It highlights process management, command parsing, and system call implementation in xv6. The custom shell supports essential Linux commands, enabling users to interact with the filesystem and manage processes efficiently.

---

## References

1. WordPress — Xv6  
2. Github - AdityaKshettri/Bash_Shell_using_Xv6  
3. What is a Makefile — GNU Manual  
4. Github - SurajSubramanian/XV6-with-an-improvised-shell  
5. Xv6 — GeeksforGeeks  
6. Wikipedia — Xv6  
7. Wikipedia — QEMU  
8. Tutorials Point — What is a shell  
9. SearchDataCenter — Shell Script

---

## How to Run

```bash
# Clean previous builds
make clean

# Compile xv6 and shell commands
make

# Run xv6 in QEMU without graphical window
make qemu-nox
