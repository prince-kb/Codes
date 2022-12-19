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
let rupee=["0","1 lakh","2 lakh","5 lakh","10 lakh","25 lakh","50 lakh"];
const question=document.getElementById("question");
const opt1=document.getElementById("opt1");
const opt2=document.getElementById("opt2");
const opt3=document.getElementById("opt3");
const opt4=document.getElementById("opt4");
const money=document.getElementById("money");
const next=document.getElementById("id");
const all=document.getElementById("all");
const b=document.getElementsByClassName("b");
next.style.visibility="visible";
money.style.visibility="hidden";
next.addEventListener("click",display);
let i=-1;
let points=0;
// function won(x){
//     opt1.style.diplay="none";
//     opt2.style.diplay="none";
//     opt3.style.diplay="none";
//     opt4.style.diplay="none";
//     x.style.display="hidden";
// }

// function lose(x){
//     let y=ans[i];
//     opt1.style.diplay="none";
//     opt2.style.diplay="none";
//     opt3.style.diplay="none";
//     opt4.style.diplay="none";
//     x.style.display="hidden";
//     if(opt1.innerHTML==y){
//         opt1.style.display="hidden";
//         opt1.style.background="blue";
//     }
//     if(opt2.innerHTML==y){
//         opt1.style.display="hidden";
//         opt2.style.background="blue";
//     }
//     if(opt3.innerHTML==y){
//         opt1.style.display="hidden";
//         opt3.style.background="blue";
//     }
//     if(opt4.innerHTML==y){
//         opt1.style.display="hidden";
//         opt4.style.background="blue";
//     }
//     x.style.background="red";

// }
// function blink(x){
//     let a=setInterval(() => {
//         let p=0;
//         if(x.style.background=="red"){
//             p++;
//             x.style.background=="green"
//         }
//         else{
//             x.style.background=="red";
//             p++;
//         }
//         if(p==7){
//             clearInterval(a);
//         }
//     }, 1000);
// }
function display(){
    opt1.style.background="rgba(243, 238, 160, 0.593)";
    opt2.style.background="rgba(243, 238, 160, 0.593)";
    opt3.style.background="rgba(243, 238, 160, 0.593)";
    opt4.style.background="rgba(243, 238, 160, 0.593)";
    i++;
    if(i>=q.length +1){
        next.style.visibility="hidden";
        opt1.style.visibility="hidden";
        opt2.style.visibility="hidden";
        opt3.style.visibility="hidden";
        opt4.style.visibility="hidden";
        money.style.visibility="visible";
        money.innerHTML="GAME OVER  You won "+rupee[i];
        
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
    next.style.visibility="hidden";
    opt1.addEventListener("click",function(){
        if(opt1.innerHTML==ans[i]){
            
            opt1.style.background="green";
            opt2.style.background="red";
            opt3.style.background="red";
            opt4.style.background="red";
            next.style.visibility="visible";
            points++;
        }
        else {
            next.style.visibility="hidden";
            opt1.style.visibility="hidden";
            opt2.style.visibility="hidden";
            opt3.style.visibility="hidden";
            opt4.style.visibility="hidden";
            money.style.visibility="visible";
            money.innerHTML="GAME OVER  You won "+rupee[i];
            
        }
    });
    opt2.addEventListener("click",function(){
        if(opt2.innerHTML==ans[i]){
            
            opt2.style.background="green";
            opt1.style.background="red";
            opt3.style.background="red";
            opt4.style.background="red";
            next.style.visibility="visible";
            points++;
        }
        else {
            next.style.visibility="hidden";
            opt1.style.visibility="hidden";
            opt2.style.visibility="hidden";
            opt3.style.visibility="hidden";
            opt4.style.visibility="hidden";
            money.style.visibility="visible";
            money.innerHTML="GAME OVER  You won "+rupee[i];
            
        }
    });
    opt3.addEventListener("click",function(){
        if(opt3.innerHTML==ans[i]){
            
            opt3.style.background="green";
            opt1.style.background="red";
            opt2.style.background="red";
            opt4.style.background="red";
            next.style.visibility="visible";
            points++;
        }
        else {
            next.style.visibility="hidden";
            opt1.style.visibility="hidden";
            opt2.style.visibility="hidden";
            opt3.style.visibility="hidden";
            opt4.style.visibility="hidden";
            money.style.visibility="visible";
            money.innerHTML="GAME OVER  You won "+rupee[i];
            
        }
    });
    opt4.addEventListener("click",function(){
        if(opt4.innerHTML==ans[i]){
            
            opt4.style.background="green";
            opt1.style.background="red";
            opt2.style.background="red";
            opt3.style.background="red";
            next.style.visibility="visible";
            points++;
        }
        else {
            next.style.visibility="hidden";
            opt1.style.visibility="hidden";
            opt2.style.visibility="hidden";
            opt3.style.visibility="hidden";
            opt4.style.visibility="hidden";
            money.style.visibility="visible";
            money.innerHTML="GAME OVER  You won "+rupee[i] + "₹";
            
        }
    });
}


{
const clic=document.getElementById("clic")
const colors = ['#FF6633', '#FFB399', '#FF33FF', '#FFFF99', '#00B3E6', 
		  '#E6B333', '#3366E6', '#999966', '#99FF99', '#B34D4D',
		  '#80B300', '#809900', '#E6B3B3', '#6680B3', '#66991A', 
		  '#FF99E6', '#CCFF1A', '#FF1A66', '#E6331A', '#33FFCC',
		  '#66994D', '#B366CC', '#4D8000', '#B33300', '#CC80CC', 
		  '#66664D', '#991AFF', '#E666FF', '#4DB3FF', '#1AB399',
		  '#E666B3', '#33991A', '#CC9999', '#B3B31A', '#00E680', 
		  '#4D8066', '#809980', '#E6FF80', '#1AFF33', '#999933',
		  '#FF3380', '#CCCC00', '#66E64D', '#4D80CC', '#9900B3', 
		  '#E64D66', '#4DB380', '#FF4D4D', '#99E6E6', '#6666FF'];
all.style.background = colors[2]
clic.addEventListener('click', toggle);
let i=0;
let previ=i;
let stop;
// setInterval(cb , 4000);

let z=1;
function cb(){
    i=Math.floor(Math.random()*colors.length);
    if(i==previ){
        cb();
    }
    else {
    all.style.background = colors[i];
    previ=i;
}
}

function toggle(){
    if(z==1){
        stop = setInterval(cb , 200);
    }
    else if(z==0){
        clearInterval(stop);
    }

    if(z==0)
    z=1;
    else z=0;
    
}

}