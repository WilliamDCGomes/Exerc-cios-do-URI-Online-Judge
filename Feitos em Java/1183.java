import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner(System.in);
        String var=entrada.nextLine();
        double matriz[][]=new double [12][12];
        double soma=0.0;
        double media;
        double vezes=0.0;
        for(int x=0;x<12;x++){
            for(int y=0;y<12;y++){
                matriz[x][y]=entrada.nextDouble();
            }
        }
        for(int x=0;x<12;x++){
            for(int y=0;y<12;y++){
                if(y>x){
                    soma+=matriz[x][y];
                    vezes++;
                }
            }
        }
        String ver = "M";
        if(var.equals(ver)){
            media=soma/vezes;
            System.out.printf("%.1f\n",media);
        }
        else{
            System.out.printf("%.1f\n",soma);
        }
    }
}