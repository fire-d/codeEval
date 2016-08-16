/* Sample code to read in test cases:*/
import java.io.*;

public class Main {
  public static void main(String[] args) throws IOException {
    File file = new File(args[0]);
    BufferedReader buffer = new BufferedReader(new FileReader(file));
    String line;
    outerLoop:
    while ((line = buffer.readLine()) != null) {
      line = line.trim();
      // Process line of input Here
      if (line.length() == 0) {
        continue;
      }
      middleLoop:
      for(int i=1;i<=line.length();i++){
        String rep=line.substring(0, i);
        String[] splitted=line.split(rep);
        for(String s:splitted){
          if(!s.isEmpty()){
            continue middleLoop;
          }
        }
        System.out.println(rep.length());
        continue outerLoop;
      }
    }
    buffer.close();
  }
}
