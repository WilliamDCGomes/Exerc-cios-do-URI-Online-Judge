import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner (System.in);
        int casos=entrada.nextInt();
	for(int i=0;i<casos;i++){
            int h=entrada.nextInt();
            int d=entrada.nextInt();
            int g=entrada.nextInt();
            if(h>=200&&h<=300){
                if(d>=50){
                    if(g>=150){
                        System.out.println("Sim");
                    }
                    else{
                        System.out.println("Nao");
                    }
                }
                else{
                    System.out.println("Nao");
                }
            }
            else{
                System.out.println("Nao");
            }
	}
    }
}