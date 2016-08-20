/*Sample code to read in test cases:*/
var fs  = require("fs");
fs.readFileSync(process.argv[2]).toString().split('\n').forEach(function (line) {
  if (line !== "") {
    //do something here
    line.trim();
    var numArr=line.replace(" : ",":").split(":")[0].split(" ");
    var swapArr=line.replace(" : ",":").split(":")[1].replace(", ",",").split(",");
    var i,j;
    for(i=0;i<swapArr.length;i++){
      var source=parseInt(swapArr[i].split("-")[0]);
      var dest=parseInt(swapArr[i].split("-")[1]);
      j=numArr[source];
      numArr[source]=numArr[dest];
      numArr[dest]=j;
    }
    console.log(numArr.join(" "));
  }
});
