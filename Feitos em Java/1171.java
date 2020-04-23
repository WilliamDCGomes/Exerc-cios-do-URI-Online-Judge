import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        int many = leitor.nextInt();
        int[] vet = new int [many];
        int[] aux = new int [many];
        int[] aux2 = new int [many];
	for(int i=0;i<many;i++){
            vet[i] = leitor.nextInt();
	}
	int times=0;
	while(times<many){
            int comp=2001,ref=0;
            for(int i=0;i<many;i++){
                if(comp>vet[i]&&vet[i]>0){
                    comp=vet[i];
                    ref=i;
                }
            }
            vet[ref]=0;
            aux[times]=comp;
            aux2[times]=comp;
            times++;
	}
	int request=0;
	for(int i=0;i<many;i++){
            for(int j=0;j<many;j++){
                if(aux[i]==aux2[j]){
                    request++;
                }
            }
            if(i>0&&aux[i]==aux[i-1]){
                request=0;
                continue;
            }
            System.out.printf("%d aparece %d vez(es)\n",aux[i],request);
            request=0;
	}
    }
}