using System;
namespace ConsoleApp7 {
    class Program {
        static void Main(string[] args) {
			string[] phrase = Console.ReadLine().Split();
			int size = phrase.Length;
			int aux=1;
			for (int i = 0; i < size; i++) {
				int subSize = phrase[i].Length;
				string[] subString = new string[subSize];
				for (int j = 0; j < subSize; j++) {
					subString[j] = phrase[i].Substring(j, 1);
					if (j == aux) {
						Console.Write(subString[j]);
						aux += 2;
					}
				}
				if (i != size - 1) {
					Console.Write(" ");
				}
				aux = 1;
			}
			Console.WriteLine();
		}
    }
}
