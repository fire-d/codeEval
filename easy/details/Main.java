import java.io.*;

public class Main {
  public static void main(String[] args) throws IOException {
    File file = new File(args[0]);
    BufferedReader buffer = new BufferedReader(new FileReader(file));
    String line;
    while ((line = buffer.readLine()) != null) {
      line = line.trim();
      for (int i = 0; i < 9; i++) {
        if (line.matches(".*X\\.{" + i + "}Y.*")) {
          System.out.println(i);
          break;
        }
      }
    }
    buffer.close();
  }
}
