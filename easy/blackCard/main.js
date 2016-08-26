/*Sample code to read in test cases:*/
var fs  = require("fs");
var numArr;
fs.readFileSync(process.argv[2]).toString().split('\n').forEach(function (line) {
  if (line !== "") {
    //do something here
    line.trim();
    var pirArr=line.replace(" | ","|").split("|")[0].split(" ");
    var blackCard=line.replace(" | ","|").split("|")[1].replace("\r","");
    var i=0;
    var count=blackCard;
    outerLoop:
    while(count>0){
      for(i=0;i<pirArr.length;i++){
        count--;
        if(count===0){
          pirArr.splice(i,1);
          if(pirArr.length===1){
            break outerLoop;
          }
          count=blackCard;
          continue outerLoop;
        }
      }
    }
    console.log(pirArr[0]);
  }
});
