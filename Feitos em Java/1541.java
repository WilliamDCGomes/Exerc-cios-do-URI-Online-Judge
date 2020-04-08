import java.io.IOException;
import static java.lang.Math.sqrt;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner (System.in);
        int x=0;
    	while(true){
    		int a=entrada.nextInt();
    		if(a==0){
    			break;
    		}
    		int b=entrada.nextInt();
                    int c=entrada.nextInt();
    		int resp = (int) sqrt((a*b*100)/c);
    		System.out.println(resp);
    	}
    }
}