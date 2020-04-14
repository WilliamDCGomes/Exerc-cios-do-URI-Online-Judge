import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner (System.in);
	int[] vet = new int [46];
        int cont=0;
        for(int a=0;a<46;a++){
            vet[a]=0;
        }
        vet[1]=1;
        for(int a=2;a<46;a++){
            vet[a]=vet[a-1]+vet[a-2];
        }
        int num=entrada.nextInt();
        for(int a=num;a>0;a--){
            if(a>1){
                System.out.printf(vet[a] + " ");
            }
            else{
                System.out.println(vet[a]);
            }
            cont++;
	}
    }
}