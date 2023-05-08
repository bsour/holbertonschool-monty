# Monty Interpreter

This project is an interpreter for Monty ByteCodes files, written in C. The Monty language is a scripting language that is first compiled into Monty bytecodes, relying on a unique stack with specific instructions to manipulate it.

## Getting Started

To use this Monty interpreter, follow these steps:

### Prerequisites

- A Unix-like operating system
- GCC Compiler

### Compilation

To compile the Monty interpreter, navigate to the project directory and run the following command:

```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

This will generate an executable named `monty`.

### Running the Interpreter

To run the Monty interpreter, use the following command:

```
$ ./monty <file>

```

Where `<file>` is the path to the file containing Monty byte code.

### Monty Bytecode Files

- Monty bytecode files usually have the `.m` extension.
- Files can contain one instruction per line.
- There can be any number of spaces before or after the opcode and its argument.
- Blank lines and any additional text after the opcode or its required argument are not taken into account.

## Implemented Opcodes

The Monty interpreter supports the following opcodes:

- `push`: Push an integer onto the stack.
- `pall`: Print all values on the stack.
- `pint`: Print the value at the top of the stack.
- `pop`: Remove the top element of the stack.
- `swap`: Swap the top two elements of the stack.
- `add`: Add the top two elements of the stack.
- `nop`: Do nothing.

Please refer to the Monty language specification for more details on each opcode.

## Error Handling

The interpreter handles errors according to the following rules:

- If no file or more than one argument is provided, the program will display the error message `USAGE: monty file` and exit with the status `EXIT_FAILURE`.
- If the file cannot be opened, the program will display the error message `Error: Can't open file <file>` and exit with the status `EXIT_FAILURE`.
- If the file contains an invalid instruction, the program will display the error message `L<line_number>: unknown instruction <opcode>` and exit with the status `EXIT_FAILURE`.

## Contributing

We encourage collaboration on a set of tests to ensure the quality of this project. Please feel free to submit pull requests with additional test cases or improvements to the interpreter.

## License

This project is released under the [MIT License](LICENSE).
