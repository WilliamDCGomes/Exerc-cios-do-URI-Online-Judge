using System;
using System.Globalization;
namespace ConsoleApp26 {
    class Program {
        static void Main(string[] args) {
            while (true) {
                string input = Console.ReadLine();
                if (string.IsNullOrEmpty(input)) {
                    break;
                }
                int degraus = Convert.ToInt32(input);
                string[] vet = Console.ReadLine().Split();
                int h = Convert.ToInt32(vet[0]);
                int c = Convert.ToInt32(vet[1]);
                int l = Convert.ToInt32(vet[2]);
                double compRampa = Math.Sqrt(Math.Pow(c, 2) + Math.Pow(h, 2));
                compRampa *= degraus;
                double area = compRampa * l;
                Console.WriteLine((area/10000).ToString("F4",CultureInfo.InvariantCulture));
            }
        }
    }
}