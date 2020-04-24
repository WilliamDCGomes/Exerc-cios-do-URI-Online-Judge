using System;
namespace ConsoleApp8 {
    class Program {
        static void Main(string[] args) {
			string[] vet = Console.ReadLine().Split();
			int p = int.Parse(vet[0]); 
			int r = int.Parse(vet[1]);
			if (p == 0) {
				Console.WriteLine("C");
			}
			else if (r == 0) {
				Console.WriteLine("B");
			}
			else {
				Console.WriteLine("A");
			}
		}
    }
}
