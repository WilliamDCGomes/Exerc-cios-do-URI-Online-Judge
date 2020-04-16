import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        int n = leitor.nextInt();
        int a = leitor.nextInt();
        int b = leitor.nextInt();
        if(n>=a+b){
            System.out.println("Farei hoje!");
	}
	else{
            System.out.println("Deixa para amanha!");
	}
    }
}