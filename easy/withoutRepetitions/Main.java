/* Sample code to read in test cases:*/
import java.io.*;

public class Main {
  public static void main(String[] args) throws IOException {
    File file = new File(args[0]);
    BufferedReader buffer = new BufferedReader(new FileReader(file));
    String line;
    while ((line = buffer.readLine()) != null) {
      line = line.trim();
      // Process line of input Here
      if (line.length() == 0) {
        continue;
      }
      char charMem='\u0000';
      for(int i=0;i<line.length();i++){
        if(charMem!=line.charAt(i)){
          charMem=line.charAt(i);
          System.out.print(charMem);
        }
      }
      System.out.println();
    }
    buffer.close();
  }
}
