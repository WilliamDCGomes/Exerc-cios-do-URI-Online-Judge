using System;namespace _2150{
    class Program{
        static void Main(string[] args){
            while (true){
                string inputCompara = Console.ReadLine();
                if (string.IsNullOrEmpty(inputCompara)){
                    break;
                }
                string inputFrase = Console.ReadLine();
                int sizeCompara = inputCompara.Length;
                int sizeFrase = inputFrase.Length;
                int cont = 0;
                for(int i = 0; i < sizeCompara; i++){
                    for(int j = 0; j < sizeFrase; j++){
                        if(inputFrase.Equals(" ")){
                            continue;        
                        }
                        else if (inputCompara.Substring(i,1).Equals(inputFrase.Substring(j,1))){
                            cont++;
                        }
                    }
                }
                Console.WriteLine(cont);
            }
        }
    }
}