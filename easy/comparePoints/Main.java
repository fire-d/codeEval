/* Sample code to read in test cases:*/
import java.io.*;
public class Main {
  public static void main (String[] args) throws IOException {
    File file = new File(args[0]);
    BufferedReader buffer = new BufferedReader(new FileReader(file));
    String line;
    while ((line = buffer.readLine()) != null) {
      line = line.trim();
      // Process line of input Here
      if (line.length()==0){
    	  continue;
      }
      String result ="";
      int qMinusO=Integer.decode(line.split(" ")[2])-Integer.decode(line.split(" ")[0]);
      int rMinusP=Integer.decode(line.split(" ")[3])-Integer.decode(line.split(" ")[1]);
      if(rMinusP==0&&qMinusO==0){
    	  result="here";
      }
      else {
        if (rMinusP < 0) {
          result += "S";
        } else if (rMinusP > 0) {
          result += "N";
        }
        if (qMinusO < 0) {
          result += "W";
        } else if (qMinusO > 0) {
          result += "E";
        } 
	  }
	System.out.println(result);
    }
    buffer.close();
  }
}
