import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        int experience=1;
	while(true){
            int ciclos=0;
            int n = leitor.nextInt();
            if(n==-1){
                break;
            }
            while(n>1){
                ciclos++;
                n-=2;
            }
            System.out.printf("Experiment %d: %d full cycle(s)\n",experience,ciclos);
            experience++;
	}
    }
}