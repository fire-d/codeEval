/*Sample code to read in test cases:*/
var fs  = require("fs");
var arrIn1;
var arrIn2;
fs.readFileSync(process.argv[2]).toString().split('\n').forEach(function (line) {
  if (line !== "") {
    //do something here
    line.trim();
    arrIn1=line.split(";")[0].split(",").map(getNumber);
    arrIn2=line.split(";")[1].split(",").map(getNumber);
    console.log(arrIn1.filter(intersection).join(","));
  }
});
function getNumber(str){
  return parseInt(str.replace("\r",""));
}
function intersection(num){
  return arrIn2.some(function(a){return a==num;});
}
