#include <iostream>
using namespace std;
class materia {
    public:
    materia(string _nombre, string _sigla, string _docente, string _aula, string _pre, string _carrera, string _universidad, int _cant_ins)
    {
        nombre = _nombre;
        sigla = _sigla;
        docente = _docente;
        aula = _aula;
        pre = _pre;
        carrera = _carrera;
        universidad = _universidad;
        cant_ins = _cant_ins;
    }

    void set_horarios(string horario1, string horario2, string horario3 )
    {
        horarios [0] = horario1;
        horarios [1] = horario2;
        horarios [2] = horario3;
    }

    void set_modalidad(string _modalidad)
    {
        modalidad = _modalidad;
    }

    void set_calif_mini(int _calif_mini)
    {
        calif_mini = _calif_mini;
    }

    void set_temas(string temas1, string temas2,string temas3)
    {
        temas[0] = temas1;
        temas[1] = temas2;
        temas[2] = temas3;
    }

    void set_ubi(string latitud, string longitud)
    {
        ubi[0]=latitud;
        ubi[1]=longitud;
    }

    void mod_nombre(string _nombre)
    {
        nombre = _nombre;
    }

    void mod_sigla(string _sigla)
    {
        sigla = _sigla;
    }

    void mod_docente(string _docente)
    {
        docente = _docente;
    }

    void mod_aula(string _aula)
    {
        aula = _aula;
    }

    void mod_pre(string _pre)
    {
        pre = _pre;
    }

    void mod_carrera(string _carrera)
    {
        carrera = _carrera;
    }

    void mod_universidad(string _universidad)
    {
        universidad = _universidad;
    }

    void mod_cant_ins(int _cant_ins)
    {
        cant_ins = _cant_ins;
    }

    void del_nombre()
    {
        nombre = "\n";
    }
    void del_sigla()
    {
        sigla = "\n";
    }
    void del_docente() {
        docente = "\n";
    }
    void del_aula() {
        aula = "\n";
    }
    void del_pre() {
        pre = "\n";
    }
    void del_universidad() {
        universidad = "\n";
    }
    void del_carrera() {
        carrera = "\n";
    }
    void del_cant_ins() {
        cant_ins = 0;
    }
    private:
    string nombre;
    string sigla;
    string docente;
    string horarios[3];
    string aula;
    string pre;
    string carrera;
    string universidad;
    int cant_ins;
    string modalidad;
    int calif_mini;
    string temas [3];
    string ubi[2];
};
int main() {
    materia ELC341("Sistemas inteligentes","elc-341","Carmen Rosa Marin Salazar","-","sis-111","Ing. Mecatronica","Universidad catolica",7);
    ELC341.set_modalidad("virtual");
    ELC341.set_horarios("Lunes 20-21:30","Viernes 18:20-20:45","nada");
    ELC341.set_calif_mini(60);


    materia IMT221("Cicuitos electronicos 3","imt-221","Santos Carlos Huayta Paucar","Lab robotica","imt-122","Ing. Mecatronica","Universidad catolica",21);
    IMT221.set_modalidad("presencial");
    IMT221.set_horarios("Martes 9:55-12:20","Jueves 9:55-12:20","nada");
    IMT221.set_calif_mini(60);

    materia SIS112("Programacion 1","sis-112","Eddy Escalante Ustariz","Lab computo 5","sis-111","Ing. Mecatronica","Universidad catolica",15);
    SIS112.set_modalidad("presencial");
    SIS112.set_horarios("Lunes 10:50-12:20","Viernes 9:10-11:30","nada");
    SIS112.set_calif_mini(60);

    return 0;
}
