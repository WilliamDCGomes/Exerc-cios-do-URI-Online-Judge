using System;
using System.Globalization;
namespace ConsoleApp8 {
    class Program {
        static void Main(string[] args) {
            string[] aux = Console.ReadLine().Split();
            int a = int.Parse(aux[0]);
            int b = int.Parse(aux[1]);
            double c = double.Parse(aux[2], CultureInfo.InvariantCulture);
            string[] aux2 = Console.ReadLine().Split();
            int d = int.Parse(aux2[0]);
            int e = int.Parse(aux2[1]);
            double f = double.Parse(aux2[2], CultureInfo.InvariantCulture);
            Console.WriteLine("VALOR A PAGAR: R$ " + ((b * c) + (e * f)).ToString("F2", CultureInfo.InvariantCulture));
        }
    }
}