using System;
namespace ConsoleApp6 {
    class Program {
        static void Main(string[] args) {
			int pictures = int.Parse(Console.ReadLine());
			int cont = 0;
			int buy = int.Parse(Console.ReadLine());
			int[] vet = new int[buy];
			int[] memo = new int[buy];
			for (int i = 0; i < buy; i++) {
				vet[i] = int.Parse(Console.ReadLine());
				memo[i] = vet[i];
			}
			for (int i = 0; i < buy; i++) {
				for (int j = i + 1; j < buy; j++) {
					if (vet[i] == memo[j] && memo[j] != -1) {
						memo[j] = -1;
					}
				}
			}
			for (int i = 0; i < buy; i++) {
				if (memo[i] != -1) {
					cont++;
				}
			}
			Console.WriteLine(pictures - cont);
		}
    }
}
