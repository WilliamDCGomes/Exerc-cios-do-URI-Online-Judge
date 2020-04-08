import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner(System.in);
        int aux;
        double y=entrada.nextDouble();
        int n=(int) y;
        y=100*y;
        int aux1=(int) y;
        System.out.println("NOTAS:");
        System.out.println((n/100)+" nota(s) de R$ 100.00");
        aux=n%100;
        System.out.println((aux/50)+" nota(s) de R$ 50.00");
        aux=aux%50;
        System.out.println((aux/20)+" nota(s) de R$ 20.00");
        aux=aux%20;
        System.out.println((aux/10)+" nota(s) de R$ 10.00");
        aux=aux%10;
        System.out.println((aux/5)+" nota(s) de R$ 5.00");
        aux=aux%5;
        System.out.println((aux/2)+" nota(s) de R$ 2.00");
        aux=aux%2;
        System.out.println("MOEDAS:");
        System.out.println((aux)+" moeda(s) de R$ 1.00");
        aux1=aux1%100;
        System.out.println((aux1/50)+" moeda(s) de R$ 0.50");
        aux1=aux1%50;
        System.out.println((aux1/25)+" moeda(s) de R$ 0.25");
        aux1=aux1%25;
        System.out.println((aux1/10)+" moeda(s) de R$ 0.10");
        aux1=aux1%10;
        System.out.println((aux1/5)+" moeda(s) de R$ 0.05");
        aux1=aux1%5;
        System.out.println((aux1)+" moeda(s) de R$ 0.01"); 
    }
}