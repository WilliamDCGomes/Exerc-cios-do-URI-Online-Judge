import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        while(leitor.hasNext()){
            int times = leitor.nextInt();
            double[] vet = new double [times];
            double aux;
            double record=0.0;
            for(int i=0;i<times;i++){
                vet[i]=leitor.nextInt();
                aux=leitor.nextInt();
                double sub = aux/vet[i];
                if(i==0){
                    record = sub;
                    System.out.println(i+1);
                }
                else if(sub>record){
                    record = sub;
                    System.out.println(i+1);
                }
            }
	}
    }
}