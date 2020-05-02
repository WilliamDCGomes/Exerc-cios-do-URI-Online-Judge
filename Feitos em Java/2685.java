import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        while (leitor.hasNext()) {
            int x = leitor.nextInt();
            if((x>=0&&x<90)||x==360){
                System.out.println("Bom Dia!!");
            }
            else if(x>=90&&x<180){
                System.out.println("Boa Tarde!!");
            }
            else if(x>=180&&x<270){
                System.out.println("Boa Noite!!");
            }
            else{
                System.out.println("De Madrugada!!");
            }
        }
    }
}