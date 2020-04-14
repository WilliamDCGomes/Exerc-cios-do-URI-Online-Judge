import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner (System.in);
	for(int x=0;x<10;x++){
            String name = entrada.nextLine();
            if(x==2||x==6||x==8){
                  System.out.println(name);
            }
	}
    }
}