# Factorial Calculator

This C program calculates the factorial of a large number using arrays to handle numbers with a large number of digits.

## Requirements

To run this program, you need a C compiler installed on your system. You can use GCC or any other C compiler that supports the C99 standard.

## Usage

1. Clone this repository to your local machine or download the `factorial.c` file.
2. Compile the program using a C compiler. For example, with GCC, you can use the following command:
    ```
    gcc factorial.c -o factorial
    ```
3. Run the compiled program:
    ```
    ./factorial
    ```
4. Enter a number when prompted.
5. The program will calculate and print the factorial of the entered number.

## How It Works

The program uses arrays to store the digits of the factorial. It iteratively multiplies the current factorial with the next number in the range until it reaches the desired number. The multiplication is implemented using arrays to handle large numbers with a significant number of digits.

## Example

If you enter `10` as the input, the program will calculate the factorial of `10` which is `3628800`, and print the result.

## Limitations

- The program has a maximum number of digits it can handle, defined by the `MAX_DIGITS` constant. You can adjust this constant in the code if you need to handle larger numbers.

## Contributing

If you find any issues with the program or have suggestions for improvements, feel free to open an issue or create a pull request.