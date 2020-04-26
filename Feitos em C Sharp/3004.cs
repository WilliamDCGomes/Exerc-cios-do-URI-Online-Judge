using System;
namespace ConsoleApp13 {
    class Program {
        static void Main(string[] args) {
			int times = int.Parse(Console.ReadLine());
			for (int i = 0; i < times; i++) {
				string[] vet = Console.ReadLine().Split();
				int insideX = int.Parse(vet[0]);
				int insideY = int.Parse(vet[1]);
				int mainX = int.Parse(vet[2]);
				int mainY = int.Parse(vet[3]);
				if ((insideX < mainX && insideY < mainY) || (insideX < mainY && insideY < mainX)) {
					Console.WriteLine("S");
				}
				else {
					Console.WriteLine("N");
				}
			}
		}
    }
}