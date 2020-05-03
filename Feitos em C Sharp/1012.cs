using System;
using System.Globalization;
namespace ConsoleApp9 {
    class Program {
        static void Main(string[] args) {
            string[] aux = Console.ReadLine().Split();
            double a = double.Parse(aux[0], CultureInfo.InvariantCulture);
            double b = double.Parse(aux[1], CultureInfo.InvariantCulture);
            double c = double.Parse(aux[2], CultureInfo.InvariantCulture);
            Console.WriteLine("TRIANGULO: " + ((a * c) / 2).ToString("F3", CultureInfo.InvariantCulture));
            Console.WriteLine("CIRCULO: " + (3.14159 * c * c).ToString("F3", CultureInfo.InvariantCulture));
            Console.WriteLine("TRAPEZIO: " + (((a + b) * c) / 2).ToString("F3", CultureInfo.InvariantCulture));
            Console.WriteLine("QUADRADO: " + (b * b).ToString("F3", CultureInfo.InvariantCulture));
            Console.WriteLine("RETANGULO: " + (a * b).ToString("F3", CultureInfo.InvariantCulture));
        }
    }
}