import java.util.*;
import java.awt.*;

public class a {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);

    int A = sc.nextInt();
    int B = sc.nextInt();
    int C = sc.nextInt();
    long K = sc.nextLong();

    if (K % 2 == 0) {
      System.out.println(A-B);
    } else {
      System.out.println(B-A);
    }
  }
}
