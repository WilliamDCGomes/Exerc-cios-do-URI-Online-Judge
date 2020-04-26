import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        int times = leitor.nextInt();
	for(int i=0;i<times;i++){
            int insideX = leitor.nextInt();
            int insideY = leitor.nextInt();
            int mainX = leitor.nextInt();
            int mainY = leitor.nextInt();
            if((insideX<mainX&&insideY<mainY)||(insideX<mainY&&insideY<mainX)){
                System.out.println("S");
            }
            else{
                System.out.println("N");
            }
	}
    }
}