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
      int val=-1,count=0,i=0,l=line.length(),j=0,aux;
      for(j=0;j<l;j++){
        if(line.charAt(j)==' '){
          aux=Integer.valueOf(line.substring(i, j));
          if(val!=aux){
        	if(val!=-1){
              System.out.print(count+" "+val+" ");
        	}
            count=1;
            val=aux;
          }
          else{
            count++;
          }
          i=j+1;
        }
      }
      aux=Integer.valueOf(line.substring(i, j));
      if(val!=aux){
    	if(val!=-1){
          System.out.print(count+" "+val+" ");
    	}
        count=1;
        val=aux;
        System.out.print(count+" "+val);
      }
      else{
        count++;
        System.out.print(count+" "+val);
      }
      System.out.println();
    }
    buffer.close();
  }
}
