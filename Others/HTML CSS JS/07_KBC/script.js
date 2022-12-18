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
const next=document.getElementById("next");
let i=0;
function display1(){
    if(1){
        question.innerHTML=q[i];{
            let j=0;
        opt1.innerHTML=opt[(i*4) + j++];
        opt2.innerHTML=opt[(i*4) + j++];
        opt3.innerHTML=opt[(i*4) + j++];
        opt4.innerHTML=opt[(i*4) + j++];
        if(j==5){
            j=0;
        }
        }
    }
}
function display(){
            question.innerHTML=q[i];
            {
                let j=0;
            opt1.innerHTML=opt[(i*4) + j++];
            opt2.innerHTML=opt[(i*4) + j++];
            opt3.innerHTML=opt[(i*4) + j++];
            opt4.innerHTML=opt[(i*4) + j++];
            if(j==5){
                j=0;
            }
        }}

function choose(){
    
}
