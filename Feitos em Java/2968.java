import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner (System.in);
        int voltas=entrada.nextInt();
        int placas=entrada.nextInt();
    	double dist;
    	dist=voltas*placas;
    	for(int x=0;x<9;x++){
            double aux=((x+1)*dist)/10;
            int aux2=(int) aux;
            if(aux>aux2&&x!=8){
                    System.out.printf("%d ",aux2+1);
            }
            else if(x!=8){
                    System.out.printf("%d ",aux2);
            }
            else if(aux>aux2&&x==8){
                    System.out.printf("%d\n",aux2+1);
            }
            else{
                    System.out.printf("%d\n",aux2);
            }
    	}
    }
}