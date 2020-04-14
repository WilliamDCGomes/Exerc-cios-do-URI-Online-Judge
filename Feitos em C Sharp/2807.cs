using System;
namespace ConsoleApp12 {
    class Program {
        static void Main(string[] args) {
			int[] vet = new int[46];
			int cont = 0;
			for (int a = 0; a < 46; a++) {
				vet[a] = 0;
			}
			vet[1] = 1;
			for (int a = 2; a < 46; a++) {
				vet[a] = vet[a - 1] + vet[a - 2];
			}
			int num = int.Parse(Console.ReadLine());
			for (int a = num; a > 0; a--) {
				if (a > 1) {
					Console.Write(vet[a] + " ");
				}
				else {
					Console.WriteLine(vet[a]);
				}
				cont++;
			}
		}
    }
}
