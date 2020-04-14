using System;
namespace ConsoleApp11 {
    class Program {
        static void Main(string[] args) {
			int m = int.Parse(Console.ReadLine());
			int a = int.Parse(Console.ReadLine());
			int b = int.Parse(Console.ReadLine());
			int c = m - a - b;
			if (c > a && c > b) {
				Console.WriteLine(c);
			}
			else if (a > b && a > c) {
				Console.WriteLine(a);
			}
			else if (b > a && b > c) {
				Console.WriteLine(b);
			}
			else if (b == c && b > a) {
				Console.WriteLine(b);
			}
			else if (a == c && a > b) {
				Console.WriteLine(a);
			}
			else if (b == a && b > c) {
				Console.WriteLine(b);
			}
		}
    }
}
