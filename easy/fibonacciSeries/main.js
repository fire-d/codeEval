/*Sample code to read in test cases:*/
var fs  = require("fs");
fs.readFileSync(process.argv[2]).toString().split('\n').forEach(function (line) {
  if (line !== "") {
    //do something here
    line.trim();
    var num=parseInt(line);
    console.log(fibonacci(num));
  }
});
function fibonacci(num){
  if(num===0){
    return 0;
  }else if(num==1){
    return 1;
  }else{
    return fibonacci(num-1)+fibonacci(num-2);
  }
}
