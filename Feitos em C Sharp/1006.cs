using System;
using System.Globalization;
namespace ConsoleApp3 {
    class Program {
        static void Main(string[] args) {
            double a = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
            double b = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
            double f = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
            double d = a * 0.2;
            double e = b * 0.3;
            double g = f * 0.5;
            double c = d + e + g;
            Console.WriteLine("MEDIA = " + c.ToString("F1",CultureInfo.InvariantCulture));
        }
    }
}