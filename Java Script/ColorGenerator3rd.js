let btn=document.querySelector("button")        // select button

btn.addEventListener("click", function(){          // set event like "click"
    let h=document.querySelector("h3");            // select h3
    let random = getrandom();                      // store function logic in one variable
    h.innerText=random;                            // change h3 value time to time which show

    let d = document.querySelector("div")          // select div  
    d.style.backgroundColor = getrandom();         //  generate random color of div

    console.log("Color updated")                    // print message on console
})

function getrandom(){
    let red = Math.floor(Math.random() *255)        // generate random color vlue
    let green = Math.floor(Math.random() *255)      // generate random color vlue
    let blue = Math.floor(Math.random() *255)       // generate random color vlue

    let color = `rgb(${red},${green},${blue})`;
    return color;
}