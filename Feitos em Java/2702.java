import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        int[] pedidos = new int [3];
        int[] refeicoes = new int [3];
        int faltou=0;
        refeicoes[0] = leitor.nextInt();
        refeicoes[1] = leitor.nextInt();
        refeicoes[2] = leitor.nextInt();
        pedidos[0] = leitor.nextInt();
        pedidos[1] = leitor.nextInt();
        pedidos[2] = leitor.nextInt();
	for(int i=0;i<3;i++){
            if(pedidos[i]>refeicoes[i]){
                faltou+=(pedidos[i]-refeicoes[i]);
            }
	}
        System.out.println(faltou);
    }
}