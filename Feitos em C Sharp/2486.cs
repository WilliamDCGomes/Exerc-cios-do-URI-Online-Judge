using System;
namespace _3 {
    class Program {
        static void Main(string[] args) {
            while (true) {
                int num = int.Parse(Console.ReadLine());
                if (num == 0) {
                    break;
                }
                long cont = 0;
                for(int i = 0; i < num; i++) {
                    string[] inputs = Console.ReadLine().Split();
                    int size = inputs.Length;
                    string fruit="";
                    for (int j = 1; j < size; j++) {
                        if (j == size - 1) {
                            fruit += inputs[j];
                        }
                        else {
                            fruit += inputs[j] + " ";
                        }
                    }
                    if(fruit=="suco de laranja") {
                        cont += (120 * int.Parse(inputs[0]));
                    }
                    else if(fruit=="morango fresco"||fruit=="mamao") {
                        cont += (85 * int.Parse(inputs[0]));
                    }
                    else if(fruit=="goiaba vermelha") {
                        cont += (70 * int.Parse(inputs[0]));
                    }
                    else if (fruit == "manga") {
                        cont += (56 * int.Parse(inputs[0]));
                    }
                    else if(fruit == "laranja") {
                        cont += (50 * int.Parse(inputs[0]));
                    }
                    else if (fruit == "brocolis") {
                        cont += (34 * int.Parse(inputs[0]));
                    }
                }
                if (cont < 110) {
                    Console.WriteLine("Mais " + (110 - cont) + " mg");
                }
                else if (cont > 130) {
                    Console.WriteLine("Menos " + (cont - 130) + " mg");
                }
                else {
                    Console.WriteLine(cont + " mg");
                }
            }
        }
    }
}