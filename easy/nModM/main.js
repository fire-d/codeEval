/*Sample code to read in test cases:*/
var fs  = require("fs");
fs.readFileSync(process.argv[2]).toString().split('\n').forEach(function (line) {
  if (line !== "") {
    //do something here
    var n=parseInt(line.split(',')[0]);
    var m=parseInt(line.split(',')[1]);
    n-=m;
    while(n>=0){
      n-=m;
    }
    console.log(m+n);
  }
});
