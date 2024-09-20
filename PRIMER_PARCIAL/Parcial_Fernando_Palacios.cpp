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

    void mod_horarios(string horario1, string horario2, string horario3 )
    {
        horarios [0] = horario1;
        horarios [1] = horario2;
        horarios [2] = horario3;
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
    void del_horarios()
    {
        horarios [0] = "\n";
        horarios [1] = "\n";
        horarios [2] = "\n";
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
    string aux1, aux2,aux3;
    int aux;
    int num_materia;
    int modif;

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
    cout<<"Que materia desea modificar?"<<endl;
    cout<<"1: elc-341"<<endl;
    cout<<"2: imt-221"<<endl;
    cout<<"3: SIS112"<<endl;
    cin>>num_materia;

    cout<<"Que desea modificar:"<<endl;
    cout<<" 1: Modificar nombre"<<endl;
    cout<<" 2: Modificar sigla"<<endl;
    cout<<" 3: Modificar docente"<<endl;
    cout<<" 4: Modificar aula"<<endl;
    cout<<" 5: Modificar pre requisito"<<endl;
    cout<<" 6: Modificar Carrera"<<endl;
    cout<<" 7: Modificar Universidad"<<endl;
    cout<<" 8: Modificar cantidad de inscritos"<<endl;
    cout<<" 9: Modificar Horarios"<<endl;
    cout<<" 10: Eliminar nombre"<<endl;
    cout<<"11: Eliminar sigla"<<endl;
    cout<<"12: Eliminar docente"<<endl;
    cout<<"13: Eliminar aula"<<endl;
    cout<<"14: Eliminar pre requisito"<<endl;
    cout<<"15: Eliminar Carrera"<<endl;
    cout<<"16: Eliminar Universidad"<<endl;
    cout<<"17: Eliminar cantidad de inscritos"<<endl;
    cout<<"18: Eliminar Horarios"<<endl;
    cin>>modif;
    if(num_materia==1) {
        switch(modif) {
            case 1:
                cout<<"Ingrese el nuevo nombre: "<<endl;
                cin>>aux1;
                ELC341.mod_nombre(aux1);
                break;
            case 2:
                cout<<"Ingrese la nueva sigla: "<<endl;
                cin>>aux1;
                ELC341.mod_sigla(aux1);
                break;
            case 3:
                cout<<"Ingrese el nuevo docente: "<<endl;
                 cin>>aux1;
                ELC341.mod_docente(aux1);
                break;
            case 4:
                cout<<"Ingrese la nueva aula: "<<endl;
                cin>>aux1;
                ELC341.mod_aula(aux1);
                break;
            case 5:
                cout<<"Ingrese el nuevo pre requisito: "<<endl;
                 cin>>aux1;
                ELC341.mod_pre(aux1);
                break;
            case 6:
                cout<<"Ingrese la nueva Carrera: "<<endl;
                cin>>aux1;
                ELC341.mod_carrera(aux1);
                break;
            case 7:
                cout<<"Ingrese la nueva Universidad: "<<endl;
                cin>>aux1;
                ELC341.mod_universidad(aux1);
                break;
            case 8:
                cout<<"Ingrese la nueva cantidad de inscritos: "<<endl;
                cin>>aux;
                ELC341.mod_cant_ins(aux);
                break;
            case 9:
                cout<<"Ingrese los nuevos horarios"<<endl;
                cin>>aux1;
                cin>>aux2;
                cin>>aux3;
                ELC341.mod_horarios(aux1,aux2,aux3);
                break;
            case 10:
                cout<<"Se elimino el nombre"<<endl;
                ELC341.del_nombre();
                break;
            case 11:
                cout<<"Se elimino la sigla"<<endl;
                ELC341.del_sigla();
                break;
            case 12:
                cout<<"se elimino el docente"<<endl;
                ELC341.del_docente();
                break;
            case 13:
                cout<<"Se elimino el aula"<<endl;
                ELC341.del_aula();
                break;
            case 14:
                cout<<"Se elimino el pre requisito"<<endl;
                ELC341.del_pre();
                break;
            case 15:
                cout<<"Se elimino la Carrera"<<endl;
                ELC341.del_carrera();
                break;
            case 16:
                cout<<"Se elimino la Universidad"<<endl;
                ELC341.del_universidad();
                break;
            case 17:
                cout<<"Se elimino el cantidad de inscritos"<<endl;
                ELC341.del_cant_ins();
                break;
            case 18:
                cout<<"se elimino el horario"<<endl;
                ELC341.del_horarios();
                break;
            default:
                cout<<"No encontrado"<<endl;
            break;
        }
    }

    if(num_materia==2) {
        switch(modif) {
            case 1:
                cout<<"Ingrese el nuevo nombre: "<<endl;
                cin>>aux1;
                IMT221.mod_nombre(aux1);
                break;
            case 2:
                cout<<"Ingrese la nueva sigla: "<<endl;
                cin>>aux1;
                IMT221.mod_sigla(aux1);
                break;
            case 3:
                cout<<"Ingrese el nuevo docente: "<<endl;
                 cin>>aux1;
                IMT221.mod_docente(aux1);
                break;
            case 4:
                cout<<"Ingrese la nueva aula: "<<endl;
                cin>>aux1;
                IMT221.mod_aula(aux1);
                break;
            case 5:
                cout<<"Ingrese el nuevo pre requisito: "<<endl;
                 cin>>aux1;
                IMT221.mod_pre(aux1);
                break;
            case 6:
                cout<<"Ingrese la nueva Carrera: "<<endl;
                cin>>aux1;
                IMT221.mod_carrera(aux1);
                break;
            case 7:
                cout<<"Ingrese la nueva Universidad: "<<endl;
                cin>>aux1;
                IMT221.mod_universidad(aux1);
                break;
            case 8:
                cout<<"Ingrese la nueva cantidad de inscritos: "<<endl;
                cin>>aux;
                IMT221.mod_cant_ins(aux);
                break;
            case 9:
                cout<<"Ingrese los nuevos horarios"<<endl;
                cin>>aux1;
                cin>>aux2;
                cin>>aux3;
                IMT221.mod_horarios(aux1,aux2,aux3);
                break;
            case 10:
                cout<<"Se elimino el nombre"<<endl;
                IMT221.del_nombre();
                break;
            case 11:
                cout<<"Se elimino la sigla"<<endl;
                IMT221.del_sigla();
                break;
            case 12:
                cout<<"se elimino el docente"<<endl;
                IMT221.del_docente();
                break;
            case 13:
                cout<<"Se elimino el aula"<<endl;
                IMT221.del_aula();
                break;
            case 14:
                cout<<"Se elimino el pre requisito"<<endl;
                IMT221.del_pre();
                break;
            case 15:
                cout<<"Se elimino la Carrera"<<endl;
                IMT221.del_carrera();
                break;
            case 16:
                cout<<"Se elimino la Universidad"<<endl;
                IMT221.del_universidad();
                break;
            case 17:
                cout<<"Se elimino el cantidad de inscritos"<<endl;
                IMT221.del_cant_ins();
                break;
            case 18:
                cout<<"se elimino el horario"<<endl;
                IMT221.del_horarios();
                break;
            default:
                cout<<"No encontrado"<<endl;
            break;
        }
    }

    if(num_materia==3) {
        switch(modif) {
            case 1:
                cout<<"Ingrese el nuevo nombre: "<<endl;
                cin>>aux1;
                SIS112.mod_nombre(aux1);
                break;
            case 2:
                cout<<"Ingrese la nueva sigla: "<<endl;
                cin>>aux1;
                SIS112.mod_sigla(aux1);
                break;
            case 3:
                cout<<"Ingrese el nuevo docente: "<<endl;
                 cin>>aux1;
                SIS112.mod_docente(aux1);
                break;
            case 4:
                cout<<"Ingrese la nueva aula: "<<endl;
                cin>>aux1;
                SIS112.mod_aula(aux1);
                break;
            case 5:
                cout<<"Ingrese el nuevo pre requisito: "<<endl;
                 cin>>aux1;
                SIS112.mod_pre(aux1);
                break;
            case 6:
                cout<<"Ingrese la nueva Carrera: "<<endl;
                cin>>aux1;
                SIS112.mod_carrera(aux1);
                break;
            case 7:
                cout<<"Ingrese la nueva Universidad: "<<endl;
                cin>>aux1;
                SIS112.mod_universidad(aux1);
                break;
            case 8:
                cout<<"Ingrese la nueva cantidad de inscritos: "<<endl;
                cin>>aux;
                SIS112.mod_cant_ins(aux);
                break;
            case 9:
                cout<<"Ingrese los nuevos horarios"<<endl;
                cin>>aux1;
                cin>>aux2;
                cin>>aux3;
                SIS112.mod_horarios(aux1,aux2,aux3);
                break;
            case 10:
                cout<<"Se elimino el nombre"<<endl;
                SIS112.del_nombre();
                break;
            case 11:
                cout<<"Se elimino la sigla"<<endl;
                SIS112.del_sigla();
                break;
            case 12:
                cout<<"se elimino el docente"<<endl;
                SIS112.del_docente();
                break;
            case 13:
                cout<<"Se elimino el aula"<<endl;
                SIS112.del_aula();
                break;
            case 14:
                cout<<"Se elimino el pre requisito"<<endl;
                SIS112.del_pre();
                break;
            case 15:
                cout<<"Se elimino la Carrera"<<endl;
                SIS112.del_carrera();
                break;
            case 16:
                cout<<"Se elimino la Universidad"<<endl;
                SIS112.del_universidad();
                break;
            case 17:
                cout<<"Se elimino el cantidad de inscritos"<<endl;
                SIS112.del_cant_ins();
                break;
            case 18:
                cout<<"se elimino el horario"<<endl;
                SIS112.del_horarios();
                break;
            default:
                cout<<"No encontrado"<<endl;
            break;
        }
    }

    return 0;
}
