import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner(System.in);
        int a=entrada.nextInt();
        double vet[]=new double[a];
        int insc[]=new int[a],vezes=0;
        for(int x=0;x<a;x++){
            insc[x]=entrada.nextInt();
            vet[x]=entrada.nextDouble();
            if(vet[x]>=8.0){
                vezes++;
            }
        }
        double valores[]=new double[vezes];
        int i[]=new int [vezes],z=0;
        for(int x=0;x<a;x++){
            if(vet[x]>=8.0){
                valores[z]=vet[x];
                i[z]=insc[x];
                z++;
            }
        }
        if(vezes==0){
            System.out.println("Minimum note not reached");
        }
        else{
            int maior;
            if(vezes==1){
                maior=i[0];
            }
            else{
                double comp=valores[0];
                maior=i[0];
                for(int x=1;x<vezes;x++){
                    if(comp>valores[x]){
                        continue;
                    }
                    else{
                        maior=i[x];
                        comp=valores[x];
                    }
                }
            }
            System.out.println(maior);
        }
    }
}