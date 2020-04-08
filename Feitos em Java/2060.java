import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner(System.in);
        int a=entrada.nextInt();
        int vet[]=new int [a];
        int cont2=0,cont3=0,cont4=0,cont5=0;
        for(int x=0;x<a;x++){
            vet[x]=entrada.nextInt();
        }
        for(int x=0;x<a;x++){
            if(vet[x]%2==0){
                cont2++;
            }
            if(vet[x]%3==0){
                cont3++;
            }
            if(vet[x]%4==0){
                cont4++;
            }
            if(vet[x]%5==0){
                cont5++;
            }
        }
        System.out.println(cont2+" Multiplo(s) de 2");
        System.out.println(cont3+" Multiplo(s) de 3");
        System.out.println(cont4+" Multiplo(s) de 4");
        System.out.println(cont5+" Multiplo(s) de 5");
    }
}