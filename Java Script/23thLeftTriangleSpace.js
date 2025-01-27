


let row = 6;
let colm = 6;


let m = 1
for (let i = row; i >= 1; i--) {
    let a = ""
    for (let j = 1; j <= i-1; j++) {
        a+=" "
    }

    for (let k = 1; k <= m; k++) {
        if (k === 1 || k === m || m === row) {
            a += "*"; // Print a star at the edges
          } else {
            a += " "; // Add a space for the hollow part
          }
      }

    console.log(a)
    m++
}
