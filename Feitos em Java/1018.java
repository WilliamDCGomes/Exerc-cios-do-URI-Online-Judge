import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner entrada = new Scanner(System.in);
        int valor1=0, contcem=0,contcinquenta=0,contvinte=0,contdez=0,contcinco=0,contdois=0,contum=0;
        int valor=entrada.nextInt();
        valor1=valor;
        while (valor>=100){
            valor=valor-100;
            contcem=contcem+1;
        }
        while (valor>=50&&valor<100){
            valor=valor-50;
            contcinquenta=contcinquenta+1;
        }
        while (valor>=20&&valor<50){
            valor=valor-20;
            contvinte=contvinte+1;
        }
        while (valor>=10&&valor<20){
            valor=valor-10;
            contdez=contdez+1;
        }
        while (valor>=5&&valor<10){
            valor=valor-5;
            contcinco=contcinco+1;
        }
        while (valor>=2&&valor<5){
            valor=valor-2;
            contdois=contdois+1;
        }
        while(valor>0&&valor<2){
            valor=valor-1;
            contum=contum+1;
        }
        System.out.printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",valor1,contcem,contcinquenta,contvinte,contdez,contcinco,contdois,contum);
    }
}