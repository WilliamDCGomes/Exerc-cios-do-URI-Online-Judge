import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner(System.in);
        int num1=entrada.nextInt();
        int num2=entrada.nextInt(),a;
        a=num1+num2;
        System.out.println("SOMA = "+a);
    }
}