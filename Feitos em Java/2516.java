import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        while(leitor.hasNext()){
            double s = leitor.nextDouble();
            int va = leitor.nextInt();
            int vb = leitor.nextInt();
            double temp=0;
            if(va>vb){
                temp=s/(va-vb);
                System.out.printf("%.2f\n",temp);
            }
            else{
                System.out.println("impossivel");
            }
	}
    }
}