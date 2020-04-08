import java.io.IOException;
import java.util.Scanner; 
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner(System.in);
        while(true){
            int aumen=2,val=2,aux=1;
            int entr=entrada.nextInt();
            int [][] matriz= new int [entr][entr];
            if(entr==0){
                break;
            }
            for(int x=0;x<entr;x++){
                for(int y=0;y<entr;y++){
                    matriz[x][y]=1;
                }
            }
            while(true){
                if(entr-aumen>0){
                    for(int x=aux;x<aux+entr-aumen;x++){
                        for(int y=aux;y<aux+entr-aumen;y++){
                            matriz[x][y]=val;
                        }
                    }
                    aux++;
                    val++;
                    aumen+=2;
                }
                else{
                    break;
                }
            }
            for(int x=0;x<entr;x++){
                for(int y=0;y<entr;y++){
                        if(y==0){
                        System.out.printf("%3d",matriz[x][y]);
                    }
                    else if(y==entr-1){
                        System.out.printf("%4d\n",matriz[x][y]);
                    }
                    else{
                        System.out.printf("%4d",matriz[x][y]);
                    }
                    if(entr==1){
                        System.out.printf("\n");
                    }
                }
            }
            System.out.printf("\n");
        }
    }
}