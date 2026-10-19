# Matrix Inverse Calculator in C

A simple menu-driven C program that calculates the inverse of a **2×2 or 3×3 matrix** using the determinant and adjugate methods.

## Features

- Calculate the inverse of a 2×2 matrix.
- Calculate the inverse of a 3×3 matrix.
- Calculate and display the determinant.
- Display the original matrix.
- Display the adjugate matrix.
- Display the inverse matrix with decimal precision.
- Detect singular matrices whose determinant is zero and report that an inverse does not exist.
- Interactive menu for selecting the matrix size.

## Concepts Used

This project demonstrates the use of:

- Two-dimensional arrays
- Functions
- `for` loops
- Conditional statements (`if-else` and `switch`)
- User input using `scanf()`
- Matrix operations
- Determinants and adjugate matrices
- Floating-point arithmetic

## How to Compile

Make sure you have a C compiler, such as GCC, installed.

Open a terminal in the project directory and run:

```bash
gcc main.c -o matrix_inverse
```

## How to Run

**On Windows (PowerShell):**

```powershell
.\matrix_inverse.exe
```

**On Linux:**

```bash
./matrix_inverse
```

## How to Use

1. Run the program.
2. Choose `1` to calculate the inverse of a 3×3 matrix or `2` for a 2×2 matrix.
3. Enter the matrix elements row by row when prompted.
4. View the original matrix, determinant, adjugate matrix, and inverse matrix.

## Example

For a 2×2 matrix:

\[
A=\begin{bmatrix}4&7\\2&6\end{bmatrix}
\]

The determinant is:

\[
\det(A)=(4\times6)-(7\times2)=10
\]

The inverse is:

\[
A^{-1}=\begin{bmatrix}0.60&-0.70\\-0.20&0.40\end{bmatrix}
\]

## Mathematical Formula

For a square matrix \(A\) with a nonzero determinant, its inverse is:

\[
A^{-1}=\frac{\operatorname{adj}(A)}{\det(A)}
\]

If \(\det(A)=0\), the matrix is singular and its inverse does not exist.

## Limitations

- Supports only 2×2 and 3×3 matrices.
- Accepts integer matrix elements.
- Displays inverse values rounded to two decimal places.

## Future Improvements

- Add support for larger matrices.
- Validate user input.
- Use floating-point input for matrix elements.
- Improve matrix formatting and error handling.

## Author

Created as a beginner C programming project to practice functions, arrays, loops, and mathematical operations.

## License

This project is open source. You may use, modify, and improve it for learning purposes.
