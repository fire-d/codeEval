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
      if (line.length()<=55){
        System.out.println(line);
      }
      else {
        String tmp=line.substring(0, 40);
        if (tmp.lastIndexOf(" ")!=-1) {
          System.out.println(tmp.substring(0,tmp.lastIndexOf(" ")) + "... <Read More>");
		}
        else{
          System.out.println(tmp + "... <Read More>");
        }
      }
    }
    buffer.close();
  }
}
