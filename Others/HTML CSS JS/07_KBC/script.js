{/* <div id="all">
    <div id="container">
        <h2 id="question"></h2>
        <button id="opt1" class="b"></button>
        <button id="opt2" class="b"></button>
        <button id="opt3" class="b"></button>
        <button id="opt4" class="b"></button>
        <h2 id="money">Lorem ipsum dolor sit.</h2>
        <button id="id">Next</button>
    </div>
    <p id="developer" >Developed by  <strong> Prince K</strong></p>
</div> */}

let q=["The International Literacy Day is observed on: ","The language of Lakshadweep a Union Territory of India, is: ","In which group of places the Kumbha Mela is held every twelve years?","Bahubali festival is related to: " ,"Which day is observed as the World Standards  Day?"];
let opt=["Sep 8","Nov 28","Jan 5","May 11","Tamil","Hindi","Malayalam","Telugu","Ujjain. Purl; Prayag. Haridwar","Prayag. Haridwar, Ujjain,. Nasik","Rameshwaram. Purl, Badrinath. Dwarika","Chittakoot, Ujjain, Prayag,'Haridwar","Islam","Hinduism","Buddhism","Jainism","June 26","Oct 14","Nov 15","Dec 2"];
let ans=["Sep 8","Malayalam","Rameshwaram. Purl, Badrinath. Dwarika","Jainism","Oct 14"];
const question=document.getElementById("question");
const opt1=document.getElementById("opt1");
const opt2=document.getElementById("opt2");
const opt3=document.getElementById("opt3");
const opt4=document.getElementById("opt4");
const money=document.getElementById("money");
const next=document.getElementById("id");
next.style.visibility="visible";
next.addEventListener("click",display);
let i=-1;
function won(x){
    opt1.style.diplay="none";
    opt2.style.diplay="none";
    opt3.style.diplay="none";
    opt4.style.diplay="none";
    x.style.display="hidden";
}

function lose(x){
    let y=ans[i];
    opt1.style.diplay="none";
    opt2.style.diplay="none";
    opt3.style.diplay="none";
    opt4.style.diplay="none";
    x.style.display="hidden";
    if(opt1.innerHTML==y){
        opt1.style.display="hidden";
        opt1.style.background="blue";
    }
    if(opt2.innerHTML==y){
        opt1.style.display="hidden";
        opt2.style.background="blue";
    }
    if(opt3.innerHTML==y){
        opt1.style.display="hidden";
        opt3.style.background="blue";
    }
    if(opt4.innerHTML==y){
        opt1.style.display="hidden";
        opt4.style.background="blue";
    }
    x.style.background="red";

}
function blink(x){
    let a=setInterval(() => {
        let p=0;
        if(x.style.background=="red"){
            p++;
            x.style.background=="green"
        }
        else{
            x.style.background=="red";
            p++;
        }
        if(p==7){
            clearInterval(a);
        }
    }, 1000);
}
function display(){
    i++;
    if(i==5){
        i=0;
    }
    let j=0;
    question.innerHTML=q[i];
    opt1.innerHTML=opt[i*4 + j++];
    opt2.innerHTML=opt[i*4 + j++];
    opt3.innerHTML=opt[i*4 + j++];
    opt4.innerHTML=opt[i*4 + j++];
    if(j==5)
    j=0;
    choose();
}

function choose(){
    opt1.addEventListener("click",function(){
        if(opt1.innerHTML==ans[i]){
            next.style.visibility="visible";
            opt1.style.background="green";
            opt2.style.background="red"
            opt3.style.background="red"
            opt4.style.background="red"
        }
    });
    opt2.addEventListener("click",function(){
        if(opt2.innerHTML==ans[i]){
            next.style.visibility="visible";
            opt2.style.background="green";
            opt1.style.background="red"
            opt3.style.background="red"
            opt4.style.background="red"
        }
    });
    opt3.addEventListener("click",function(){
        if(opt3.innerHTML==ans[i]){
            next.style.visibility="visible";
            opt3.style.background="green";
            opt1.style.background="red"
            opt2.style.background="red"
            opt4.style.background="red"
        }
    });
    opt4.addEventListener("click",function(){
        if(opt4.innerHTML==ans[i]){
            next.style.visibility="visible";
            opt4.style.background="green";
            opt1.style.background="red"
            opt2.style.background="red"
            opt3.style.background="red"
        }
    });
}