console.log("3");
console.log("30");
function strcmp(a,b){
    if(a === b){
        return 0;
    }
    if(a > b){
        return -1;
    }
    return 1;
}
console.log(strcmp("hello","wourld"));
let arr=["banana","oracle","orange"];
arr.sort(function(a, b){
    return a.localeCompare(b);
});
console.log(arr);
var text = 'L\'albero means tree in Italian';
console.log( text ); // "L'albero means tree in Italian"
