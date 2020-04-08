import java.io.IOException;
import java.util.Scanner; 
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner (System.in);
        int ent=entrada.nextInt();
    	int[] vet;
            vet = new int[ent];
    	for(int x=0;x<ent;x++){
            vet[x]=entrada.nextInt();
    	}
    	int igual=0,maior=0;
    	for(int x=1;x<ent;x++){
            if(vet[0]==vet[x]){
                igual++;
            }
    	}
    	if(igual==ent+1){
            System.out.println("S");
    	}
    	else{
            for(int x=1;x<ent;x++){
                if(vet[0]<vet[x]){
                        maior++;
                }
            }
            if(maior!=0){
                System.out.println("N");
            }
            else{
                System.out.println("S");
            }
    	}
    }
}