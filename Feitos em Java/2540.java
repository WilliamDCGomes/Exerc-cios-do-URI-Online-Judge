import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        while (leitor.hasNext()) {
            int times = leitor.nextInt();
            int[] imput = new int [times];
            int impeachment = 0;
            for(int i = 0; i < times; i++) {
                imput[i]=leitor.nextInt();
                if (imput[i] == 1) {
                    impeachment++;
                }
            }
            double n = (double) (times * 2) / 3;
            if (impeachment >=  n) {
                System.out.println("impeachment");
            }
            else {
                System.out.println("acusacao arquivada");
            }
        }
    }
}