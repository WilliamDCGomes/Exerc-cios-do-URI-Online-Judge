using System;
namespace ConsoleApp4 {
    class Program {
        static void Main(string[] args) {
			int times = int.Parse(Console.ReadLine());
			for (int i = 0; i < times; i++) {
				string[] phrase = Console.ReadLine().Split();
				string word1 = phrase[0];
				string word2 = phrase[1];
				int num1 = word1.Length, aux1 = 0;
				int num2 = word2.Length, aux2 = 0;
				for (int j = 0; j < 50; j++) {
					if (aux1 < num1) {
						Console.Write(word1.Substring(j, 1));
						aux1++;
					}
					if (aux2 < num2) {
						Console.Write(word2.Substring(j, 1));
						aux2++;
					}
				}
				Console.WriteLine();
			}
        }
    }
}
