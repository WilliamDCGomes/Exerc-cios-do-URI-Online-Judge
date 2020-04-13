using System;
using System.Globalization;
namespace ConsoleApp2 {
    class Program {
        static void Main(string[] args) {
            double a = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            double b = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            double d = a * 0.35;
            double e = b * 0.75;
            double c = ((d + e) * 10) / 11;
            Console.WriteLine("MEDIA = " + c.ToString("F5",CultureInfo.InvariantCulture));
        }
    }
}
