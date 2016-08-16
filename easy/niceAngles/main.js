/*Sample code to read in test cases:
* This script will give the correct number of seconds in the variable, but will fail on codeeval
*/
var fs  = require("fs");
fs.readFileSync(process.argv[2]).toString().split('\n').forEach(function (line) {
    if (line !== '') {
        //do something here
        var raw = parseFloat(line);
        var degrees=parseInt(raw);
        var minutes=parseInt((raw-degrees)*60);
        var minStr=minutes+"";
        if(minStr.length<2) minStr="0"+minStr;
        var seconds=Math.round((raw-degrees-(minutes/60))*3600);
        var secStr=seconds+"";
        if(secStr.length<2) secStr="0"+secStr;
        console.log(degrees+"."+minStr+"\'"+secStr+"\"");
    }
});
process.exit();
