import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        while(leitor.hasNext()){
            int n = leitor.nextInt();
            int m = leitor.nextInt();
            int resu=0;
            for(int i=0;i<n;i++){
                int input = leitor.nextInt();
                if(i>=n-m){
                    resu+=input;
                }
            }
            System.out.println(resu);
	}
    }
}