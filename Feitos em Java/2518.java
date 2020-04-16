import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        while(leitor.hasNext()){
            int degraus = leitor.nextInt();
            int h=0,c=0,l=0;
            h = leitor.nextInt();
            c = leitor.nextInt();
            l = leitor.nextInt();
            double compRampa=Math.sqrt(Math.pow(c,2)+Math.pow(h,2));
            compRampa*=degraus;
            double area=compRampa*l;
            System.out.printf("%.4f\n",area/10000);
        }
    }
}