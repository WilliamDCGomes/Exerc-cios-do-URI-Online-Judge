import 'dart:io';
void main() {
  while (true)
  {
    String input = stdin.readLineSync();
    if(input == null)
      break;
    List inp = input.split(" ");
    int raio1 = int.parse(inp[0]);
    int x1 = int.parse(inp[1]);
    int y1 = int.parse(inp[2]);
    int raio2 = int.parse(inp[3]);
    int x2 = int.parse(inp[4]);
    int y2 = int.parse(inp[5]);
    if (raio1 >= raio2 && ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)) <= ((raio1 - raio2) * (raio1 - raio2)))
      print("RICO");
    else
      print("MORTO");
  }
}