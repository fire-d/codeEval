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
      if(line.indexOf(' ')==-1){
    	  System.out.println(line);
    	  continue;
      }
      int max=0;
      int count=0;
      int positionLongestWord=0;
      for(int i=0;i<line.length();i++){
        if(line.charAt(i)!=' '){
          count++;
        }
        else if(count>max){
          max=count;
          positionLongestWord=i-count;
          count=0;
        }
        else{
          count=0;
        }
        if((i==line.length()-1)&&(count>max)){
          max=count;
          positionLongestWord=i-count+1;
          count=0;
        }
      }
      System.out.println(line.substring(positionLongestWord, positionLongestWord+max));
    }
    buffer.close();
  }
}
