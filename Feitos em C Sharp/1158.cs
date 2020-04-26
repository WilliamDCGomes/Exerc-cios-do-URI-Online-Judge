using System;
namespace ConsoleApp15 {
    class Program {
        static void Main(string[] args) {
			int soma = 0;
			int vezes = int.Parse(Console.ReadLine());
			for (int z = 0; z < vezes; z++) {
				string[] vet = Console.ReadLine().Split();
				int x = int.Parse(vet[0]);
				int y = int.Parse(vet[1]);
				if (x % 2 == 0) {
					x++;
					for (int i = 0; i < y; i++) {
						soma += x;
						x += 2;
					}
				}
				else {
					for (int i = 0; i < y; i++) {
						soma += x;
						x += 2;
					}
				}
				Console.WriteLine(soma);
				soma = 0;
			}
		}
    }
}