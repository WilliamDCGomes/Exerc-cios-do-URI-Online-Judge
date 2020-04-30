using System;
namespace ConsoleApp17 {
    class Program {
        static void Main(string[] args) {
			while (true) {
				string caracters = Console.ReadLine();
				if (string.IsNullOrEmpty(caracters)) {
					break;
				}
				int lamps = int.Parse(Console.ReadLine());
				string[] onLamps = Console.ReadLine().Split();
				for (int i = 0; i < lamps; i++) {
					Console.Write(caracters.Substring(int.Parse(onLamps[i])-1,1));
				}
				Console.WriteLine();
			}
		}
    }
}