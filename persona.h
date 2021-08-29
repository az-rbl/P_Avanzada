#include <iostream>//le permite al programa sacar información a la pantalla
using std::string;//el programa usa string

class persona{
public:
    persona();
    void set_nombre(string);
    void set_apellidop(string);
    void set_apellidom(string);
    void set_telefono(string);

    string get_nombre();
    string get_apellidop();
    string get_apellidom();
    string get_telefono();

    void Escribe_info();

private:

    string nombre;
    string apelidop;
    string apellidom;
    string telefono;
}
