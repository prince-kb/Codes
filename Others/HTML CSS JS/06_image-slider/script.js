{/* <div id="all">
        <div><button id="prev" class="button" ><</button></div>
        <div><button id="next" class="button" >></button></div>
    </div> */}
    let arr=["i (1).jpg","i (2).jpg","i (3).jpg","i (4).jpg","i (5).jpg","i (6).jpg","i (7).jpg","i (8).jpg","i (9).jpg","i (10).jpg","i (11).jpg","i (12).jpg","i (13).jpg","i (14).jpg"];
    let i=1,n=arr.length;
const bg=document.getElementById("all")
const prev=document.getElementById("prev");
prev.addEventListener("click",function(){
    if(i==0){
        // bg.innerText="No more images"
    }
   else {
    i-=1;
    bg.style.backgroundImage=`url('${arr[i]}')`;
   }
    
});
const next=document.getElementById("next");
next.addEventListener("click",function(){
    if(i==arr.length -1){
        // bg.innerText="No more images"
    }
   else {
    i+=1;
    bg.style.backgroundImage=`url('${arr[i]}')`;
}});