/*Sample code to read in test cases:*/
var fs  = require("fs");
fs.readFileSync(process.argv[2]).toString().split('\n').forEach(function (line) {
  if (line !== "") {
    //do something here
    line.trim();
    var min=0;
    var i=0;
    var count=[0,0,0,0,0,0,0,0];
    var numArr=line.split(' ');
    for(i=0;i<numArr.length;i++){
      count[parseInt(numArr[i])-1]++;
    }
    for(i=0;i<numArr.length;i++){
      if(count[i]==1){
        min=i+1;
        break;
      }
    }
    if(min!==0){
      for(i=0;i<numArr.length;i++){
        if(parseInt(numArr[i])==min){
          console.log(i+1);
          break;
        }
      }
    }else{
      console.log("0");
    }
  }
});
