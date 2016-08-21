/* Sample code to read in test cases:*/
import java.io.*;

public class Main {
  public static void main(String[] args) throws IOException {
    File file = new File(args[0]);
    BufferedReader buffer = new BufferedReader(new FileReader(file));
    String line;
    int count=0;
    while ((line = buffer.readLine()) != null) {
      line = line.trim();
      // Process line of input Here
      int i;
      if (line.length()== 0) {
        continue;
      }else{
        for(i=0;i<line.length();i++){
          count+=Math.pow(Double.parseDouble(line.substring(i, i+1)),(line.length()));
        }
      }
      if(count==Integer.parseInt(line)){
        System.out.println("True");
      }else{
        System.out.println("False");
      }
      count=0;
    }
    buffer.close();
  }
}
