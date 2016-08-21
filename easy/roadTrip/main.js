/*Sample code to read in test cases:*/
var fs  = require("fs");
var distance=0;
fs.readFileSync(process.argv[2]).toString().split('\n').forEach(function (line) {
  if (line !== "") {
    //do something here
    line.trim();
    var arrPair=line.replace(/; /g,";")
                .split(";").filter(checkVal)
                .map(getOnlyDistance)
                .sort(function(a, b){return a-b})
                .map(distanceBetween);
    console.log(arrPair.join(","));
  }
  distance=0;
});
function checkVal(str){
  return (str!=="")&&(str!=="\r");
}
function getOnlyDistance(item){
  return parseInt(item.split(",")[1]);
}
function distanceBetween(item){
  var aux=item-distance;
  distance=item;
  return aux;
}
