import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner (System.in);
    	String regiao = entrada.nextLine();
        if("para".equals(regiao)||"roraima".equals(regiao)||"acre".equals(regiao)||"amapa".equals(regiao)||"amazonas".equals(regiao)||"rondonia".equals(regiao)||"tocantins".equals(regiao)){
            System.out.println("Regiao Norte");
	}
	else{
            System.out.println("Outra regiao");
	}
    }
}