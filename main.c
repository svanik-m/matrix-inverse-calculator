
#include <stdio.h>

// Function to calculate the inverse of a 3x3 matrix
void three_by_three() {

    // Variables to store the determinant
    int determinantofa;

    // Variables to store individual matrix elements
    int row11, row12, row13;
    int row21, row22, row23;
    int row31, row32, row33;

    // Variables to store matrix dimensions
    int rows, columns;
    int adjrows, adjcolumns;
    int arows, acolumns;

    // Initialize the original, adjugate, and inverse matrices
    int matrices[3][3] = {0};
    int adjofa[3][3] = {0};
    double inverseofa[3][3] = {0};

    // Get matrix elements from the user
    printf("Enter row 1 : ");
    scanf("%d%d%d", &row11, &row12, &row13);

    printf("Enter row 2 : ");
    scanf("%d%d%d", &row21, &row22, &row23);

    printf("Enter row 3 : ");
    scanf("%d%d%d", &row31, &row32, &row33);

    // Store the entered elements in the matrix
    matrices[0][0] = row11;
    matrices[0][1] = row12;
    matrices[0][2] = row13;

    matrices[1][0] = row21;
    matrices[1][1] = row22;
    matrices[1][2] = row23;

    matrices[2][0] = row31;
    matrices[2][1] = row32;
    matrices[2][2] = row33;

    // Determine matrix dimensions using sizeof
    rows = sizeof(matrices) / sizeof(matrices[0]);
    columns = sizeof(matrices[0]) / sizeof(matrices[0][0]);

    adjrows = sizeof(adjofa) / sizeof(adjofa[0]);
    adjcolumns = sizeof(adjofa[0]) / sizeof(adjofa[0][0]);

    arows = sizeof(inverseofa) / sizeof(inverseofa[0]);
    acolumns = sizeof(inverseofa[0]) / sizeof(inverseofa[0][0]);

    // Display matrix dimensions
    printf("Rows : %d\nColumns : %d\n", rows, columns);

    // Display the original matrix
    printf("\nOriginal Matrix:\n\n");

    for (int i = 0; i < rows; i++) {
        printf("|");

        for (int j = 0; j < columns; j++) {
            printf(" %3d ", matrices[i][j]);
        }

        printf("|\n");
    }

    // Calculate the determinant using cofactor expansion
    determinantofa =
        row11 * ((row22 * row33) - (row32 * row23))
        - row12 * ((row21 * row33) - (row31 * row23))
        + row13 * ((row21 * row32) - (row31 * row22));

    printf("\nDeterminant: %d\n", determinantofa);

    // An inverse exists only when the determinant is nonzero
    if (determinantofa == 0) {
        printf("\nA inverse does not exist.\n");
    }
    else {
        // Calculate the adjugate matrix
        adjofa[0][0] = row22 * row33 - row23 * row32;
        adjofa[0][1] = row13 * row32 - row12 * row33;
        adjofa[0][2] = row12 * row23 - row13 * row22;

        adjofa[1][0] = row23 * row31 - row21 * row33;
        adjofa[1][1] = row11 * row33 - row13 * row31;
        adjofa[1][2] = row13 * row21 - row11 * row23;

        adjofa[2][0] = row21 * row32 - row22 * row31;
        adjofa[2][1] = row12 * row31 - row11 * row32;
        adjofa[2][2] = row11 * row22 - row12 * row21;

        // Display the adjugate matrix
        printf("\nAdjugate Matrix:\n\n");

        for (int k = 0; k < adjrows; k++) {
            printf("|");

            for (int l = 0; l < adjcolumns; l++) {
                printf(" %3d ", adjofa[k][l]);
            }

            printf("|\n");
        }

        // Calculate the inverse: inverse = adjugate / determinant
        for (int m = 0; m < 3; m++) {
            for (int n = 0; n < 3; n++) {
                inverseofa[m][n] =
                    (double)adjofa[m][n] / determinantofa;
            }
        }

        // Display the inverse matrix
        printf("\nInverse Matrix:\n\n");

        for (int o = 0; o < rows; o++) {
            printf("|");

            for (int p = 0; p < columns; p++) {

                // Avoid displaying tiny floating-point values as -0.00
                if (inverseofa[o][p] > -0.005 &&
                    inverseofa[o][p] < 0.005) {
                    inverseofa[o][p] = 0.0;
                }

                printf(" %8.2f ", inverseofa[o][p]);
            }

            printf("  |\n");
        }
    }
}


