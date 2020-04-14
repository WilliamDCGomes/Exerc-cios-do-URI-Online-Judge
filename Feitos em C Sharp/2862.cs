using System;
namespace ConsoleApp15 {
    class Program {
        static void Main(string[] args) {
            int a = int.Parse(Console.ReadLine());
            for (int x = 0; x < a; x++) {
                int b = int.Parse(Console.ReadLine());
                if (b > 8000) {
                    Console.WriteLine("Mais de 8000!");
                }
                else {
                    Console.WriteLine("Inseto!");
                }
            }
        }
    }
}
