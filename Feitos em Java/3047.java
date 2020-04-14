import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner (System.in);
        int m=entrada.nextInt();
	int a=entrada.nextInt();
        int b=entrada.nextInt();
	int c=m-a-b;
	if(c>a&&c>b){
            System.out.println(c);
	}
	else if(a>b&&a>c){
            System.out.println(a);
	}
	else if(b>a&&b>c){
            System.out.println(b);
	}
	else if(b==c&&b>a){
            System.out.println(b);
	}
	else if(a==c&&a>b){
            System.out.println(a);
	}
	else if(b==a&&b>c){
            System.out.println(b);
	}
    }
}