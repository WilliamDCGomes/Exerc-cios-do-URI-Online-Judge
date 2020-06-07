using System;
namespace _2958 {
    class Program {
        static void Main(string[] args) {
            string[] input = Console.ReadLine().Split();
            int lines = int.Parse(input[0]);
            int columns = int.Parse(input[1]);
            int sizeLive = lines * columns + 1, sizeDiscipline = sizeLive;
            int[] live = new int[sizeLive];
            int[] discipline = new int[sizeDiscipline];
            for (int i = 0; i < sizeLive; i++) {
                live[i] = -1;
                discipline[i] = -1;
            }
            int v = 0, d = 0;
            for (int x = 0; x < lines; x++) {
                string[] problem = Console.ReadLine().Split();
                int p = problem.Length;
                for (int i = 0; i < p; i++) {
                    if (problem[i].Substring(1, 1) == "V") {
                        live[v] = int.Parse(problem[i].Substring(0, 1));
                        v++;
                    }
                    else{
                        discipline[d] = int.Parse(problem[i].Substring(0, 1));
                        d++;
                    }
                }
            }
            if (sizeLive > 0) {
                for (int i = 0; i < sizeLive; i++) {
                    for (int j = i + 1; j < sizeLive; j++) {
                        if (live[j] > live[i]) {
                            int aux = live[j];
                            live[j] = live[i];
                            live[i] = aux;
                        }
                    }
                }
            }
            if (sizeDiscipline > 0) {
                for (int i = 0; i < sizeDiscipline; i++) {
                    for (int j = i + 1; j < sizeDiscipline; j++) {
                        if (discipline[j] > discipline[i]) {
                            int aux = discipline[j];
                            discipline[j] = discipline[i];
                            discipline[i] = aux;
                        }
                    }
                }
            }
            for (int i = 0; i < sizeLive; i++) {
                if (live[i] > -1) {
                    Console.WriteLine($"{live[i]}V");
                }
            }
            for (int i = 0; i < sizeDiscipline; i++) {
                if (discipline[i] > -1) {
                    Console.WriteLine($"{discipline[i]}D");
                }
            }
        }
    }
}