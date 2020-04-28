using System;
namespace ConsoleApp16 {
    class Program {
        static void Main(string[] args) {
            while (true) {
                string times = Console.ReadLine();
                if (string.IsNullOrEmpty(times)) {
                    break;
                }
                string[] imput = Console.ReadLine().Split();
                int sizeInput = imput.Length;
                int[] vet = new int[sizeInput];
                int impeachment = 0;
                for(int i = 0; i < sizeInput; i++) {
                    vet[i] = int.Parse(imput[i]);
                    if (vet[i] == 1) {
                        impeachment++;
                    }
                }
                double n = (double) (sizeInput * 2) / 3;
                if (impeachment >=  n) {
                    Console.WriteLine("impeachment");
                }
                else {
                    Console.WriteLine("acusacao arquivada");
                }
            }
        }
    }
}