import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        while(leitor.hasNext()){
            int n = leitor.nextInt();
            int m = leitor.nextInt();
            int[][] city=new int [n][m];
            int myPosiX=0,myPosiY=0,anaPosiX=0,anaPosiY=0,dist=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    city[i][j]=leitor.nextInt();
                    if(city[i][j]==1){
                        myPosiX=i;
                        myPosiY=j;
                    }
                    else if(city[i][j]==2){
                        anaPosiX=i;
                        anaPosiY=j;
                    }
                }
            }
            if(myPosiX>anaPosiX){
                dist+=(myPosiX - anaPosiX);
            }
            else{
                dist+=(anaPosiX - myPosiX);
            }
            if(myPosiY>anaPosiY){
                dist+=(myPosiY - anaPosiY);
            }
            else{
                dist+=(anaPosiY - myPosiY);
            }
            System.out.println(dist);
	}
    }
}