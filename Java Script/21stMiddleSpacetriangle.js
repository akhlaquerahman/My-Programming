

let row = 10;
let colm = 6;

for (let i = 1; i <= row; i++) {
    let a = ""
    for (let j = 1; j <= i; j++) {
        if (j === 1 || i === j || i === row) {
            a += "*"; // Print a star at the edges
          } else {
            a += " "; // Add a space for the hollow part
          }
    }
    console.log(a)
}
