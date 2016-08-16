/* Sample code to read in test cases:*/
import java.io.*;
public class Main {
  public static void main (String[] args) throws IOException {
    int[][]board=new int[256][256];
    File file = new File(args[0]);
    BufferedReader buffer = new BufferedReader(new FileReader(file));
    String line;
    while ((line = buffer.readLine()) != null) {
      line = line.trim();
      // Process line of input Here
      if (line.length()==0){
        continue;
      }
      int i,j,x;
      String[] opCode=line.split(" ");
      switch(opCode[0]){
      case "SetRow": 
        i = Integer.parseInt(opCode[1]);
        x = Integer.parseInt(opCode[2]);
        for(j=0;j<256;j++){
          board[i][j]=x;
        }
        break;
      case "SetCol":
        j = Integer.parseInt(opCode[1]);
        x = Integer.parseInt(opCode[2]);
        for(i=0;i<256;i++){
          board[i][j]=x;
        }
        break;
      case "QueryRow":
        i = Integer.parseInt(opCode[1]);
        x=0;
        for(j=0;j<256;j++){
          x+=board[i][j];
        }
        System.out.println(x);
        break;
      case "QueryCol":
        j = Integer.parseInt(opCode[1]);
        x=0;
        for(i=0;i<256;i++){
          x+=board[i][j];
        }
        System.out.println(x);
        break;
      }
    }
    buffer.close();
  }
}