// Function to calculate the inverse of a 2x2 matrix
void two_by_two() {

    // Declare and initialize the matrices
    int matrices[2][2] = {0};
    double adjofa[2][2] = {0};
    double inverseofa[2][2] = {0};

    int determinantofa;

    // Matrix dimensions
    int rows, columns;
    int adjrows, adjcolumns;
    int arows, acolumns;

    // Variables to store individual matrix elements
    int row11, row12;
    int row21, row22;

    // Get matrix elements from the user
    printf("Enter row 1 : ");
    scanf("%d%d", &row11, &row12);

    printf("Enter row 2 : ");
    scanf("%d%d", &row21, &row22);

    // Determine matrix dimensions
    rows = sizeof(matrices) / sizeof(matrices[0]);
    columns = sizeof(matrices[0]) / sizeof(matrices[0][0]);

    adjrows = sizeof(adjofa) / sizeof(adjofa[0]);
    adjcolumns = sizeof(adjofa[0]) / sizeof(adjofa[0][0]);

    arows = sizeof(inverseofa) / sizeof(inverseofa[0]);
    acolumns = sizeof(inverseofa[0]) / sizeof(inverseofa[0][0]);

    // Store the input values in the matrix
    matrices[0][0] = row11;
    matrices[0][1] = row12;
    matrices[1][0] = row21;
    matrices[1][1] = row22;

    // Display the original matrix
    printf("\nOriginal Matrix:\n\n");

    for (int i = 0; i < rows; i++) {
        printf("|");

        for (int j = 0; j < columns; j++) {
            printf("%4d", matrices[i][j]);
        }

        printf("  |\n");
    }

    // Calculate the determinant of the 2x2 matrix
    determinantofa = (row11 * row22) - (row12 * row21);

    printf("\nDeterminant: %d\n", determinantofa);

    // Check whether the inverse exists
    if (determinantofa == 0) {
        printf("\nA inverse does not exist.\n");
    }
    else {
        // Calculate the adjugate matrix
        adjofa[0][0] = row22;
        adjofa[0][1] = -(row12);
        adjofa[1][0] = -(row21);
        adjofa[1][1] = row11;

        // Display the adjugate matrix
        printf("\nAdjugate Matrix:\n\n");

        for (int k = 0; k < adjrows; k++) {
            printf("|");

            for (int l = 0; l < adjcolumns; l++) {
                printf("%8.2f", adjofa[k][l]);
            }

            printf("  |\n");
        }

        // Calculate the inverse matrix
        inverseofa[0][0] = (double)adjofa[0][0] / determinantofa;
        inverseofa[0][1] = (double)adjofa[0][1] / determinantofa;
        inverseofa[1][0] = (double)adjofa[1][0] / determinantofa;
        inverseofa[1][1] = (double)adjofa[1][1] / determinantofa;

        // Display the inverse matrix
        printf("\nInverse Matrix:\n\n");

        for (int m = 0; m < arows; m++) {
            printf("|");

            for (int n = 0; n < acolumns; n++) {
                printf("%8.2f", inverseofa[m][n]);
            }

            printf("  |\n");
        }
    }
}


// Main function: display the menu and process the user's choice
int main() {

    int choice;

    // Display the program menu
    printf("\n====================================\n");
    printf("       MATRIX INVERSE CALCULATOR\n");
    printf("====================================\n");
    printf("  1. Inverse of a 3x3 matrix\n");
    printf("  2. Inverse of a 2x2 matrix\n");
    printf("====================================\n");
    printf("Enter your choice: ");

    // Read the user's selection
    scanf("%d", &choice);

    // Call the selected function
    switch (choice) {
        case 1:
            three_by_three();
            break;

        case 2:
            two_by_two();
            break;

        default:
            printf("Invalid selection. Try again!\n");
            break;
    }

    return 0;
}
