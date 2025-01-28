let row = 6;
let colm = 6;

for (let i = row; i >= 1; i--) {
    let a = ""
    for (let j = 1; j <= i; j++) {
        a+=" *"
    }
    console.log(a)
}
