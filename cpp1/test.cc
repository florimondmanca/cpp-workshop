// Un `#include` prévient le compilateur qu'on veut utiliser un module.
// Ici, il est chargé à partir d'un fichier `iostream.h` qui est quelque
// part dans le PATH.
#include <iostream>
#include <memory>
using namespace std;

int main() {
  /* La syntaxe namespace::member permet de définir précisément
  quel `cout` on veut utiliser.
  Cela dit, le namespace std est utilisé un peu partout.
  Pour se passer de ``, on peut écrire au début du fichier:
  `using namespace std;`
  */
  std::cout << "Hello, world!" << std::endl;

  int i = 42;
  int *p = &i;

  // Manipulation de pointeurs
  cout << i << endl;
  cout << p << endl;
  cout << &i << endl;
  cout << &p << endl;
  cout << *p << endl;
  // NOTE: le comportement de *i n'est pas défini
  // (ça peut ne pas compiler ou planter à l'exécution)

  // Pointeur intelligent unique
  unique_ptr<int> age(new int(22));
  cout << *age << endl;

  // Pointeur intelligent partagé
  shared_ptr<int> value = make_shared<int>(10);
  shared_ptr<int> other = value;  // ou other(value)
  cout << *value << " " << *other << endl;

  // La modification de l'un des pointeurs modifie l'autre
  *value = 5;
  cout << *value << " " << *other << endl;

  // NOTE: on ne peut pas faire `delete value;`
  // car `value` n'est pas un pointeur "brut"

  return 0;
}
