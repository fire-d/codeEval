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
      String romanNumeral="";
      for(int i=0;i<line.length();i++){
        switch(line.charAt(line.length()-i-1)){
        case '0': break;
        case '1': 
          switch(i){
          case 0: 
            romanNumeral="I"+romanNumeral;
            break;
          case 1: 
            romanNumeral="X"+romanNumeral;
            break;
          case 2: 
            romanNumeral="C"+romanNumeral;
            break;
          case 3: 
            romanNumeral="M"+romanNumeral;
            break;
          }
          break;
        case '2':
          switch(i){
          case 0: 
            romanNumeral="II"+romanNumeral;
            break;
          case 1: 
            romanNumeral="XX"+romanNumeral;
            break;
          case 2: 
            romanNumeral="CC"+romanNumeral;
            break;
          case 3: 
            romanNumeral="MM"+romanNumeral;
            break;
          }
          break;
        case '3':
          switch(i){
          case 0: 
            romanNumeral="III"+romanNumeral;
            break;
          case 1: 
            romanNumeral="XXX"+romanNumeral;
            break;
          case 2: 
            romanNumeral="CCC"+romanNumeral;
            break;
          case 3: 
            romanNumeral="MMM"+romanNumeral;
            break;
          }
          break;
        case '4':
          switch(i){
          case 0: 
            romanNumeral="IV"+romanNumeral;
            break;
          case 1: 
            romanNumeral="XL"+romanNumeral;
            break;
          case 2: 
            romanNumeral="CD"+romanNumeral;
            break;
          }
          break;
        case '5':
          switch(i){
          case 0: 
            romanNumeral="V"+romanNumeral;
            break;
          case 1: 
            romanNumeral="L"+romanNumeral;
            break;
          case 2: 
            romanNumeral="D"+romanNumeral;
            break;
          }
          break;
        case '6':
          switch(i){
          case 0: 
            romanNumeral="VI"+romanNumeral;
            break;
          case 1: 
            romanNumeral="LX"+romanNumeral;
            break;
          case 2: 
            romanNumeral="DC"+romanNumeral;
            break;
          }
          break;
        case '7':
          switch(i){
          case 0: 
            romanNumeral="VII"+romanNumeral;
            break;
          case 1: 
            romanNumeral="LXX"+romanNumeral;
            break;
          case 2: 
            romanNumeral="DCC"+romanNumeral;
            break;
          }
          break;
        case '8':
          switch(i){
          case 0: 
            romanNumeral="VIII"+romanNumeral;
            break;
          case 1: 
            romanNumeral="LXXX"+romanNumeral;
            break;
          case 2: 
            romanNumeral="DCCC"+romanNumeral;
            break;
          }
          break;
        case '9':
          switch(i){
          case 0: 
            romanNumeral="IX"+romanNumeral;
            break;
          case 1: 
            romanNumeral="XC"+romanNumeral;
            break;
          case 2: 
            romanNumeral="CM"+romanNumeral;
            break;
          }
          break;
        }
      }
      System.out.println(romanNumeral);
    }
    buffer.close();
  }
}
