import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        int soma=0;
        int vezes = leitor.nextInt();
        for(int z=0;z<vezes;z++){
	    int x = leitor.nextInt();
            int y = leitor.nextInt();
	    if(x%2==0){
	    	x++;
	    	for(int i=0;i<y;i++){
                    soma+=x;
                    x+=2;
                }
            }
            else{
                for(int i=0;i<y;i++){
                    soma+=x;
                    x+=2;
                }
            } 
            System.out.println(soma);
            soma=0;
	}
    }
}