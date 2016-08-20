/*Sample code to read in test cases:*/
var fs  = require("fs");
fs.readFileSync(process.argv[2]).toString().split('\n').forEach(function (line) {
  if (line !== "") {
    //do something here
    line.trim();
    var i,j,n;
    var matrix =line.split(" ");
    switch (matrix.length){
    case 1:
      n=1;
      break;
    case 4:
      n=2;
      break;
    case 9:
      n=3;
      break;
    case 16:
      n=4;
      break;
    case 25:
      n=5;
      break;
    case 36:
      n=6;
      break;
    case 49:
      n=7;
      break;
    case 64:
      n=8;
      break;
    case 81:
      n=9;
      break;
    case 100:
      n=10;
      break;
    }
    var rotMatrix= [];
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        rotMatrix[(n*j)+(n-1-i)]=matrix[(n*i+j)];
      }
    }
    console.log(rotMatrix.join(' '));
  }
});
