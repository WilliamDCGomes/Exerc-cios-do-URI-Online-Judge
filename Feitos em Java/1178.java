import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner(System.in);
        double vet[]=new double [100];
        vet[0]=entrada.nextDouble();
        for(int z=0;z<99;z++){
            System.out.printf("N[%d] = %.4f\n",z,vet[z]);
            vet[z+1]=vet[z]/2.0;
        }
        vet[99]=vet[98]/2.0;
        System.out.printf("N[99] = %.4f\n",vet[99]);
    }
}