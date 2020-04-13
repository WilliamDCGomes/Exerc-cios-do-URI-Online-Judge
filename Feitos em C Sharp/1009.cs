using System;
using System.Globalization;
namespace ConsoleApp7 {
    class Program {
        static void Main(string[] args) {
            string nome = Console.ReadLine();
            double a = double.Parse(Console.ReadLine());
            double b = double.Parse(Console.ReadLine());
            Console.WriteLine("TOTAL = R$ " + (a + (b * 0.15)).ToString("F2",CultureInfo.InvariantCulture));
        }
    }
}