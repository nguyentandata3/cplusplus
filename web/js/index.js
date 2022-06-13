var i = "12345bcd";
console.log(i);
function print(i,j){
    let text = "";
    for(let m = i; m <= j; m++){
        text += m+" ";
    }
    return text;
}
document.getElementById("loop").innerHTML = print(3, 10);
function time(){
    let date = new Date();
    let day = date.getDay();
    let month = date.getMonth();
    let year = date.getFullYear();
    let hour = date.getHours();
    let minute = date.getMinutes();
    let second = date.getSeconds();
    return `Date: ${day} - ${month} - ${year} - ${hour} - ${minute} - ${second}`
    // return "Date: "+day+" Month: "+month+" Year: "+year+" Hour: "+hour+" Minutes: "+minute+" Second: "+second;
}
document.getElementById("time").innerHTML = time();
// window.alert(i);
// function reverseString(str){
//     return str.split('').reverse().join('');
// }
function reverseString(str){
    return [...String(str)].reverse().join('');
}
console.log(reverseString("abc"));
document.getElementById("reverse").innerHTML = reverseString("a  b  c");