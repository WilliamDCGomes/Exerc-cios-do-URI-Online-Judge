using System;
using System.Globalization;
namespace ConsoleApp24 {
    class Program {
        static void Main(string[] args) {
			while (true) {
				string time = Console.ReadLine();
				if (string.IsNullOrEmpty(time)) {
					break;
				}
				int times = int.Parse(time);
				double dom = 0, dem = 0;
				for (int i = 0; i < times; i++) {
					string[] aux = Console.ReadLine().Split();
					int n = int.Parse(aux[0]);
					int c = int.Parse(aux[1]);
					dom += (n * c);
					dem += (c * 100);
				}
				double resu = dom / dem;
				Console.WriteLine(resu.ToString("F4",CultureInfo.InvariantCulture));
			}
		}
    }
}