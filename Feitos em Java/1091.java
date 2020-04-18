import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        while(true){
            int quant = leitor.nextInt();
            if(quant==0){
                break;
            }
            int dX = leitor.nextInt();
            int dY = leitor.nextInt();
            for(int i=0;i<quant;i++){
                int x = leitor.nextInt();
                int y = leitor.nextInt();
                if(x==dX||y==dY){
                    System.out.println("divisa");
                }
                else if(x>dX&&y>dY){
                    System.out.println("NE");
                }
                else if(x<dX&&y>dY){
                    System.out.println("NO");
                }
                else if(x<dX&&y<dY){
                    System.out.println("SO");
                }
                else if(x>dX&&y<dY){
                    System.out.println("SE");
                }
            }
	}
    }
}