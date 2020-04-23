using System;

namespace ConsoleApp1 {
    class Program {
        static void Main(string[] args) {
			int many = int.Parse(Console.ReadLine());
			int [] vet = new int[many]; 
			int [] aux = new int [many];
			int []aux2 = new int [many];
			for (int i = 0; i < many; i++) {
				vet[i] = int.Parse(Console.ReadLine());
			}
			int times = 0;
			while (times < many) {
				int comp = 2001;
				int refe=0;
				for (int i = 0; i < many; i++) {
					if (comp > vet[i] && vet[i] > 0) {
						comp = vet[i];
						refe= i;
					}
				}
				vet[refe] = 0;
				aux[times] = comp;
				aux2[times] = comp;
				times++;
			}
			int request = 0;
			for (int i = 0; i < many; i++) {
				for (int j = 0; j < many; j++) {
					if (aux[i] == aux2[j]) {
						request++;
					}
				}
				if (i > 0 && aux[i] == aux[i - 1]) {
					request = 0;
					continue;
				}
				Console.WriteLine(aux[i] + " aparece " + request + " vez(es)");
				request = 0;
			}
		}
    }
}
