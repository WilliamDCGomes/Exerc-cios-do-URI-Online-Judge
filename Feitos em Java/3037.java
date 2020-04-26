import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        int times = leitor.nextInt();
	for(int i=0;i<times;i++){
            int quantJoao=0,quantMaria=0;
            for(int j=0;j<3;j++){
                int x = leitor.nextInt();
                int d = leitor.nextInt();
                quantJoao+=(x*d);
            }
            for(int j=0;j<3;j++){
                int x = leitor.nextInt();
                int d = leitor.nextInt();
                quantMaria+=(x*d);
            }
            if(quantJoao>quantMaria){
                System.out.println("JOAO");
            }
            else{
                System.out.println("MARIA");
            }
	}
    }
}