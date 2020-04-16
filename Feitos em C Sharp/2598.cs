using System;
namespace ConsoleApp26 {
    class Program {
        static void Main(string[] args) {
			int a = int.Parse(Console.ReadLine());
			for (int i = 0; i < a; i++) {
				int quant = 0;
				string[] vet = Console.ReadLine().Split();
				int n = Convert.ToInt32(vet[0]);
				int m = Convert.ToInt32(vet[1]);
				while (n > 0) {
					n -= m;
					quant++;
				}
				Console.WriteLine(quant);
			}
		}
    }
}