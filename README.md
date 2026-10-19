# Matrix Inverse Calculator

A menu-driven program written in C to calculate the inverse of 2x2 and 3x3 matrices using determinants and adjugate matrices.

## Features

- Calculate the inverse of a 2x2 matrix.
- Calculate the inverse of a 3x3 matrix.
- Calculate and display the determinant.
- Display the original matrix.
- Display the adjugate matrix.
- Display the inverse matrix with two decimal places.
- Detect matrices whose determinant is zero and report that the inverse does not exist.

## Technologies Used

- C Programming Language
- GCC Compiler

## Concepts Practiced

- Functions
- Two-dimensional arrays
- Loops
- Conditional statements
- Switch statements
- User input using `scanf()`
- Matrix determinants and adjugates
- Floating-point arithmetic

## How to Compile

Make sure GCC is installed on your system.

Open a terminal in the directory containing `main.c` and run:

```bash
gcc main.c -o matrix_inverse
```

## How to Run

### Windows

```powershell
.\matrix_inverse.exe
```

### Linux

```bash
./matrix_inverse
```

## How to Use

1. Run the program.
2. Select the matrix size from the menu.
3. Enter the matrix elements row by row.
4. View the original matrix, determinant, adjugate matrix, and inverse matrix.

## Example

Consider the following 2x2 matrix:

```text
4  7
2  6
```

The determinant is:

```text
det(A) = (4 * 6) - (7 * 2)
       = 10
```

The inverse matrix is:

```text
  0.60  -0.70
 -0.20   0.40
```

## Mathematical Formula

For a square matrix A with a nonzero determinant, the inverse is calculated using:

```text
A^(-1) = adj(A) / det(A)
```

Where:

- `A^(-1)` is the inverse matrix.
- `adj(A)` is the adjugate matrix.
- `det(A)` is the determinant of the matrix.

If the determinant is zero, the matrix has no inverse.

## Limitations

- Supports only 2x2 and 3x3 matrices.
- Accepts integer matrix elements.
- Displays inverse values rounded to two decimal places.

## Future Improvements

- Add support for larger matrices.
- Add input validation.
- Support decimal matrix elements.
- Improve output formatting and error handling.

## Author
Author
Svanik M - https://github.com/svanik-m
A beginner C programming project created to practice matrix operations and fundamental programming concepts.

## License

This project is available for educational and personal learning purposes.
