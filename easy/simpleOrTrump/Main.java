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
      int space=line.indexOf(' ');
      int pipe=line.indexOf('|');
      if(line.charAt(space-1)==line.charAt(pipe+2)){
        if(line.charAt(pipe-2)!=line.charAt(pipe+2)){
          System.out.println(line.substring(0,space));
          continue;
        }
      }
      else if(line.charAt(pipe-2)==line.charAt(pipe+2)){
    	System.out.println(line.substring(space+1,pipe-1));
    	continue;
      }
      int one=Integer.valueOf(line.substring(0,space-1)
    		  .replaceAll("A", "14")
    		  .replaceAll("K", "13")
    		  .replaceAll("Q", "12")
    		  .replaceAll("J", "11"));
      
      int two=Integer.valueOf(line.substring(space+1,pipe-2)
    		  .replaceAll("A", "14")
    		  .replaceAll("K", "13")
    		  .replaceAll("Q", "12")
    		  .replaceAll("J", "11"));
      if(one>two){
        System.out.println(line.substring(0,space));
        continue;
      }
      else if(one<two){
        System.out.println(line.substring(space+1,pipe-1));
        continue;
      }
      else{
        System.out.println(line.substring(0,space)+" "+line.substring(space+1,pipe-1));
      }
    }
    buffer.close();
  }
}
