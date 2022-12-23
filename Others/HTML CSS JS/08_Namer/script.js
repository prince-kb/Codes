{/* <div id="cbg1">
        <div id="cbg2">
            <div id="wrapper">
                <input type="text" placeholder="Enter the name" id="inp">
                <button id="but">SUBMIT</button>
            </div>
        </div>
    </div> */}

let cbg1=document.getElementById("cbg1");
let cbg2=document.getElementById("cbg2");
let but=document.getElementById("but");
let inp=document.getElementById("inp");
let str;
const alphabet = ["Argentina","Bangkok","Columbia","Denmark","England","Fuji","Germany","Hong-Kong","India","Jamaica","Kenya","Latevia","Malaysia","Nepal","Oman","Paris","Qatar","Rome","Singapore","Thailand","Ukraine","Vietnam","Wakanda","X-Men","Yemen","Zimbawe"];
// let body=document.getElementsByTagName("body");
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
cbg1.style.background = colors[5]
cbg2.style.background = colors[4]
document.body.style.backgroundColor = colors[8]
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
        if(i==4){
            cb();
        }
    cbg1.style.background = colors[i];
    document.body.style.backgroundColor = colors[i-1];
    previ=i;
}

}
setInterval(cb , 2000); 

but.addEventListener("click",function(){
    str=inp.value.toUpperCase();
    inp.style.display="none";
    but.style.display="none";
        let i=0
let t=setInterval(xx,500);
function xx(){
    let div=document.createElement("div");
    div.classList.add("box");
    div.setAttribute('id',`b_${i}`);
    let a=str[i].charCodeAt()-65;
    if(a>=0 && a<=25){
    let s=str[i]+'\n' +alphabet[a];
    div.innerText=s;
    cbg2.appendChild(div);
    }
    i++;
    if(i==str.length){
        clearTimeout(t);
}}});

