/*Sample code to read in test cases:*/
var fs  = require("fs");
fs.readFileSync(process.argv[2]).toString().split('\n').forEach(function (line) {
  if (line !== "") {
    //do something here
    line.trim();
    var list1=line.split(" | ")[0].split(" ");
    var list2=line.split(" | ")[1].split(" ");
    var i;
    for(i=0;i<list1.length;i++){
      if(parseInt(list1[i])){
        list1[i]=parseInt(list1[i]);
      }else if(list1[i]=="0"){
        list1[i]=0;
      }
    }
    for(i=0;i<list2.length;i++){
      if(parseInt(list2[i])){
        list2[i]=parseInt(list2[i]);
      }else if(list2[i]=="0"){
        list2[i]=0;
      }
    }
    var list3=[];
    for(i=0;i<list1.length;i++){
      list3[i]=list1[i]*list2[i];
    }
    console.log(list3.join(" "));
  }
});
