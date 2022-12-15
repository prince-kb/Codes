let bg=document.getElementById("bg")
let clic=document.getElementById("clic")
const colors=["#e86600","#0008C1", "#810CA8","#F8F988","#E5B8F4","#FB2576", "#2D033B","#FFEBAD","#0014FF", "#F2F7A1", "lightblue", "#540375"]
bg.style.background = colors[2]
clic.addEventListener('click', toggle);
let i=0;
let previ=i;
let stop;
// setInterval(cb , 4000);

function cb(){
    i=Math.floor(Math.random()*colors.length);
    if(i==previ){
        cb();
    }
    else {
    bg.style.background = colors[i];
    previ=i;
}

}

function toggle(){
    if(clic.innerText == "START"){
       stop = setInterval(cb , 300);
       clic.innerText = "STOP";
    }else{
        clearInterval(stop);
        clic.innerText = "START";
    }
}
