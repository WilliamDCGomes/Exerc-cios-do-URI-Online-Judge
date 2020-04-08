import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        double c=0,d=0,e=0;
        Scanner entrada = new Scanner(System.in);
        double a=entrada.nextDouble();
        double b=entrada.nextDouble();
        d=a*0.35;
        e=b*0.75;
        c=((d+e)*10)/11;
        System.out.printf("MEDIA = %.5f\n",c);
    }
}