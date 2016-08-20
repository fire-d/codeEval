/*Sample code to read in test cases:*/
var fs  = require("fs");
fs.readFileSync(process.argv[2]).toString().split('\n').forEach(function (line) {
  if (line !== "") {
    //do something here
    line.trim();
    var strArray =line.split(',');
    var numbers=[];
    var words=[];
    var i;
    for(i=0;i<strArray.length;i++){
      if(parseInt(strArray[i])||(strArray[i]=="0")){
        numbers.push(strArray[i].toString());
      }else{
        words.push(strArray[i].toString());
      }
    }
    var outstr="";
    if((words.length>0)&&(numbers.length>0)){
      //console.log(words.join(',')+"|"+numbers.join(','));
      outstr=words.join(',');
      outstr=outstr.concat("|",numbers.join(','));
      console.log(outstr);
    }else if(words.length>0){
      console.log(words.join(',')); 
    }else if(numbers.length>0){
      console.log(numbers.join(','));
    }
  }
});
