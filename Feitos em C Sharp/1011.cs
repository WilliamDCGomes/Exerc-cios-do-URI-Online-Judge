using System;
using System.Globalization;
namespace ConsoleApp8 {
    class Program {
        static void Main(string[] args) {
            double a = double.Parse(Console.ReadLine(),CultureInfo.InvariantCulture);
            a = Math.Pow(a, 3);
            Console.WriteLine("VOLUME = " + (((4.0 / 3) * 3.14159) * a).ToString("F3",CultureInfo.InvariantCulture));
        }
    }
}