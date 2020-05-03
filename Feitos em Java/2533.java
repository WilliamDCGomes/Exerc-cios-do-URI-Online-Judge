import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        while(leitor.hasNext()){
            int times = leitor.nextInt();
            double dom=0,dem=0;
            for(int i=0;i<times;i++){
                int n = leitor.nextInt();
                int c = leitor.nextInt();
                dom+= (n*c);
                dem+= (c*100);
            }
            double resu = dom/dem;
            System.out.printf("%.4f\n",resu);
	}
    }
}