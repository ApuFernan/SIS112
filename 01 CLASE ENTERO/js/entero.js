class Entero
{
    //atributos
    Num;

    //constructor - inicializa el objeto
    constructor(Numero)
    {
        this.Num = Numero;
    }

    //cargar el valor de Num
    setNum()
    {
        const input = document.getElementById("numeroInput");
        this.Num = parseInt(input.value, 10);
    }

    //CLASS - Obtener el valor de Num
    getNum()
    {
        return this.Num;
    }

    //CLASS - Mostrar el valor de Num
    showNum()
    {
        const resultadoDiv = document.getElementById("resultado");
        resultadoDiv.textContent = this.getNum();
    }

    showResultado(respuesta)
    {
        const resultadoDiv = document.getElementById("resultado");
        resultadoDiv.textContent = respuesta;
    }

    showParImpar(respuesta_parimpar)
    {
        const resultadoDiv = document.getElementById("resultado");
        resultadoDiv.textContent = respuesta_parimpar;
    }

    incrementarNum()
    {
        this.Num = this.Num + 1;
    }

    decrementarNum()
    {
        this.Num = this.Num - 1;
    }

    esParImpar()
    {
        return (this.Num % 2 == 0)
    }

    esPositivoNegativo()
    {
        return (this.Num > 0)
    }
}

//las funciones = button HTML
var ClaseEntero = new Entero(0); //se inicializo en 0

//crear el objeto
function cargarNum()
{
    ClaseEntero.setNum();
}

//mostrar el valor de hum en html
function mostrarNum()
{
    ClaseEntero.showNum();
}

//incrementar el valor de NUM
function incrementarValor()
{
    ClaseEntero.incrementarNum();
    ClaseEntero.showNum();
}

//decrementar el valor de NUM
function decrementarValor()
{
    ClaseEntero.decrementarNum();
    ClaseEntero.showNum();
}

//verifica si es par o impar
function esParImparNum()
{
    var respuesta = ClaseEntero.esParImpar();
    var resp = respuesta ? "Es Num Par":"Es Num Impar";
    ClaseEntero.showResultado(resp);

}

//verifica si es negativo o positivo
function esPositivoNegativoNum()
{
    var respuesta_parimpar = ClaseEntero.esPositivoNegativo();
    var verif_parimpar = respuesta_parimpar ? "Es Positivo":"Es Negativo";
    ClaseEntero.showParImpar(verif_parimpar);

}