// let btn=document.querySelector(".cl");
// console.dir(btn)

// btn.onclick = function (){
//     console.log('this is clicked')
// }


// btn.onclick = function (){
//     alert("button was")
// }


let btns = document.querySelectorAll("button");


for(btn of btns){
    btn.onclick = hi;
}

function hi(){
    console.log("button was clicked")
}

