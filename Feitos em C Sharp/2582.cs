using System;
namespace ConsoleApp20 {
    class Program {
        static void Main(string[] args) {
			int test = int.Parse(Console.ReadLine());
			for (int i = 0; i < test; i++) {
				string[] aux = Console.ReadLine().Split();
				int num1 = int.Parse(aux[0]);
				int num2 = int.Parse(aux[1]);
				int sum = num1 + num2;
				switch (sum) {
					case 1:
						Console.WriteLine("P.Y.N.G.");
						break;
					case 2:
						Console.WriteLine("DNSUEY!");
						break;
					case 3:
						Console.WriteLine("SERVERS");
						break;
					case 4:
						Console.WriteLine("HOST!");
						break;
					case 5:
						Console.WriteLine("CRIPTONIZE");
						break;
					case 6:
						Console.WriteLine("OFFLINE DAY");
						break;
					case 7:
						Console.WriteLine("SALT");
						break;
					case 8:
						Console.WriteLine("ANSWER!");
						break;
					case 9:
						Console.WriteLine("RAR?");
						break;
					case 10:
						Console.WriteLine("WIFI ANTENNAS");
						break;
					default:
						Console.WriteLine("PROXYCITY");
						break;
				}
			}
		}
    }
}
