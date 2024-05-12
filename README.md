# Simple Shell Project

The Simple Shell project is an implementation of a basic command-line interpreter in the C programming language. It aims to provide users with a command-line interface for interacting with the system by executing commands. The shell supports fundamental functionalities such as executing commands, handling environment variables, and managing paths. It offers users a simplified interface for interacting with the operating system, serving as a starting point for learning shell programming concepts and further development.This project serves as an excellent educational resource for understanding shell principles and their implementation.

<img src="https://cdn.educba.com/academy/wp-content/uploads/2020/01/Bash-Shell-in-Linux-2.jpg" width="500" height="400">

## Features

- **Command Execution**: Users can execute a wide range of commands supported by the underlying operating system directly from the shell.
- **Environment Variables**: The shell supports environment variables and allows users to print them using the `env` command.
- **Path Resolution**: Simplifying user experience, it efficiently locates executable files specified by users within the PATH environment variable.

## File Structure

The project is organized into several C source files:

- **`main.c`**: Contains the main functionality and implementation of the shell.
- **`prompt_string.c`**: Provides functions related to printing the prompt string.
- **`print_env.c`**: Contains functions for printing environment variables.
- **`init_path.c`**: Functions for initializing and freeing the PATH variable.
- **`getcmd.c`**: Handles user input and parsing commands.
- **`find_file.c`**: Implements finding executable files in the PATH.
- **`execute_cmd.c`**: Functions for executing commands.
- **`_strtok.c`**: Custom implementation of the `strtok` function for tokenizing strings.

## Usage

To install and run the Simple Shell, follow these steps:

1. Clone the repository: `git clone https://github.com/kamurano/holbertonschool-simple_shell.git`
2. Navigate to the project directory: `cd holbertonschool-simple_shell`
3. Compile the source code: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o simpleShell`
4. Run the shell: `./simpleShell`

Once the shell is running, you can type commands just like in a regular terminal.

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.
## Authors

- Kamal Abdullayev
- Sohrab Yusubov
