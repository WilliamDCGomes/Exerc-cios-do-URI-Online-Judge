using System;
namespace ConsoleApp18 {
    class Program {
        static void Main(string[] args) {
			while (true) {
				string x1 = Console.ReadLine();
				if (string.IsNullOrEmpty(x1)) {
					break;
				}
				int x = int.Parse(x1);
				if ((x >= 0 && x < 90) || x == 360) {
					Console.WriteLine("Bom Dia!!");
				}
				else if (x >= 90 && x < 180) {
					Console.WriteLine("Boa Tarde!!");
				}
				else if (x >= 180 && x < 270) {
					Console.WriteLine("Boa Noite!!");
				}
				else {
					Console.WriteLine("De Madrugada!!");
				}
			}
		}
    }
}