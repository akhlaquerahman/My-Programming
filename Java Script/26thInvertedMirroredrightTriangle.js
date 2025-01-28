
let row = 6;


let m = row
for (let i = 1; i <= row; i++) {
    let a = ""
    for (let j = 1; j <= i; j++) {
        a+=" "
    }

    for (let k = 1; k <= m; k++) {
        a += "*";
      }

    console.log(a)
    m--
}