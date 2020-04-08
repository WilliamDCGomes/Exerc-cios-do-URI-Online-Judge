import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner(System.in);
        double valorini=entrada.nextDouble();
        double valorfini=entrada.nextDouble();
        double porc=((valorfini-valorini)/valorini)*100;
        System.out.printf("%.2f%%\n",porc);
    }
}