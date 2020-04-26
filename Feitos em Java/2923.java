import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        while(leitor.hasNext()){
            int t = leitor.nextInt();
            int a = leitor.nextInt();
            int w = leitor.nextInt();
            int c = leitor.nextInt();
            double veri = (a*100)/t;
            if(veri>=w&&veri<c){
                 System.out.println("warning");
            }
            else if(veri>=c){
                System.out.println("critical");
            }
            else{
                System.out.println("OK");
            }
	}
    }
}