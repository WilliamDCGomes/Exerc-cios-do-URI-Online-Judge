using System;
namespace ConsoleApp14 {
    class Program {
        static void Main(string[] args) {
            for (int x = 0; x < 10; x++) {
                string name = Console.ReadLine();
                if (x == 2 || x == 6 || x == 8) {
                    Console.WriteLine(name);
                }
            }
        }
    }
}
