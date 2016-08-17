/*Sample code to read in test cases:*/
var fs  = require("fs");
fs.readFileSync(process.argv[2]).toString().split('\n').forEach(function (line) {
    if (line !== '') {
      //do something here
      var x=parseInt(line);
      if(x>=0&&x<=2){
        console.log("Still in Mama's arms");
      }
      else if(x>=3&&x<=4){
        console.log("Preschool Maniac");
      }
      else if(x>=5&&x<=11){
        console.log("Elementary school");
      }
      else if(x>=12&&x<=14){
        console.log("Middle school");
      }
      else if(x>=15&&x<=18){
        console.log("High school");
      }
      else if(x>=19&&x<=22){
        console.log("College");
      }
      else if(x>=23&&x<=65){
        console.log("Working for the man");
      }
      else if(x>=66&&x<=100){
        console.log("The Golden Years");
      }
      else{
        console.log("This program is for humans");
      }
    }
});
process.exit();
