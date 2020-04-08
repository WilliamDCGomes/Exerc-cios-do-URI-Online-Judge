import java.io.IOException;
import java.util.Scanner; 
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner(System.in);
        int a=entrada.nextInt(),z;
        int pa[]=new int [a];
        int pb[]=new int [a],cont=0;
        double g1[]=new double[a];
        double g2[]=new double[a];
        double conta=0.0,contb=0.0;
        for(z=0;z<a;z++){
            pa[z]=entrada.nextInt();
            pb[z]=entrada.nextInt();
            g1[z]=entrada.nextDouble();
            g2[z]=entrada.nextDouble();
        }
	for(z=0;z<a;z++){
            while(pa[z]<=pb[z]){
                conta=pa[z]*(g1[z]/100);
                contb=pb[z]*(g2[z]/100);
                pa[z]+=conta;
                pb[z]+=contb;
                cont++;
                if(cont==101){
                    pa[z]=pb[z]+1;
                }
            }
            if(cont>100){
                System.out.println("Mais de 1 seculo.");
            }
            else{
                System.out.printf("%d anos.\n",cont);
            }
            cont=0;
        }    
    }
}