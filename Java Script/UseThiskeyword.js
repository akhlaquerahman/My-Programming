
let a = document.querySelector("button")    

a.addEventListener("click", function() {       
    console.dir(this)                       
    this.style.backgroundColor="red"          // basicaly this is work similar object
})
    