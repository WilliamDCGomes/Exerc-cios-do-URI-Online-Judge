import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner (System.in);
        int a=entrada.nextInt();
	int aux=0;
	for(int x=0;x<a;x++){
            int b=entrada.nextInt();
            if(b>aux){
                aux=b;
            }
	}
	aux++;
        System.out.println(aux);
    }
}