import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner(System.in);
        double num1=entrada.nextDouble();
        double v =3.14159,area;
        area=v*num1*num1;
        System.out.printf("A=%.4f\n",area);
    }
}