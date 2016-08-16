/*Sample code to read in test cases:*/
var fs  = require("fs");
fs.readFileSync(process.argv[2]).toString().split('\n').forEach(function (line) {
    if (line !== '') {
      //do something here
      var i=line.indexOf(' ');
      var nFriends=parseInt(line.substring(0,i));
      var min=10000;
      var max=0;
      for(j=i+1;j<line.length;j++){
        if(line.charAt(j)==' '){
          if(parseInt(line.substring(i,j))<min){
            min=parseInt(line.substring(i,j));
          }
          if(parseInt(line.substring(i,j))>max){
            max=parseInt(line.substring(i,j));
          }
          i=j;
        }
      }
      if(parseInt(line.substring(i,j))<min){
        min=parseInt(line.substring(i,j));
      }
      if(parseInt(line.substring(i,j))>max){
        max=parseInt(line.substring(i,j));
      }     
      var distMin=1000000;
      for(k=min;k<=max;k++){
        var aux=0;
        i=line.indexOf(' ');
        for(j=i+1;j<line.length;j++){
          if(line.charAt(j)==' '){
            aux+=Math.abs(parseInt(line.substring(i,j))-k);
            i=j;
          }
        }
        aux+=Math.abs(parseInt(line.substring(i,j))-k);
        if(aux<distMin){
          distMin=aux;
        }
      }
      console.log(distMin);
    }
});
process.exit();
