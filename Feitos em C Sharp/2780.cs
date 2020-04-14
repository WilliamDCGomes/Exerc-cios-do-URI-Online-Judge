using System;
namespace ConsoleApp13 {
    class Program {
        static void Main(string[] args) {
            int a = int.Parse(Console.ReadLine());
            if (a <= 800) {
                Console.WriteLine("1");
            }
            else if (a <= 1400) {
                Console.WriteLine("2");
            }
            else {
                Console.WriteLine("3");
            }
        }
    }
}
