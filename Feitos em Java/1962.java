import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner(System.in);
        int n=entrada.nextInt();
        int vet[]=new int [n];
        for(int x=0;x<n;x++){
            vet[x]=entrada.nextInt();
            int ver=vet[x]-2015;
            if(ver==0){
                System.out.println("1 A.C.");
            }
            else if(ver>0){
                System.out.println((ver+1)+" A.C.");
            }
            else{
                System.out.println((ver*(-1))+" D.C.");
            }
        }
    }
}