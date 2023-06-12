#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream fileIn;
    fileIn.open("Ejemplo.txt");
    string type;
    string idVideo,titulo,genero,duracion,calificacion;
    string serie,episodio,temporada;
    int count = 0;
    while (fileIn >> type) {
        count++;
        if (type == "p") {
            //  idVideo El_titulo El_genero duración calificación
            fileIn >> idVideo >> titulo >> genero >> duracion >> calificacion;
            cout << count << "\tPelicula: " << idVideo << titulo << genero << duracion << calificacion << endl;
        } else { // se supone es "e"
            fileIn >> idVideo >> titulo >> genero >> duracion >> calificacion >> serie >> episodio >> temporada;
            cout << count << "\tSerie: " << idVideo << titulo << genero << duracion << calificacion << endl;
        }
    }
}