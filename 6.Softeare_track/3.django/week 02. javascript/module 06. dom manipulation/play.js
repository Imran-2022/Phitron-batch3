// what is dom and setup javascript with html
// javascript selector and html collection
// getattribute and set and get className and innertext _ innerHTML
// create-element-appenchild-nodelist-parentnodes

// var h1=document.getElementsByTagName('h1')
// console.log(h1)

// var id=document.getElementById('id').style.color='red';
// document.getElementById('id').style.removeProperty='color';
// // console.log(id)

// var di=document.getElementById('di');
// console.log(di.getAttribute('src'),di.getAttribute('alt'));
// di.setAttribute('alt','hi')
// console.log(di.getAttribute('alt'))

// var testDiv=document.getElementsByClassName('test')
// // console.log(testDiv[0].childNodes[1].parentNode.parentNode.childNodes[3])

// function createEL(){
//     var p = document.createElement("p")
//     p.innerText="this is md imranul haque"
//     var newDiv=document.getElementById("new_div")
//     newDiv.appendChild(p);
// }

// createEL();
// createEL();
// createEL();
// createEL();
var cnt=0;
document.getElementById("submit_btn").addEventListener("click",()=>{
    console.log("hi")
    cnt++;
    document.getElementById("spn").innerText=cnt;
})
