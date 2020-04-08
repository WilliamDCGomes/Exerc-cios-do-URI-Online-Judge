import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner (System.in);
        int vet[]=new int[5];
    	for(int x=0;x<5;x++){
            vet[x]=entrada.nextInt();
    	}
    	int tot=((300*vet[0])+(1500*vet[1])+(600*vet[2])+(1000*vet[3])+(150*vet[4]))+225;
    	System.out.println(tot);
    }
}