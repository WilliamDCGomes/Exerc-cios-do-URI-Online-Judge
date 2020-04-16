import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        int quant=leitor.nextInt();
	for(int i=0;i<quant;i++){
            int pegaEsfera=0;
            int esfera=leitor.nextInt();
            for(int j=esfera;j>0;j--){
                int divisores=0;
                for(int z=j;z>0;z--){
                    if(j%z==0){
                        divisores++;
                    }
                }
                if(divisores%2==0){
                    pegaEsfera++;
                }
            }
            System.out.println(pegaEsfera);
	}
    }
}