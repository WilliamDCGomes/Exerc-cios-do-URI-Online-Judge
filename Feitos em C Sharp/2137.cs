using System;
namespace ConsoleApp1 {
    class Program {
        static void Main(string[] args) {
			while (true) {
				string auxTimes = Console.ReadLine();
				if (string.IsNullOrEmpty(auxTimes)) {
					break;
				}
				int times = int.Parse(auxTimes);
				int[] vet = new int[times];
				int[] aux = new int[times];
				for (int i = 0; i < times; i++) {
					vet[i] = int.Parse(Console.ReadLine());
				}
				for (int i = 0; i < times; i++) {
					for (int j = i + 1; j < times; j++) {
						if (vet[i] > vet[j]) {
							aux[i] = vet[i];
							vet[i] = vet[j];
							vet[j] = aux[i];
						}
					}
				}
				int[] auxVet = new int [times];
				for (int i = 0; i < times; i++) {
					int size = 0;
					auxVet[i] = vet[i];
					while (auxVet[i] > 0) {
						auxVet[i] /= 10;
						size++;
					}
					if (size == 1) {
						Console.WriteLine("000" + vet[i]);
					}
					else if (size == 2) {
						Console.WriteLine("00" + vet[i]);
					}
					else if (size == 3) {
						Console.WriteLine("0" + vet[i]);
					}
					else if (vet[i] == 0) {
						Console.WriteLine("0000");
					}
					else {
						Console.WriteLine(vet[i]);
					}
				}
			}
		}
    }
}