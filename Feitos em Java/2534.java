import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        while(leitor.hasNext()){
            int n = leitor.nextInt();
            int q = leitor.nextInt();
            int[] vet = new int [n];
            int[] aux = new int [n];
            for(int i=0;i<n;i++){
                vet[i]=leitor.nextInt();
            }
            int aux2;
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(vet[i]<vet[j]){
                        aux2=vet[i];
                        vet[i]=vet[j];
                        vet[j]=aux2;
                    }
                }
            }
            for(int i=0;i<q;i++){
                int p = leitor.nextInt();
                System.out.println(vet[p-1]);
            }
	}
    }
}