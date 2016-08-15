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
      int nZeroes=Integer.decode(line.split(" ")[0]);
      int rangeMax=Integer.decode(line.split(" ")[1]);
      int count=0;
      for (int i=1;i<=rangeMax;i++){
        String binI=Integer.toBinaryString(i);
        if(nZeroes<binI.length()){
          if((binI.length()-binI.replace("0", "").length())==nZeroes){
            count++;
          }
        }
      }
      System.out.println(count);
    }
    buffer.close();
  }
}
