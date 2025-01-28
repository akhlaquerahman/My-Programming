
let row = 6;


let m = row
for (let i = 1; i <= row; i++) {
    let a = ""
    for (let j = 1; j <= i; j++) {
        a+=" "
    }

    for (let k = 1; k <= m; k++) {
        if (i === 1 || k === 1 || k === m) {
            a += "*"; // Print a star at the edges
          } else {
            a += " "; // Add a space for the hollow part
          }
      }

    console.log(a)
    m--
}