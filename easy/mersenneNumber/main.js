/*Sample code to read in test cases:*/
var fs  = require("fs");
fs.readFileSync(process.argv[2]).toString().split('\n').forEach(function (line) {
  if (line !== "") {
    //do something here
    var n=parseInt(line);
    if(n<7){
      console.log("3");
    }else if(n< 31){
      console.log("3, 7");
    }else if(n< 127){
      console.log("3, 7, 31");
    }else if(n< 2047){
      console.log("3, 7, 31, 127");
    }else{
      console.log("3, 7, 31, 127, 2047");
    }
  }
});
