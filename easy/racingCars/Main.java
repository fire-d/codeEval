/* Sample code to read in test cases:*/
import java.io.*;

public class Main {
  public static void main(String[] args) throws IOException {
    File file = new File(args[0]);
    BufferedReader buffer = new BufferedReader(new FileReader(file));
    String line;
    int currentPosition,lastPosition =0;
    line = buffer.readLine();
    currentPosition=line.lastIndexOf('C');
    if(currentPosition==-1){
      currentPosition=line.lastIndexOf('_');
    }
    for(int j=0;j<12;j++){
      if(j!=currentPosition){
        System.out.print(line.charAt(j));
      }
      else{
    	System.out.print('|');
      }
    }
    System.out.print('\n');
    lastPosition=currentPosition;
    for(int i=1;i<50;i++){
      line = buffer.readLine();
      // Process line of input Here
      currentPosition=line.lastIndexOf('C');
      if(currentPosition==-1){
        currentPosition=line.lastIndexOf('_');
      }
      for(int j=0;j<12;j++){
        if(j!=currentPosition){
          System.out.print(line.charAt(j));
        }
        else{
          if (currentPosition>lastPosition) {
			System.out.print('\\');
		  }
          else if(currentPosition<lastPosition){
            System.out.print('/');
          }
          else{
            System.out.print('|');	  
          }
        }
      }
      System.out.print('\n');
      lastPosition=currentPosition;
    }
    buffer.close();
  }
}
