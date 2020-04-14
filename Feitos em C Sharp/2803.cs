using System;
namespace ConsoleApp16 {
    class Program {
        static void Main(string[] args) {
            string regiao = Console.ReadLine();
            if (regiao == "para" || regiao == "roraima" || regiao == "acre" || regiao == "amapa" || regiao == "amazonas" || regiao == "rondonia" || regiao == "tocantins") {
                Console.WriteLine("Regiao Norte");
            }
            else {
                Console.WriteLine("Outra regiao");
            }
        }
    }
}
