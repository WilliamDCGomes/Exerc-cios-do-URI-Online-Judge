import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        int p1 = leitor.nextInt();
        int c1 = leitor.nextInt();
        int p2 = leitor.nextInt();
        int c2 = leitor.nextInt();
        if (p1 * c1 == p2 * c2) {
            System.out.println("0");
        }
        else if (p1 * c1 > p2 * c2) {
            System.out.println("-1");
        }
        else {
            System.out.println("1");
        }
    }
}