/* Sample code to read in test cases:*/
import java.io.*;
public class Main {
  public static void main (String[] args) throws IOException {
    File file = new File(args[0]);
    BufferedReader buffer = new BufferedReader(new FileReader(file));
    String line;
    outerLoop:
    while ((line = buffer.readLine()) != null) {
      line = line.trim();
      // Process line of input Here
      if (line.length()==0){
        continue;
      }
      for(int i=0;i<line.length();i++){
        int timesDigitIAppears= Integer.valueOf(line.charAt(i) + "");
        int count=0;
        for(int j=0;j<line.length();j++){
          int digit = Integer.valueOf(line.charAt(j) + "");
          if(digit==i){
            count++;
          }
          if(count>timesDigitIAppears){
            System.out.println("0");
            continue outerLoop;
          }
        }
        if(count!=timesDigitIAppears){
          System.out.println("0");
          continue outerLoop;
        }
      }
      System.out.println("1");
    }
    buffer.close();
  }
}
