#ifndef MISSATGE_HH
#define MISSATGE_HH

#ifndef NO_DIAGRAM
#include <iostream>
#include <string>
#include "BinTree.hh"
#endif

using namespace std;
class Missatge {
    

private:
  string id;
  string alf_id;
  string missatge_orig;
  string missatge_cod;
  string clau;
  BinTree <char> arbre_orig;
  BinTree <char> arbre_cod;
    
public:
  //Constructores

  /** @brief Creadora por defecto.

      \pre <em>cierto</em>
      \post El resultado es un mensaje sin valores asignados.
  */
  Missatge();

  /** @brief Creadora con valores concretos.

      \pre <em>cierto</em>
      \post El resultado es una alfabeto con ID = id i ALF_IF = alf_id
  */
  Missatge(string id, string alf_id);

  //Modificadores

  /** @brief Añade la clave

      \pre <em>cierto</em>
      \post Se ha añadido clau al parametro implicito
  */
  void afegir_clau(string clau);

  /** @brief Crea el arbre_orig

      \pre El parametro implicito ha leido missatge_orig
      \post Se ha creado el arbre_orig del parametro implicito
  */
  void crear_arbre_orig();

  /** @brief Codificador mediante sustitucion del mensaje

      \pre El parametro implicito ha leido missatge_orig
      \post Se ha codificado mediante sustitucion el missatge_orig del parametro implicito
  */
  void codificar_missatge_sust(string cl);

  /** @brief Codificador mediante permutacion del mensaje

      \pre El parametro implicito ha leido missatge_orig y ha creado el arbre_orig
      \post Se ha codificado mediante permutacion el missatge_orig del parametro implicito
  */
  void codificar_missatge_perm(int b);

  /** @brief Decodificador mediante sustitucion del mensaje

      \pre El parametro implicito tiene missatge_cod
      \post Se ha decodificado mediante sustitucion el missatge_cod del parametro implicito
  */
  void decodificar_missatge_sust(string cl);

  /** @brief Decodificador mediante permutacion del mensaje

      \pre El parametro implicito tiene missatge_cod
      \post Se ha decodificado mediante permutacion el missatge_cod del parametro implicito
  */
  void decodificar_missatge_perm(int b);

  //Consultores
    
  /** @brief Consultora del id
      \pre <em>cierto</em>
      \post El resultado es el id del parámetro implícito
  */
  string consultar_id();
    
  /** @brief Consultora del mensaje
      \pre <em>cierto</em>
      \post El resultado es el mensaje del parámetro implícito
  */
  string consultar_missatge_original();

  /** @brief Consultora del mensaje codificado
      \pre <em>cierto</em>
      \post El resultado es el mensaje codificado del parámetro implícito
  */
  string consultar_missatge_codificat();
 
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
