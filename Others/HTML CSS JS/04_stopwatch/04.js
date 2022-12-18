const milli=document.getElementById("milli")
const sec=document.getElementById("sec")
const min=document.getElementById("min")
let sc;
const screen=document.getElementById("screen");
screen.style.background="black";
let ms=0,s=0,m=0;
function star(){
    sc=setInterval(function(){
        ms+=1;
        if(ms==99){
            ms=0;
            s+=1;
        }
        if(s==60){
            s=0
            m+=1;
        }
        if(m==60){
            start.innerText="START"
            ms=0,s=0,m=0;
            milli.innerText="00"
            sec.innerText="00"
            min.innerText="00"
        }
        milli.innerText=ms;
        sec.innerText=s;
        min.innerText=m;
    
    },10);
    
    }

    function sto(){
        clearInterval(sc);
    }

    const start=document.getElementById("start")
    const reset=document.getElementById("reset")
start.addEventListener("click",function(){
    if(start.innerText=="START"){
        start.innerText="STOP"
        star();
    }
    else{
        start.innerText="START"
        sto();
    }
})

reset.addEventListener("click",function(){
    start.innerText="START"
    ms=0,s=0,m=0;
    sto();
    milli.innerText="00"
    sec.innerText="00"
    min.innerText="00"
})