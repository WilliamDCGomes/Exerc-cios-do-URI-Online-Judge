using System;
using System.Globalization;
namespace ConsoleApp10 {
    class Program {
        static void Main(string[] args) {
            string[] aux = Console.ReadLine().Split();
            double a = double.Parse(aux[0], CultureInfo.InvariantCulture);
            double b = double.Parse(aux[1], CultureInfo.InvariantCulture);
            double c = double.Parse(aux[2], CultureInfo.InvariantCulture);
            double d = a / (b + c);
            Console.WriteLine(d.ToString("F2", CultureInfo.InvariantCulture));
        }
    }
}