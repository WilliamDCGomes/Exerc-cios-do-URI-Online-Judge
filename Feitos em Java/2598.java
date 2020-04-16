import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        int a = leitor.nextInt();
	for(int i=0;i<a;i++){
            int n=leitor.nextInt();
            int m=leitor.nextInt();
            int quant=0;
            while(n>0){
                n-=m;
                quant++;
            }
            System.out.println(quant);
	}
    }
}