/* Sample code to read in test cases:*/
import java.io.*;
public class Main {
  public static void main (String[] args) throws IOException {
    String[][] digits={{"-**-","*--*","*--*","*--*","-**-"},
			  {"--*-","-**-","--*-","--*-","-***"},
			  {"***-","---*","-**-","*---","****"},
			  {"***-","---*","-**-","---*","***-"},
			  {"-*--","*--*","****","---*","---*"},
			  {"****","*---","***-","---*","***-"},
			  {"-**-","*---","***-","*--*","-**-"},
			  {"****","---*","--*-","-*--","-*--"},
			  {"-**-","*--*","-**-","*--*","-**-"},
			  {"-**-","*--*","-***","---*","-**-"}};
    File file = new File(args[0]);
    BufferedReader buffer = new BufferedReader(new FileReader(file));
    String line;
    while ((line = buffer.readLine()) != null) {
      line = line.trim();
      // Process line of input Here
      if (line.length()==0){
        continue;
      }
      for (int i = 0; i < 6; i++) {
        for (char c : line.toCharArray()) {
          if(Character.isDigit(c)){
            if (i!=5) {
              System.out.print(digits[Character.digit(c, 10)][i]);
              System.out.print("-");
			}
            else{
              System.out.print("-----");
            }
          }
		}
        System.out.print("\n");
	  }
    }
    buffer.close();
  }
}
