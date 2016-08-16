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
      int pipe=line.lastIndexOf('|');
      int begin=0;
      String match="";
      middleLoop:
      for(int j=0;j<pipe;j++){
        if (line.charAt(j)==' ') {
          for(int i=pipe+2;i<line.length();i++){
        	int amountToSearch= charTimesAt(line.charAt(i), line.substring(pipe+2));
        	int available=charTimesAt(line.charAt(i), line.substring(begin, j));
		    if(amountToSearch>available){
		      begin=j+1;
		      continue middleLoop;
		    }
          }
          match+=line.substring(begin, j)+" ";
          begin=j+1;
		}
      }
      if(match!=""){
        match=match.substring(0,match.lastIndexOf(" "));
      }
      else{
        match="False";
      }
      System.out.println(match);
    }
    buffer.close();
  }
  public static int charTimesAt(char x, String field){
    int counter = 0;
    for( int i=0; i<field.length(); i++ ) {
      if( field.charAt(i) == x ) {
        counter++;
      } 
    }
    return counter;
  }
}
