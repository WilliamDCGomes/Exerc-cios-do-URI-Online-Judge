import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner(System.in);
        double a=entrada.nextDouble();
        if (a>25.00001&&a<=50.0000000){
            System.out.println("Intervalo (25,50]");
        }
        if(a>=0&&a<=25.0000){
            System.out.println("Intervalo [0,25]");
        }
        if(a>50.00000001&&a<=75.0000000){
            System.out.println("Intervalo (50,75]");
        }
        if(a>75.00000001&&a<=100.0000000){
            System.out.println("Intervalo (75,100]");
        }
        if(a<0||a>100.00000001){
            System.out.println("Fora de intervalo");
        }
    }
}