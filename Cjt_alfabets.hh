#ifndef CONJ_ALF_HH
#define CONJ_ALF_HH


#ifndef NO_DIAGRAM
#include <string>
#include <vector>
#endif
#include "Alfabet.hh"
using namespace std;

typedef vector<vector<char> > Matriu;

class Cjt_alfabets {

private:

  vector<Alfabet> valf;
  int n_alf;

public:

  //Constructores

  /** @brief Creadora por defecto.

      \pre num > 0
      \post El resultado es una Cj_alfabets con n_alf = num
  */
  Cjt_alfabets(int num);

  //Modificadores

  /** @brief Añade un alfabeto
      \pre <em>cierto</em>
      \post Se ha añadido el alfabeto alf al conjunto del parametro implicito
  */
  void afegir_alfabet(const Alfabet& alf);

  /** @brief Elimina un alfabeto
      \pre En el parametro implicito existe un alfabeto con id = ida
      \post Se ha eliminado el alfabeto con identificado ida del conjunto del parametro implicito
  */
  void eliminar_alfabet(string ida);

  /** @brief Modifica un alfabeto
      \pre En el parametro implicito existe un alfabeto con id = alf.id
      \post Se ha modificado el alfabeto alf del conjunto del parametro implicito
  */
  void modificar_alfabet(const Alfabet& alf);

    

  
    //Consultores

  /** @brief Consultora de la cantidad de alfabetos
      \pre <em>cierto</em>
      \post El resultado es la cantidad de alfabetos del parametro implicito
  */
  int mida() const;
    
  /** @brief Consultora de la existencia de una alfabeto
      \pre <em>cierto</em>
      \post El resultado indica si existe un alfabeto en el paramtro implicito con ID = id
  */
  bool existeix_alfabet(string id) const;

  /** @brief Consultora de un alfabeto
      \pre existe un alfabeto en el parametro implicito con ID = id
      \post El resultado es el alfabeto con ID = id que contiene el parametro implicito
  */
  Alfabet consultar_alfabet(string id) const;
    
  // Lectura i escriptura

  /** @brief Operación de lectura

      \pre <em>cierto</em>
      \post Se han leido los atributos del parámetro implícito
  */
  void llegir();

  /** @brief Operación de escritura

      \pre <em>cierto</em>
      \post Se han escrito los atributos del parámetro implícito en el canal
      standard de salida.
  */
  void escriure() const;

};
#endif
