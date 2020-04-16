using System;
namespace ConsoleApp26 {
	class Program {
		static void Main(string[] args) {
			int quant = int.Parse(Console.ReadLine());
			for (int i = 0; i < quant; i++) {
				int pegaEsfera = 0;
				int esfera = int.Parse(Console.ReadLine());
				for (int j = esfera; j > 0; j--) {
					int divisores = 0;
					for (int z = j; z > 0; z--) {
						if (j % z == 0) {
							divisores++;
						}
					}
					if (divisores % 2 == 0) {
						pegaEsfera++;
					}
				}
				Console.WriteLine(pegaEsfera);
			}
		}
	}
}