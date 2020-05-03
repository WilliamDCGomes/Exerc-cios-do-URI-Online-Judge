import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        int test = leitor.nextInt();
	for(int i=0;i<test;i++){
            int num1 = leitor.nextInt();
            int num2 = leitor.nextInt();
            int sum=num1+num2;
            switch(sum){
                case 1:
                    System.out.println("P.Y.N.G.");
                    break;
                case 2:
                    System.out.println("DNSUEY!");
                    break;
                case 3:
                    System.out.println("SERVERS");
                    break;
                case 4:
                    System.out.println("HOST!");
                    break;
                case 5:
                    System.out.println("CRIPTONIZE");
                    break;
                case 6:
                    System.out.println("OFFLINE DAY");
                    break;
                case 7:
                    System.out.println("SALT");
                    break;
                case 8:
                    System.out.println("ANSWER!");
                    break;
                case 9:
                    System.out.println("RAR?");
                    break;
                case 10:
                    System.out.println("WIFI ANTENNAS");
                    break;
                default:
                    System.out.println("PROXYCITY");
                    break;
            }
	}
    }
}