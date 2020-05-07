import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        while(leitor.hasNext()){
            int month = leitor.nextInt();
            int day = leitor.nextInt();
            if(month==12&&day==25){
                System.out.println("E natal!");
            }
            else if(month==12&&day==24){
                System.out.println("E vespera de natal!");
            }
            else if(month==12&&day>25){
                System.out.println("Ja passou!");
            }
            else{
                switch (month) {
                    case 12:
                        System.out.println("Faltam " + (25-day) + " dias para o natal!");
                        break;
                    case 11:
                        System.out.println("Faltam "+(25+30-day)+" dias para o natal!");
                        break;
                    case 10:
                        System.out.println("Faltam "+(25+30+31-day)+" dias para o natal!");
                        break;
                    case 9:
                        System.out.println("Faltam "+(25+30+31+30-day)+" dias para o natal!");
                        break;
                    case 8:
                        System.out.println("Faltam "+(25+30+31+30+31-day)+" dias para o natal!");
                        break;
                    case 7:
                        System.out.println("Faltam "+(25+30+31+30+31+31-day)+" dias para o natal!");
                        break;
                    case 6:
                        System.out.println("Faltam "+(25+30+31+30+31+31+30-day)+" dias para o natal!");
                        break;
                    case 5:
                        System.out.println("Faltam "+(25+30+31+30+31+31+30+31-day)+" dias para o natal!");
                        break;
                    case 4:
                        System.out.println("Faltam "+(25+30+31+30+31+31+30+31+30-day)+" dias para o natal!");
                        break;
                    case 3:
                        System.out.println("Faltam "+(25+30+31+30+31+31+30+31+30+31-day)+" dias para o natal!");
                        break;
                    case 2:
                        System.out.println("Faltam "+(25+30+31+30+31+31+30+31+30+31+29-day)+" dias para o natal!");
                        break;
                    default:
                        System.out.println("Faltam "+(25+30+31+30+31+31+30+31+30+31+29+31-day)+" dias para o natal!");
                        break;
                }
            }
	}
    }
}