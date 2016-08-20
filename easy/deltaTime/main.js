/*Sample code to read in test cases:*/
var fs  = require("fs");
fs.readFileSync(process.argv[2]).toString().split('\n').forEach(function (line) {
  if (line !== "") {
    //do something here
    line.trim();
    var dateArr1=line.split(' ')[0].split(':');
    var dateArr2=line.split(' ')[1].split(':');
    var d1 = parseInt(dateArr1[0])*3600+parseInt(dateArr1[1])*60+parseInt(dateArr1[2]);
    var d2 = parseInt(dateArr2[0])*3600+parseInt(dateArr2[1])*60+parseInt(dateArr2[2]);
    var delta=d2-d1;
    if(delta<0){
      delta=-delta;
    }
    var i=0;
    for(i=0;i<24;i++){
      if(delta<3600){
        i = i+"";
        while(i.length<2){
          i="0"+i;
        }
        process.stdout.write(i+":");
        break;
      }else{
        delta=delta-3600;
      }
    }
    for(i=0;i<60;i++){
      if(delta<60){
        i = i+"";
        while(i.length<2){
          i="0"+i;
        }
        delta=delta+"";
        while(delta.length<2){
          delta = "0" + delta;
        }
        process.stdout.write(i+":"+delta);
        break;
      }else{
        delta=delta-60;
      }
    }
    process.stdout.write("\n");
  }
});
