let colours = ["grey", "yellow", "white", "blue", "brown"];

const btn = document.getElementById("btn");
btn.addEventListener("click", function coll(){

    for(let i = 0; i < 5; i++)
    {
        setTimeout(function() {
            btn.style.backgroundColor = colours[i];
        }, i * 1000);
    }

})