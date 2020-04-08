import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner(System.in);
        int ent=entrada.nextInt();
        int aux=0,pega=0;
        int [] vet=new int [ent];
        for(int x=0;x<ent;x++){
            vet[x]=entrada.nextInt();
            if(x==0){
                aux=vet[x];
                pega=x+1;
            }
            else if(aux>vet[x]){
                aux=vet[x];
                pega=x+1;
            }
        }
        System.out.printf("%d\n",pega);
    }
}