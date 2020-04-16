using System;
namespace ConsoleApp26 {
    class Program {
        static void Main(string[] args) {
			int experience = 1;
			while (true) {
				int ciclos = 0;
				int n = int.Parse(Console.ReadLine());
				if (n == -1) {
					break;
				}
				while (n > 1) {
					ciclos++;
					n -= 2;
				}
				Console.WriteLine("Experiment "+experience+": "+ ciclos + " full cycle(s)");
				experience++;
			}
		}
    }
}