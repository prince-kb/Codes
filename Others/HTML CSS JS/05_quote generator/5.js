const arr1=[
    `"The purpose of our lives is to be happy." — Dalai La`,`"Get busy living or get busy dying." — Stephen Ki    `,
    `"Life is what happens when you're busy making other plans." — John Lenn   `,`"You only live once, but if you do it right, once is enough." — Mae We    `,`"Many of life’s failures are people who did not realize how close they were to success when they gave up."– Thomas A. Edis    `
    ,`"If you want to live a happy life, tie it to a goal, not to people or things."– Albert Einste    `,`"Never let the fear of striking out keep you from playing the game."– Babe Ru    `,`"Money and success don’t change people; they merely amplify what is already there." — Will Smi    `,`"Not how long, but how well you have lived is the main thing.” — Sene    ` ,` “If life were predictable it would cease to be life, and be without flavor.” – Eleanor Rooseve`,` “The whole secret of a successful life is to find out what is one’s destiny to do, and then do it.”– Henry Fo    `,` “In order to write about life first you must live it.”– Ernest Hemingw    `,` “The big lesson in life, baby, is never be scared of anyone or anything.”– Frank Sinat    `,` “Sing like no one’s listening, love like you’ve never been hurt, dance like nobody’s watching, and live like it’s heaven on earth.” – (Attributed to various source       `,` “Life is not a problem to be solved, but a reality to be experienced.”– Soren Kierkegaa    `,`    “Curiosity about life in all of its aspects, I think, is still the secret of great creative people.” – Leo Burne    `,` "The unexamined life is not worth living." — Socrat    `,` "Turn your wounds into wisdom." — Oprah Winfr    `,` "The way I see it, if you want the rainbow, you gotta put up with the rain." —Dolly Part    `,` "Do all the good you can, for all the people you can, in all the ways you can, as long as you can." — Hillary Clinton (inspired by John Wesley quot        `,` "Everybody wants to be famous, but nobody wants to do the work. I live by that. You grind hard so you can play hard. At the end of the day, you put all the work in, and eventually it’ll pay off. It could be in a year, it could be in 30 years. Eventually, your hard work will pay off." — Kevin Ha    `,` "Don’t settle for what life gives you; make life better and build something." — Ashton Kutch    `
]
const arr2 = ['#FF6633', '#FFB399', '#FF33FF', '#FFFF99', '#00B3E6', 
		  '#E6B333', '#3366E6', '#999966', '#99FF99', '#B34D4D',
		  '#80B300', '#809900', '#E6B3B3', '#6680B3', '#66991A', 
		  '#FF99E6', '#CCFF1A', '#FF1A66', '#E6331A', '#33FFCC',
		  '#66994D', '#B366CC', '#4D8000', '#B33300', '#CC80CC', 
		  '#66664D', '#991AFF', '#E666FF', '#4DB3FF', '#1AB399',
		  '#E666B3', '#33991A', '#CC9999', '#B3B31A', '#00E680', 
		  '#4D8066', '#809980', '#E6FF80', '#1AFF33', '#999933',
		  '#FF3380', '#CCCC00', '#66E64D', '#4D80CC', '#9900B3', 
		  '#E64D66', '#4DB380', '#FF4D4D', '#99E6E6', '#6666FF'];

let index=0;
let prevIndex=1;
let screen=document.getElementById("screen")
screen.innerText=arr1[index];
function RandomGenerator(){
    prevIndex=index;
index=Math.floor(Math.random()*arr1.length)
screen.style.background=arr2[index];
if(prevIndex==index)
index=Math.floor(Math.random()*arr1.length)
}

document.getElementById("next").addEventListener("click",function(){
    RandomGenerator();
    screen.innerText=arr1[index];
})
document.getElementById("prev").addEventListener("click",function(){
screen.style.background=arr2[prevIndex];
    screen.innerText=arr1[prevIndex];
})
