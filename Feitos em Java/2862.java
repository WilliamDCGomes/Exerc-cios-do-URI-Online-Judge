import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner (System.in);
    	int a = entrada.nextInt();
        for(int x=0;x<a;x++){
            int b = entrada.nextInt();
            if(b>8000){
                System.out.println("Mais de 8000!");
            }
            else{
                System.out.println("Inseto!");
            }
	}
    }
}