import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner(System.in);
        int casos;
        casos=entrada.nextInt();
        int cod[]=new int[casos];
        int quant[]=new int[casos];
        double soma=0;
        for(int x=0;x<casos;x++){
            cod[x]=entrada.nextInt();
            quant[x]=entrada.nextInt();
        }
        for(int x=0;x<casos;x++){
            if(cod[x]==1001){
                soma+=quant[x]*1.5;
            }
            else if(cod[x]==1002){
                soma+=quant[x]*2.5;
            }
            else if(cod[x]==1003){
                soma+=quant[x]*3.5;
            }
            else if(cod[x]==1004){
                soma+=quant[x]*4.5;
            }
            else if(cod[x]==1005){
                soma+=quant[x]*5.5;
            }
        }
        System.out.printf("%.2f\n",soma);
    }
}