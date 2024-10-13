# Parenthesis Parsing Validator

This project is a simple C++ program that checks for valid parenthesis sequences in mathematical expressions. It reads expressions from a text file (`Equations.txt`) and validates whether they contain correctly matched parentheses, brackets, and braces.

## Features
- Reads multiple equations from a text file (`Equations.txt`).
- Validates the balance of parentheses `()`, square brackets `[]`, and curly braces `{}`.
- Displays the result for each equation, indicating whether it's valid or invalid.
- Handles errors and outputs the exact line number where the error occurred.

## How It Works
1. The program reads from a file named `Name.txt`, which can contain any introductory information you want to display.
2. It then prompts the user to choose an option:
    - Option 1: Check the validity of expressions from the file `Equations.txt`.
    - Option 2: Exit the program.
3. For Option 1:
    - The program reads each equation from the `Equations.txt` file.
    - It checks if parentheses, square brackets, and curly braces are correctly balanced.
    - Displays whether each equation is valid or reports an error with the line number.

## Getting Started

### Prerequisites
To compile and run this C++ program, you will need:
- A C++ compiler (GCC, Clang, or MSVC)
- Standard C++ library

### Usage
1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/parenthesis-parsing-validator.git
