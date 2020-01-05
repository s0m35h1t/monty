# C - Stacks, Queues - LIFO, FIFO

### Low-level programming & Algorithm  Data structures and Algorithms



## The Monty language :

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.
## The monty program

    -   Usage: `monty file`
    -   where `file` is the path to the file containing Monty byte code
    -   If the user does not give any file or more than one argument to your program, print the error message `USAGE: monty file`, followed by a new line, and exit with the status `EXIT_FAILURE`
    -   If, for any reason, its not possible to open the file, print the error message `Error: Can't open file <file>`, followed by a new line, and exit with the status `EXIT_FAILURE`
    -   where `<file>` is the name of the file
    -   If the file contains an invalid instruction, print the error message `L<line_number>: unknown instruction <opcode>`, followed by a new line, and exit with the status `EXIT_FAILURE`
    -   where is the line number where the instruction appears.
    -   Line numbers always start at 1
    -   The monty program runs the bytecodes line by line and stop if either:
    -   it executed properly every line of the file
    -   it finds an error in the file
    -   an error occured
    -   If you cant malloc anymore, print the error message `Error: malloc failed`, followed by a new line, and exit with status `EXIT_FAILURE`.
    -   You have to use `malloc` and `free` and are not allowed to use any other function from `man malloc` (realloc, calloc, )
 ### Compilation & Output

   -   Your code will be compiled this way:
   ```
 
   $ gcc -Wall -Werror -Wextra -pedantic *.c -o monty

   ```
    -   Any output must be printed on `stdout`
    -   Any error message must be printed on `stderr`
## Project Breakdown
#### 0. push, pall
    Implement the `push` and `pall` opcodes.
#### 1. pint
    Implement the `pint` opcode.
#### 2. pop
    Implement the `pop` opcode.
#### 3. swap
    Implement the `swap` opcode.
#### 4. add
    Implement the `add` opcode.
#### 5. nop
    Implement the `nop` opcode.
#### 6. sub
    Implement the `sub` opcode.
#### 7. div
    Implement the `div` opcode.
#### 8. mul
    Implement the `mul` opcode.
#### 9. mod
    Implement the `mod` opcode.
#### 10. comments
    Every good language comes with the capability of commenting. When the first non-space character of a line is `#`, treat this line as a comment (dont do anything).
#### 11. pchar
    Implement the `pchar` opcode.
#### 12. pstr
    Implement the `pstr` opcode.
#### 13. rotl
    Implement the `rotl` opcode.
#### 14. rotr
    Implement the `rotr` opcode.
#### 15. stack, queue
    Implement the `stack` and `queue` opcodes.
#### 16. Holberton
    Write a Brainf*ck script that prints `Holberton`, followed by a new line.
     -   All your Brainf*ck files should be stored inside the `bf` sub directory
     -   You can install the `bf` interpreter to test your code: `sudo apt-get install bf`
     -   Read: [Brainf*ck](https://intranet.hbtn.io/rltoken/3YPS6XwLxjZp4qnguP1HYg "Brainf*ck")
#### 17. Add two digits
     Add two digits given by the user.
       -   Read the two digits from stdin, add them, and print the result
       -   The total of the two digits with be one digit-long (<10)
#### 18. Multiplication
    Multiply two digits given by the user.
  -   Read the two digits from stdin, multiply them, and print the result
  -   The result of the multiplication will be one digit-long (<10)
#### 19. Multiplication level up
   Multiply two digits given by the user.
## Authors
   Current implementation:
    - **[Adib Grouz](https://github.com/s0m35h1t)**

    - **[Sami Lafine](https://github.com/afinesami)**
			     
