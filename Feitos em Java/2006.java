import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner(System.in);
        int cha=entrada.nextInt();
        int vet[]=new int [5];
        for(int x=0;x<5;x++){
            vet[x]=entrada.nextInt();
        }
        int vezes=0;
        for(int x=0;x<5;x++){
            if(vet[x]==cha){
                vezes++;
            }
        }
        System.out.println(vezes);
    }
}