/*Sample code to read in test cases:*/
var fs  = require("fs");
fs.readFileSync(process.argv[2]).toString().split('\n').forEach(function (line) {
  if (line !== "") {
    //do something here
    var n=parseInt(line.split(',')[0]);
    var p1=parseInt(line.split(',')[1]);
    n=n&(1<<p1-1);
    p1=n>>(p1-1);
    var n=parseInt(line.split(',')[0]);
    var p2=parseInt(line.split(',')[2]);
    n=n&(1<<p2-1);
    p2=n>>(p2-1);
    console.log(p1==p2);
  }
});
