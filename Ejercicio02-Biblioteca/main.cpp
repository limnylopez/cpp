#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

string libros[39][3];

void cargarLibros() {
    // Arreglo con categoria y descripcion
	libros[0][0] = "Algoritmos"; 
	libros[0][1] = "Algoritmos y Programacion (Guia para docentes)";
	libros[0][2] = "Darcy, Laura";
	
	libros[1][0] = "Algoritmos"; 
	libros[1][1] = "Apuntes de Algoritmos y Estructuras de Datos";
	libros[1][2] = "Parker";
	
	libros[2][0] = "Algoritmos"; 
	libros[2][1] = "Breves Notas sobre Analisis de Algoritmos";
	libros[2][2] = "Sanders";
	
	libros[3][0] = "Algoritmos"; 
	libros[3][1] = "Fundamentos de Informatica y Programacion";
	libros[3][2] = "Harvey";
	
	libros[4][0] = "Algoritmos"; 
	libros[4][1] = "Temas selectos de estructuras de datos";
	libros[4][2] = "Kamin,Jonathan";
	
	libros[5][0] = "Algoritmos"; 
	libros[5][1] = "Teoria sintactico-gramatical de objetos";
	libros[5][2] = "Palmas Velasco";
	
	libros[6][0] = "Base de Datos"; 
	libros[6][1] = "Apuntes de Base de Datos 1";
	libros[6][2] = "Person";
	
	libros[7][0] = "Base de Datos"; 
	libros[7][1] = "Base de Datos (2005)";
	libros[7][2] = "Neuman";
	
	libros[8][0] = "Base de Datos"; 
	libros[8][1] = "Base de Datos (2011)";
	libros[8][2] = "Sally";
	
	libros[9][0] = "Base de Datos"; 
	libros[9][1] = "Base de Datos Avanzadas (2013)";
	libros[9][2] = "Ron, Person";
	
	libros[10][0] = "Base de Datos"; 
	libros[10][1] = "Diseno Conceptual de Bases de Datos";
	libros[10][2] = "Neuman";
	
	libros[11][0] = "Ciencia Computacional"; 
	libros[11][1] = "Breves Notas sobre Automatas y Lenguajes";
	libros[11][2] = "George, Beekman";
	
	libros[12][0] = "Ciencia Computacional"; 
	libros[12][1] = "Breves Notas sobre Teoria de la Computacion";
	libros[12][2] = "Puig Torne";
	
	libros[13][0] = "Metodologias de desarrollo de software"; 
	libros[13][1] = "Compendio de Ingenieria del Software";
	libros[13][2] = "Mark Allen";
	
	libros[14][0] = "Metodologias de desarrollo de software"; 
	libros[14][1] = "Diseno agil con TDD";
	libros[14][2] = "Jamsa";

	libros[15][0] = "Metodologias de desarrollo de software"; 
	libros[15][1] = "Ingenieria de Software: Una Guia para Crear Sistemas de Informacion";
	libros[15][2] = "Steve Jobs";
	
	libros[16][0] = "Metodologias de desarrollo de software"; 
	libros[16][1] = "Scrum & Extreme Programming (para programadores)";
	libros[16][2] = "Gareth";
	
	libros[17][0] = "Metodologias de desarrollo de software"; 
	libros[17][1] = "Scrum y XP desde las trincheras";
	libros[17][2] = "Williams";
	
	libros[18][0] = "Miscelaneos"; 
	libros[18][1] = "97 cosas que todo programador deberia saber";
	libros[18][2] = "Castro Lechtaler";
	
	libros[19][0] = "Miscelaneos"; 
	libros[19][1] = "Docker";
	libros[19][2] = "Castro Lechtaler";
	
	libros[20][0] = "Miscelaneos"; 
	libros[20][1] = "El camino a un mejor programador";
	libros[20][2] = "Fuentes Pinzon";
	
	libros[21][0] = "Miscelaneos"; 
	libros[21][1] = "Introduccion a Docker";
	libros[21][2] = "Williams";
	
	libros[22][0] = "Miscelaneos"; 
	libros[22][1] = "Programacion de videojuegos SDL";
	libros[22][2] = "Fuentes Pinzon";
	
	libros[23][0] = "PHP"; 
	libros[23][1] = "Manual de estudio introductorio al lenguaje PHP procedural";
	libros[23][2] = "Prieto Espinoza";
	
	libros[24][0] = "PHP"; 
	libros[24][1] = "PHP y Programacion orientada a objetos";
	libros[24][2] = "Gareth";
	
	libros[25][0] = "PHP"; 
	libros[25][1] = "POO y MVC en PHP";
	libros[25][2] = "Jamsa, Kris";
	
	libros[26][0] = "PHP"; 
	libros[26][1] = "Silex, el manual oficial";
	libros[26][2] = "Weiss";
	
	libros[27][0] = "PHP"; 
	libros[27][1] = "Symfony 1.4, la guia definitiva";
	libros[27][2] = "Puig Torne";
	
	libros[28][0] = "PHP"; 
	libros[28][1] = "Symfony 2.4, el libro oficial";
	libros[28][2] = "Beekman";
	
	libros[29][0] = "Python"; 
	libros[29][1] = "Aprenda a pensar como un programador (con Python)";
	libros[29][2] = "Person";
	
	libros[30][0] = "Python"; 
	libros[30][1] = "Doma de Serpientes para Ninos: Aprendiendo a Programar con Python";
	libros[30][2] = "Ron";
	
	libros[31][0] = "Python"; 
	libros[31][1] = "Inmersion en Python";
	libros[31][2] = "Person,Ron";
	
	libros[32][0] = "Python"; 
	libros[32][1] = "Inmersion en Python 3";
	libros[32][2] = "Neuman";
	
	libros[33][0] = "Python"; 
	libros[33][1] = "Introduccion a la programacion con Python";
	libros[33][2] = "Sally";
	
	libros[34][0] = "Python"; 
	libros[34][1] = "Introduccion a Programando con Python";
	libros[34][2] = "Kamin";
	
	libros[35][0] = "Python"; 
	libros[35][1] = "Python instantaneo (1999)";
	libros[35][2] = "Jonathan";
	
	libros[36][0] = "Python"; 
	libros[36][1] = "Python para ciencia e ingenieria";
	libros[36][2] = "Person";
	
	libros[37][0] = "Python"; 
	libros[37][1] = "Python para principiantes";
	libros[37][2] = "Neuman";
	
	libros[38][0] = "Python"; 
	libros[38][1] = "Python para todos";
	libros[38][2] = "Person";
}


