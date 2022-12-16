function star(){
    let milli=getElementById("milli");
    for(let i=0;i<1000;i++){
        milli.innerText=i;
    }
    
    }

let start=document.getElementById("start")
start.addEventListener("click",function(){
    if(start.innerText=="START"){
        start.innerText="STOP"
        star();
    }
    else{
        start.innerText="START"
        stop();
    }
})