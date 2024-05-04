#ifndef CONJ_MIS_HH
#define CONJ_MIS_HH

#ifndef NO_DIAGRAM
#include <string>
#include <vector>
#endif

#include "Missatge.hh"

using namespace std;
class Cjt_missatges {

private:

  vector<Missatge> vmis;
  int n_mis;

public:

  //Constructores

  /** @brief Creadora por defecto.

      \pre num > 0
      \post El resultado es una Cj_missatges con n_mis = num
  */
  Cjt_missatges(int num);

   
  //Modificadores

  /** @brief Añade un mensaje
      \pre <em>cierto</em>
      \post Se ha añadido el mensaje mis al conjunto del parametro implicito
  */
  void afegir_missatge(const Missatge& mis);

  /** @brief Elimina un mensaje
      \pre En el parametro implicito existe un mensaje con id = idm
      \post Se ha eliminado el mensaje con identificado idm del conjunto del parametro implicito
  */
  void eliminar_missatge(string idm);

  /** @brief Modifica un mensaje
      \pre En el parametro implicito existe un mensaje con id = mis.id
      \post Se ha modificado el mensaje mis del conjunto del parametro implicito
  */
  void modificar_missatge(const Missatge& mis);

    //Consultores

  /** @brief Consultora de la cantidad de mensajes
      \pre <em>cierto</em>
      \post El resultado es la cantidad de mensajes del parametro implicito
  */
  int mida() const;
    
  /** @brief Consultora de la existencia de una mensaje
      \pre <em>cierto</em>
      \post El resultado indica si existe un mensaje en el paramtro implicito con ID = id
  */
  bool existeix_missatge(string id) const;
    
  /** @brief Consultora de un mensaje
      \pre existe un mensaje en el parametro implicito con ID = id
      \post El resultado es el mensaje con ID = id que contiene el parametro implicito
  */
  Missatge consultar_missatge(string id) const;
  /* Pre: existeix un estudiant al parametre implícit amb DNI = dni */
  /* Post: el resultat es l'estudiant amb DNI = dni que conte el
     parametre implicit */

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
