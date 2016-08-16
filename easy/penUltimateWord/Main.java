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
      System.out.println(line.substring(line.substring(0,line.lastIndexOf(" ")).lastIndexOf(" ") + 1,
					line.lastIndexOf(" ")));
    }
    buffer.close();
  }
}
