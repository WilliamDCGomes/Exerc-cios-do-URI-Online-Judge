using System;
namespace ConsoleApp12 {
    class Program {
        static void Main(string[] args) {
			int times = int.Parse(Console.ReadLine());
			for (int i = 0; i < times; i++) {
				int quantJoao = 0, quantMaria = 0;
				for (int j = 0; j < 3; j++) {
					string[] vet = Console.ReadLine().Split();
					int x = int.Parse(vet[0]);
					int d = int.Parse(vet[1]);
					quantJoao += (x * d);
				}
				for (int j = 0; j < 3; j++) {
					string[] vet = Console.ReadLine().Split();
					int x = int.Parse(vet[0]);
					int d = int.Parse(vet[1]);
					quantMaria += (x * d);
				}
				if (quantJoao > quantMaria) {
					Console.WriteLine("JOAO");
				}
				else {
					Console.WriteLine("MARIA");
				}
			}
		}
    }
}
