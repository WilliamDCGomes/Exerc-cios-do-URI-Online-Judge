using System;
namespace ConsoleApp26 {
    class Program {
        static void Main(string[] args) {
			while (true) {
				string auxTimes = Console.ReadLine();
				if (string.IsNullOrEmpty(auxTimes)) {
					break;
				}
				int times = int.Parse(auxTimes);
				double[] vet = new double[times]; 
				double aux;
				double record = 0.0;
				for (int i = 0; i < times; i++) {
					string[] input = Console.ReadLine().Split();
					vet[i] = double.Parse(input[0]);
					aux = double.Parse(input[1]);
					double sub = aux / vet[i];
					if (i == 0) {
						record = sub;
						Console.WriteLine(i+1);
					}
					else if (sub > record) {
						record = sub;
						Console.WriteLine(i+1);
					}
				}
			}
		}
    }
}