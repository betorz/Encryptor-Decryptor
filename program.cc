#ifndef NO_DIAGRAM
#include <iostream>
#endif
#include "Missatge.hh"
#include "Alfabet.hh"
#include "Cjt_missatges.hh"
#include "Cjt_alfabets.hh"
using namespace std;



int main () {
    int n_alf, n_mis;
    cin >> n_alf;
    Cjt_alfabets alfabets(n_alf);
    alfabets.llegir();
    cin >> n_mis;
    Cjt_missatges missatges(n_mis);
    missatges.llegir();

    string comando;
    cin >> comando;
    while (comando != "fin") {
        if (comando == "nuevo_mensaje" or comando == "nm") {
            string idm, ida;
            cin >> idm >> ida;
            Missatge mis(idm, ida);
            missatges.afegir_missatge(mis);
        }
        else if (comando == "nuevo_alfabeto" or comando == "na") {
            string ida;
            cin >> ida;
            Alfabet alf(ida);
            alfabets.afegir_alfabet(alf);
        }
        else if (comando == "borra_mensaje" or comando == "bm") {
            string idm;
            cin >> idm;
            missatges.eliminar_missatge(idm);
        }
        else if (comando == "borra_alfabeto" or comando == "ba") {
            string ida;
            cin >> ida;
            alfabets.eliminar_alfabet(ida);
        }
        else if (comando == "listar_mensajes" or comando == "lm") {
            missatges.escriure();
        }
        else if (comando == "listar_alfabetos" or comando == "la") {
            alfabets.escriure();
        }
        else if (comando == "codificar_sustitucion_guardado" or comando == "cl") {
            string idm;
            string cl;
            cin >> idm >> cl;
            Missatge mis = missatges.consultar_missatge(idm);
            mis.codificar_missatge_sust(cl);
            missatges.modificar_missatge(mis);
        }
        else if (comando == "codificar_sustitucion" or comando == "cs") {
            string ida;
            string cl;
            cin >> ida >> cl;
            Missatge mis;
            mis.llegir();
            mis.codificar_missatge_sust(cl);
            missatges.afegir_missatge(mis);
        }
        else if (comando == "decodificar_sustitucion" or comando == "ds") {
            string ida;
            string cl;
            cin >> ida >> cl;
            Missatge mis;
            mis.llegir();
            mis.decodificar_missatge_sust(cl);
            missatges.afegir_missatge(mis);
        }
        else if (comando == "codificar_permutacion_guardado" or comando == "cpg") {
            string idm;
            int b;
            cin >> idm >> b;
            Missatge mis = missatges.consultar_missatge(idm);
            mis.codificar_missatge_perm(b);
            missatges.modificar_missatge(mis);
        }
        else if (comando == "codificar_permutacion" or comando == "cp") {
            int b;
            cin >> b;
            Missatge mis;
            mis.llegir();
            mis.codificar_missatge_perm(b);
            missatges.afegir_missatge(mis);
        }
        else if (comando == "decodificar_permutacion" or comando == "dp") {
            int b;
            cin >> b;
            Missatge mis;
            mis.llegir();
            mis.decodificar_missatge_perm(b);
            missatges.afegir_missatge(mis);
        }
        cin >> comando;
    }
}
