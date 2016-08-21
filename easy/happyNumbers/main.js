/*Sample code to read in test cases:*/
var fs  = require("fs");
fs.readFileSync(process.argv[2]).toString().split('\n').forEach(function (line) {
  if (line !== "") {
    //do something here
    line.trim();
    var arrNum=[];
    for(i=0;i<line.length;i++){
      if(parseInt(line[i])){
        arrNum.push(parseInt(line[i]));
      }
    }
    var unhappy=[4, 16, 37, 58, 89, 145, 42, 20];
    var result=0;
    var i;
    middleLoop:
    while(true){
      for(i=0;i<arrNum.length;i++){
        result+=(parseInt(arrNum[i])*parseInt(arrNum[i]));
      }
      if ((result==1)){
        console.log(result);
        break;
      }
      for(i=0;i<8;i++){
        if(result==unhappy[i]){
          console.log("0");
          break middleLoop;
        }
      }
      result=result+"";
      arrNum=[];
      for(i=0;i<result.length;i++){
        if(parseInt(result[i])){
          arrNum.push(parseInt(result[i]));
        }
      }
      result=0;
    }
  }
});
