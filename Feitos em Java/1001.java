import java.io.IOException;
import java.util.Scanner;
public class Main {
     public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner (System.in);
        int n1=entrada.nextInt();
        int n2=entrada.nextInt();
        int m=n1+n2;
        System.out.println("X = "+m);
    } 
}