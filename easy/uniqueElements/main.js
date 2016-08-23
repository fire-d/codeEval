/*Sample code to read in test cases:*/
var fs  = require("fs");
var numArr;
fs.readFileSync(process.argv[2]).toString().split('\n').forEach(function (line) {
  if (line !== "") {
    //do something here
    line.trim();
    var numArr=line.replace("\r","").split(",");
    var i;
    var curVal;
    for(i=0;i<numArr.length;i++){
      if(i===0){
        curVal=numArr[0];
      }else if(numArr[i]==curVal){
        numArr[i]=null;
      }else{
        curVal=numArr[i];
      }
    }
    console.log(numArr.filter(notWrong).join(","));
  }
});
function notWrong(number){
  return (number!==null);
}
