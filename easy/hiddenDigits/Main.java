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
      String digits="";
      for(char c:line.toCharArray()){
        if (c>=97&&c<=106) {
          digits+=Integer.toString(c-97);
		}
        else if(Character.isDigit(c)){
          digits+=c;
        }
      }
      if (digits!="") {
		System.out.println(digits);
	  }
      else{
        System.out.println("NONE");
      }
    }
    buffer.close();
  }
}
