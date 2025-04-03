/*
Nomenclatura a usarse:
Variables: tipoNombre -> camelCase (ej. int contadorTotal)
Funciones: tipoNombre() -> camelCase (ej. calcularIMC(), mostrarMenu())
Clases: TipoNombre -> PascalCase (ej. Usuario, CalculadoraIMC)
Idioma: Español
*/


#include <iostream>   
#include <string>     
using namespace std;

// Clase Jugador 
class Jugador {
private:
    int cantidadEspada;
    int cantidadEscudo;
    int cantidadCasco;

public:
    string nombre;

    // Constructor por defecto: inicializa cantidades a 0 y asigna nombre de pacote.
    Jugador() {
        nombre = "Pacote";
        cantidadEspada = 0;
        cantidadEscudo = 0;
        cantidadCasco = 0;
    }

    // Muestra la información del jugador
    void mostrarObjetosJugador() {
        cout << "Jugador: " << nombre << endl;
        cout << "Cantidad de Espadas: " << cantidadEspada << endl;
        cout << "Cantidad de Escudos: " << cantidadEscudo << endl;
        cout << "Cantidad de Cascos: " << cantidadCasco << endl;
    }

    // Agrega espadas
    void agregarEspada(int cantidad) {
        cantidadEspada += cantidad;
    }
    // Agrega escudos
    void agregarEscudo(int cantidad) {
        cantidadEscudo += cantidad;
    }
    // Agrega cascos
    void agregarCasco(int cantidad) {
        cantidadCasco += cantidad;
    }

    // Evitar usar valores negativos en caso de que cantidad del item sea igual o menor 0.
    void eliminarEspada(int cantidad) {
        if (cantidadEspada >= cantidad)
            cantidadEspada -= cantidad;
        else
            cout << "No hay suficientes espadas para eliminar." << endl;
    }

    void eliminarEscudo(int cantidad) {
        if (cantidadEscudo >= cantidad)
            cantidadEscudo -= cantidad;
        else
            cout << "No hay suficientes escudos para eliminar." << endl;
    }

    void eliminarCasco(int cantidad) {
        if (cantidadCasco >= cantidad)
            cantidadCasco -= cantidad;
        else
            cout << "No hay suficientes cascos para eliminar." << endl;
    }
};

int main() {
    Jugador jugador;         // Crea el objeto jugador
    int opcion, cantidad;      // Variables para opción y cantidad
    bool continuar = true;     // Controla la ejecución del ciclo

    do {
        cout << "---------------------------------------------------" << endl;
        cout << "Que deseas hacer?" << endl;
        cout << "1. Agregar objetos" << endl;
        cout << "2. Eliminar objetos" << endl;
        cout << "3. Mostrar objetos" << endl;
        cout << "4. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Ingrese la cantidad de espadas a agregar: ";
            cin >> cantidad;
            jugador.agregarEspada(cantidad);
            cout << "Ingrese la cantidad de escudos a agregar: ";
            cin >> cantidad;
            jugador.agregarEscudo(cantidad);
            cout << "Ingrese la cantidad de cascos a agregar: ";
            cin >> cantidad;
            jugador.agregarCasco(cantidad);
            break;
        case 2:
            cout << "Ingrese la cantidad de espadas a eliminar: ";
            cin >> cantidad;
            jugador.eliminarEspada(cantidad);
            cout << "Ingrese la cantidad de escudos a eliminar: ";
            cin >> cantidad;
            jugador.eliminarEscudo(cantidad);
            cout << "Ingrese la cantidad de cascos a eliminar: ";
            cin >> cantidad;
            jugador.eliminarCasco(cantidad);
            break;
        case 3:
            jugador.mostrarObjetosJugador();
            break;
        case 4:
            continuar = false;  // Termina el ciclo
            break;
        default:
            cout << "Opcion invalida." << endl;
            break;
        }
        if (continuar) {      //Si continuar es verdadero muestra el system y clean.
            system("pause");  // Pausa la ejecución
            system("cls");    // Limpia la pantalla 
        }
    } while (continuar);

    return 0;
}