int main(int argc, char const *argv[])
{
    cargarLibros();

    srand (time(NULL));//Semilla para inicializar numeros al azar.
    
    bool salir = false;

    while (salir == false)
    {
        string buscar = "";
        system("cls");
        cout << "Ingrese el nombre del autor que desea encontrar: ";
        cin >> buscar;

        // busqueda
        for (int i = 0; i < 39; i++)
        {
            string libro = libros[i][2];
            string autor = libros[1][i];
            string libroEnminuscula = autor;
            string autorEnminuscula = libro;
            // transformamos a minuscula los string buscar y libro
			transform(autorEnminuscula.begin(), autorEnminuscula.end(), autorEnminuscula.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);
				
            if (libroEnminuscula.find(buscar) != string::npos||autorEnminuscula.find(buscar) != string::npos) {
                cout << "El autor que encontramos fue: " << libro << endl;

                cout << "De acuerdo al autor, te sugerimos estos libros: " << endl;

                int sugerencia1 = rand() % 38 + 1;
                int sugerencia2 = rand() % 38 + 1;
                int sugerencia3 = rand() % 38 + 1;

                cout << " Sugerencia 1: " << libros[sugerencia1][1] << endl;
                cout << " Sugerencia 2: " << libros[sugerencia2][1] << endl;
                cout << " Sugerencia 3: " << libros[sugerencia3][1] << endl;

                salir = true;
                break;
            }
        }

        if (salir == false) {
            char continuar = 'n';

            while(true) {
                system("cls");
                cout << "No se encontro el libros del autor que busca. Desea continuar? s/n ";
                cin >> continuar;

                if (continuar == 's' || continuar == 'S') {
                    break;
                } else if (continuar == 'n' || continuar == 'N') {
                    salir = true;
                    break;
                }
            }
        }
    }
    
    return 0;
}