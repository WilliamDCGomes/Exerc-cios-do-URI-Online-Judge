import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner(System.in);
        int a=entrada.nextInt(),b=entrada.nextInt();
        String name;
        for(int x=0;x<b;x++){
            name=entrada.nextLine();
            if (name.equals("fechou")){
                a++;
            }
            else{
                a--;
            }
        }
        System.out.println(a); 
    }
}