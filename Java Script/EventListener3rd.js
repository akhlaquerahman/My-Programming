let btn=document.querySelector("button")


for(i of btn){
i.removeEventListener("click", say )
i.removeEventListener("click", sayy )
}

function say(){
    console.log("Hello, world!");
}

function sayy(){
    console.log(" world!");
}