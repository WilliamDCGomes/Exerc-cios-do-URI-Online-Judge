using System;
namespace ConsoleApp1 {
    class Program {
        static void Main(string[] args) {
			while (true) {
				int quant = int.Parse(Console.ReadLine());
				if (quant == 0) {
					break;
				}
				string[] num1 = Console.ReadLine().Split();
				int dX = int.Parse(num1[0]);
				int dY = int.Parse(num1[1]);
				for (int i = 0; i < quant; i++) {
					string[] num2 = Console.ReadLine().Split();
					int x = int.Parse(num2[0]);
					int y = int.Parse(num2[1]);
					if (x == dX || y == dY) {
						Console.WriteLine("divisa");
					}
					else if (x > dX && y > dY) {
						Console.WriteLine("NE");
					}
					else if (x < dX && y > dY) {
						Console.WriteLine("NO");
					}
					else if (x < dX && y < dY) {
						Console.WriteLine("SO");
					}
					else if (x > dX && y < dY) {
						Console.WriteLine("SE");
					}
				}
			}
		}
    }
}
