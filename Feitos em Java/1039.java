package pkg1039;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        while (leitor.hasNext())
        {
            int raio1 = leitor.nextInt();
            int x1 = leitor.nextInt();
            int y1 = leitor.nextInt();
            int raio2 = leitor.nextInt();
            int x2 = leitor.nextInt();
            int y2 = leitor.nextInt();
            if (raio1 >= raio2 && Math.pow((x1 - x2), 2) + Math.pow((y1 - y2), 2) <= Math.pow((raio1 - raio2), 2))
                System.out.println("RICO");
            else
                System.out.println("MORTO");
        }
    }
}
