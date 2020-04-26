using System;

namespace ConsoleApp10 {
    class Program {
        static void Main(string[] args) {
			int dimen = int.Parse(Console.ReadLine());
			int[,] vet = new int[dimen, dimen];
			int[] values = new int[dimen];
			int cordX=0,cordY=0,writeValue=0,wrongValue=0;
			for(int i=0;i<dimen;i++){
				values[i]=0;
			}
			for(int i=0;i<dimen;i++){
				string[] aux = Console.ReadLine().Split();
				for(int j=0;j<dimen;j++){
					vet[i,j]=int.Parse(aux[j]);
					values[i]+=vet[i,j];
				}
			}
			for(int i=0;i<dimen;i++){
				if(i!=dimen-1&&values[i]!=values[i + 1]){
					cordX=i;
				}
				else if(i==dimen-1&&values[i]!=values[i - 1]&&values[i]!=values[i - 2]){
					cordX=i;
				}
			}
			for(int i=0;i<dimen;i++){
				values[i]=0;
			}
			for(int i=0;i<dimen;i++){
				for(int j=0;j<dimen;j++){
					values[i]+=vet[j,i];
				}
			}
			for(int i=0;i<dimen;i++){
				if(i!=dimen-1&&values[i]!=values[i + 1]){
					cordY=i;
					wrongValue=values[i];
				}
				else if(dimen>2&&i==dimen-1&&values[i]!=values[i - 1]&&values[i]!=values[i - 2]){
					cordY=i;
					wrongValue=values[i];
				}
				else{
					writeValue=values[i];
				}
			}
			int wrongNumber = vet[cordX,cordY];
			int writeNumber = writeValue - (wrongValue - wrongNumber);
			Console.WriteLine(writeNumber + " " + wrongNumber);
        }
    }
}
