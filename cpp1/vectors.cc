#include <vector>
#include <iostream>
using namespace std;

int main() {
  int tab[5] = {1, 2, 3, 4, 5};
  // Pour le fun, on itère sur `tab` par les pointeurs de ses valeurs.
  // On démarre de tab (qui est un pointeur lui-même)
  // et on incrémente l'adresse mémoire que l'on visite.
  for (int *it = tab; it != tab + 5; it++) {
    cout << *it << endl;
  }
  // NOTE: rien ne nous empêche d'aller lire dans les
  // cases mémoires suivantes...

  // Alternative : les itérateurs (pour les vecteurs)

  vector<int> vec;
  for (int i = 1; i <= 5; i++) {
    int j;
    cout << "Please enter integer #" << i << ": ";
    cin >> j;
    vec.push_back(j);
  }

  // Afficher les éléments de vec
  cout << "Eléments de vec" << endl;
  vector<int>::iterator it;
  for (it = vec.begin(); it != vec.end(); it++) {
    cout << *it << endl;
  }

  // Afficher la somme de chaque élément avec le suivant
  cout << "Somme de chaque élément avec le suivant" << endl;
  for (auto it = vec.begin(); it != vec.end() - 1; it++) {
    cout << *it + *(it + 1) << endl;
  }

  // Afficher la somme des éléments symétriques
  // (premier avec dernier, etc)
  cout << "Somme de chaque élément avec son symétrique" << endl;
  for (it = vec.begin(); it != vec.end(); it++) {
    vector<int>::iterator sym = vec.end() - 1 - (it - vec.begin());
    cout << *it + *sym << endl;
  }

  return 0;
}
