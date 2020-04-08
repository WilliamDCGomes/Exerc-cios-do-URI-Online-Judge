import java.io.IOException;
import java.util.Scanner; 
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner(System.in);
        int a=entrada.nextInt(),b=entrada.nextInt(),d=0,vet[]=new int[b];
        for(int x=0;x<b;x++){
            vet[x]=entrada.nextInt();
        }
        for(int x=0;x<b-1;x++){
            int comp=vet[x]-vet[x+1];
            if(comp<0){
                comp*=(-1);
            }
            if(comp<=a){
                d++;
            }
        }
        if(d+1==b){
            System.out.println("YOU WIN");
        }
        else{
            System.out.println("GAME OVER");
        }
    }
}