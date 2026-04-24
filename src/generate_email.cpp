// Example program
#include <iostream>
#include <string>
#include <cctype>
#include <clocale>

using namespace std;

int main() {
  setlocale(LC_ALL,"");
  string fullName;
  //1. leitura do console do nome completo
  getline(cin, fullName);
  
  // to-do: se digitou algo ao menos com duas partes, remover espaços em branco ao redor do nome completo por segurança e verificar se há ao menos um espaço em branco
  
  //2. converter para minusculo
  for (int i = 0; i < fullName.size(); i++) {
    if (fullName[i] >= 'A' and fullName[i] <= 'Z') {
        fullName[i] = tolower(fullName[i]); //fullName[i] += 32;
    }
  }
  
  //transform(fullName.begin(), fullName.end(), fullName.begin(), ::tolower);
  cout << "texto convertido: " << fullName << endl; //apenas para debug
  
  //3. o nome completo tem suas partes separadas por um espaço em branco (assume-se isto) - separar o primeiro nome
  auto firstNameIdx = fullName.find(" ");
  if (firstNameIdx != string::npos) {
    string firstName;
    //obter substring do índice 0 até o firstNameIdx-1
    firstName = fullName.substr(0,firstNameIdx);
    //4. obter último nome: será a substring a partir da posição do último espaço em branco até o fim da string. Ao informar apenas a posição sem o tamanho, retorna tudo à frente da posição
    auto lastNameIdx = fullName.rfind(" ");
    string lastName;
    lastName = fullName.substr(lastNameIdx+1); //o +1 é para iniciar após o espaço encontrado
    
    string email;
    email = firstName + "." + lastName + "@ufrn.edu.br";
    cout << "E-mail gerado para " << fullName << ": " << email << endl;
  } else {
        cout << "Nome informado não possui o mínimo de duas partes\n";
  }
  return 0;
}