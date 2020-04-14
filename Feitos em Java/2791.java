import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner (System.in);
	int [] vet=new int [4];
        for(int x=0;x<4;x++){
            vet[x]=entrada.nextInt();
            if(vet[x]==1){
                System.out.println(x+1);
            }
	}
    }
}