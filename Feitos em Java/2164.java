import java.io.IOException;
import static java.lang.Math.pow;
import static java.lang.Math.sqrt;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner(System.in);
        double n1=(1+sqrt(5))/2,n2=(1-sqrt(5))/2;
    	int n=entrada.nextInt();
    	double total= (pow(n1,n)-pow(n2,n))/sqrt(5);
        System.out.printf("%.1f\n",total);
    }
}