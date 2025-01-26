let row = 3;
let colm = 6;

for (let i = 1; i <= row; i++) {
    let rowString = ""; // Initialize an empty string for the row
    for (let j = 1; j <= colm; j++) {
        rowString += "*"; // Add a star to the row string
    }
    console.log(rowString); // Print the complete row
}
