using System;
namespace _1039
{
    class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                string inp = Console.ReadLine();
                if (string.IsNullOrEmpty(inp))
                    break;
                string[] input = inp.Split();
                int raio1 = int.Parse(input[0]);
                int x1 = int.Parse(input[1]);
                int y1 = int.Parse(input[2]);
                int raio2 = int.Parse(input[3]);
                int x2 = int.Parse(input[4]);
                int y2 = int.Parse(input[5]);
                if (raio1 >= raio2 && Math.Pow((x1 - x2), 2) + Math.Pow((y1 - y2), 2) <= Math.Pow((raio1 - raio2), 2))
                    Console.WriteLine("RICO");
                else
                    Console.WriteLine("MORTO");
            }
        }
    }
}
