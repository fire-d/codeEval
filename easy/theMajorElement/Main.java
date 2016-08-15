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
      String[] numerals=line.split(",");
      boolean exists=false;
      for(int i=0;i<numerals.length;i++){
        int count=1;
        for(int j=i+1;j<numerals.length;j++){
          if(numerals[i].equals(numerals[j])){
            count++;
            if(count*2>(numerals.length)){
              exists=true;
              System.out.println(numerals[i]);
              break;
            }
          }
        }
        if(exists) break;
      }
      if(!exists){
    	  System.out.println("None");
      }
    }
    buffer.close();
  }
}
