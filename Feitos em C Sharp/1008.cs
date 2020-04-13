using System;
using System.Globalization;
namespace ConsoleApp6 {
    class Program {
        static void Main(string[] args) {
            int a = int.Parse(Console.ReadLine());
            int b = int.Parse(Console.ReadLine());
            double c = double.Parse(Console.ReadLine());
            Console.WriteLine("NUMBER = " + a + "\nSALARY = U$ " + (b * c).ToString("F2",CultureInfo.InvariantCulture));
        }
    }
}