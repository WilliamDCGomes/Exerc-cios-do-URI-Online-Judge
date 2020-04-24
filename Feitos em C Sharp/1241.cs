using System;

namespace ConsoleApp5 {
    class Program {
        static void Main(string[] args) {
			int times =int.Parse(Console.ReadLine());
			for (int i = 0; i < times; i++) {
				string[] phrase = Console.ReadLine().Split();
				string a = phrase[0];
				string b = phrase[1];
				int sizeA = a.Length; 
				int sizeB = b.Length;
				string auxB;
				if (sizeB > sizeA) {
					Console.WriteLine("nao encaixa");
					continue;
				}
				else {
					auxB = a.Substring((sizeA - 1) - (sizeB - 1));
				}
				if (auxB==b) {
					Console.WriteLine("encaixa");
				}
				else {
					Console.WriteLine("nao encaixa");
				}
			}
		}
    }
}
