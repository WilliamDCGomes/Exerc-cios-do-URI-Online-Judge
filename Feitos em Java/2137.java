import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        while(leitor.hasNext()){
            int times = leitor.nextInt();
            int[] vet = new int [times];
            int[] aux = new int [times];
            for(int i=0;i<times;i++){
                vet[i]=leitor.nextInt();
            }
            for(int i=0;i<times;i++){
                for(int j=i+1;j<times;j++){
                    if(vet[i]>vet[j]){
                        aux[i]=vet[i];
                        vet[i]=vet[j];
                        vet[j]=aux[i];
                    }
                }
            }
            int[] auxVet = new int [times];
            for(int i=0;i<times;i++){
                int size=0;
                auxVet[i]=vet[i];
                while(auxVet[i]>0){
                    auxVet[i]/=10;
                    size++;
                }
                if(size==1){
                    System.out.println("000"+vet[i]);
                }
                else if(size==2){
                    System.out.println("00"+vet[i]);
                }
                else if(size==3){
                    System.out.println("0"+vet[i]);
                }
                else if(vet[i]==0){
                    System.out.println("0000");
                }
                else{
                    System.out.println(vet[i]);
                }
            }
	}
    }
}