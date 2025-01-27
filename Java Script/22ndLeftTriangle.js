

let row = 6;
let colm = 6;


let m = 1
for (let i = row; i >= 1; i--) {
    let a = ""
    for (let j = 1; j <= i-1; j++) {
        a+=" "
    }

    for (let k = 1; k <= m; k++) {
        a += "*";
      }

    console.log(a)
    m++
}





