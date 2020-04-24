import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        int pictures = leitor.nextInt();
        int buy = leitor.nextInt();
        int cont=0;
        int[] vet = new int [buy];
        int[] memo = new int [buy];
	for(int i=0;i<buy;i++){
            vet[i]=leitor.nextInt();
            memo[i]=vet[i];
	}
	for(int i=0;i<buy;i++){
            for(int j=i+1;j<buy;j++){
                if(vet[i]==memo[j]&&memo[j]!=-1){
                    memo[j]=-1;
                }
            }
	}
	for(int i=0;i<buy;i++){
            if(memo[i]!=-1){
                cont++;
            }
	}
        System.out.println(pictures-cont);
    }
}