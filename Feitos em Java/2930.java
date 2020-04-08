import java.io.IOException;
import java.util.Scanner; 
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner (System.in);
        int a=entrada.nextInt(),b=entrada.nextInt();
    	if(a>b){
            System.out.println("Eu odeio a professora!");
    	}
    	else if(b-3>=a){
            System.out.println("Muito bem! Apresenta antes do Natal!");
    	}
    	else{
            System.out.println("Parece o trabalho do meu filho!");
            if(b+2<=24){
                System.out.println("TCC Apresentado!");
            }
            else{
                System.out.println("Fail! Entao eh nataaaaal!");
            }
    	}
    }
}