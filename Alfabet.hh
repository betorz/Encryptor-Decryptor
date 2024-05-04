#ifndef ALFABET_HH
#define ALFABET_HH

#ifndef NO_DIAGRAM
#include <iostream>
#include <string>
#include <vector>
#include "BinTree.hh"
#endif


using namespace std;

typedef vector<vector<char> > Matriu;

class Alfabet {
    
    
private:
  string id;
  string caracters;
  Matriu mat;
    
public:

  //Constructoras
  /** @brief Creadora por defecto.

      \pre <em>cierto</em>
      \post El resultado es un alfabeto sin valores asignados.
  */
  Alfabet();

  /** @brief Creadora con valores concretos.

      \pre <em>cierto</em>
      \post El resultado es una alfabeto con id "id"
  */
  Alfabet(string id);


  /** @brief Crea la matriz del alfabeto

      \pre El parametro implicito ya ha sido leido
      \post Se ha creado la matriz asociada al alfabeto
  */
  void crear_matriu();

  //Consultoras

  /** @brief Consultora del id
      \pre <em>cierto</em>
      \post El resultado es el id del parámetro implícito
  */
  string consultar_id();

  /** @brief Consultora de los caracteres
      \pre <em>cierto</em>
      \post El resultado son los caracteres del alfabeto del parámetro implícito
  */
  string consultar_caracters();


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
