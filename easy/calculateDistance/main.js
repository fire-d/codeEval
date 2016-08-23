/*Sample code to read in test cases:*/
var fs  = require("fs");

fs.readFileSync(process.argv[2]).toString().split('\n').forEach(function (line) {
  if (line !== "") {
    //do something here
    line.trim();
    var point1=line.split(") (")[0].replace("(","").split(",");
    var point2=line.split(") (")[1].replace(")","").split(",");
    console.log(parseInt(Math.sqrt(Math.pow(point1[0]-point2[0],2)+Math.pow(point1[1]-point2[1],2))));
  }
});
