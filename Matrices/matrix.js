//Ejercicio 1: Cuadrado Relleno
CuadradoRelleno() 
{
    this.vaciarMatriz();
    for (let i = 0; i < this.filas; i++) {
        for (let j = 0; j < this.columnas; j++) {
            this.matriz[i][j] = 1;
        }
    }
    this.dibujarMatriz();
}

//Ejericio 2: Marco interno
MarcoInterno()
{
    this.vaciarMatriz();
    for (let i = 0; i < this.filas; i++) {
        for (let j = 0; j < this.columnas; j++) {
            if (i === 0 || i === this.filas - 1 || j === 0 || j === this.columnas - 1) {
                this.matriz[i][j] = 0;
            } else {
                this.matriz[i][j] = 1;
            }
        }
    }
    this.dibujarMatriz();
}

//Ejercicio 3: Cruces
Cruces()
{
    this.vaciarMatriz();
    const mitadCol = Math.floor(this.columnas / 2);
    const mitadFilas = Math.floor(this.filas / 2);

    for (let i = 0; i < this.filas; i++) {
        for (let j = 0; j < this.columnas; j++) {
            if (j === mitadCol) {
                this.matriz[i][j] = 1;
            }
            if (i === mitadFilas) {
                this.matriz[i][j] = 1;
            }
        }
    }
    this.dibujarMatriz();
}

//Ejercicio 4: Bordes y Diagonales 
BordesYDiagonales()
{
    this.vaciarMatriz();
    for (let i = 0; i < this.filas; i++) {
        for (let j = 0; j < this.columnas; j++) {
            if (i == j || i + j == this.filas - 1){
                if ((i && j != this.filas - 2) && (i && j != 1)){
                    this.matriz[i][j] = 2;
                }
            }
            if ((i == 0 || i == this.filas - 1) || (j == 0 || j == this.columnas - 1)){
                this.matriz[i][j] = 1;
            }
        }
        this.dibujarMatriz();
        }
}

//Ejercicio 5: Bandera
Bandera()
{ 
    this.vaciarMatriz();
    const franjaAltura = Math.floor(this.filas / 3);
    for (let i = 0; i < franjaAltura; i++) { // Primera franja con 5
        for (let j = 0; j < this.columnas; j++) {
            this.matriz[i][j] = 5;
        }
    }
    for (let i = franjaAltura; i < 2 * franjaAltura; i++) { // Segunda franja con 6
        for (let j = 0; j < this.columnas; j++) {
            this.matriz[i][j] = 6;
        }
    }
    for (let i = 2 * franjaAltura; i < this.filas; i++) { // Tercera franja con 7
        for (let j = 0; j < this.columnas; j++) {
            this.matriz[i][j] = 7;
        }
    }
    this.dibujarMatriz();
}          

//Ejercicio 6: Relleno Alterno entre 0 y 1
RellenoAlterno() 
{
    this.vaciarMatriz();
    for (let i = 0; i < this.filas; i++) {
        for (let j = 0; j < this.columnas; j++) {
            this.matriz[i][j] = i % 2;
        }
    }
    this.dibujarMatriz();
}   

//Ejercicio 7: Diagonal
Diagonal() 
{
    this.vaciarMatriz();
    for (let i = 0; i < this.filas; i++) {
        for (let j = 0; j < this.columnas; j++) {
            if (i === j) {
                this.matriz[i][j] = 1;
            } else {
                this.matriz[i][j] = 0;
            }
        }
    }
    this.dibujarMatriz();
}                     
//Ejericio 8: Relleno en espiral
RellenoEspiral() 
{
    this.vaciarMatriz();
    let row = 0;
    let col = 0;
    let direction = 0; 
    let steps = 1;
    let stepCount = 0;

    for (let i = 0; i < this.columnas * this.filas; i++) {
        this.matriz[row][col] = 1;

        stepCount++;

        if (stepCount === steps) {
            stepCount = 0;
            direction = (direction + 1) % 4;
            if (direction % 2 === 0) {
                steps++;
            }
        }

        switch (direction) {
            case 0: 
                if (col + 1 >= this.columnas) {
                    break; 
                }
                col++;
                break;
            case 1:
                if (row + 1 >= this.filas) {
                    break;
                }
                row++;
                break;
            case 2: 
                if (col - 1 < 0) {
                    break; 
                }
                col--;
                break;
            case 3:
                if (row - 1 < 0) {
                    break;     
                }
                row--;
                break;
        }
    }

    this.dibujarMatriz();           
}

//Ejericio 9: Triangulo Superior Derecho
TrianguloSupIzq() 
{
    this.vaciarMatriz();
    for (let i = 0; i < this.filas; i++) {
        for (let j = 0; j <= i; j++) {  // Solo rellena hasta el índice 'i'
            this.matriz[i][j] = 1;
        }
    }
    this.dibujarMatriz();
}

//Ejericio 10: Triangulo Inferior Izquierdo
TrianguloInfDer() 
{
    this.vaciarMatriz();
    for (let i = 0; i < this.filas; i++) {
        for (let j = this.columnas - 1; j >= this.columnas - 1 - i; j--) {  // Rellena desde la derecha hasta donde se quiere
            this.matriz[i][j] = 1;
        }
    }this.dibujarMatriz();
}

//Ejericio 11: Cuadricula
Cuadricula() 
{
    this.vaciarMatriz();
    for (let i = 0; i < this.filas; i++) {
        for (let j = 0; j < this.columnas; j++) {
            // Alterna las filas y columnas con 1s
            if (i % 2 === 0 || j === 0 || j === this.columnas - 1) {
                this.matriz[i][j] = 1;
            } else {
                this.matriz[i][j] = 0;
            }
        }
    }
    this.dibujarMatriz();

}

//Ejercicio 12: Triangulo central
TrianguloCentral() 
{
    this.vaciarMatriz();
const centro = Math.floor(this.columnas / 2);
const alturaPiramide = Math.floor(this.filas / 2);
    for (let i = 0; i < alturaPiramide; i++) {
const inicio = centro - i;
const fin = centro + i;
    for (let j = 0; j < this.columnas; j++) {
    if (j >= inicio && j <= fin) {
     this.matriz[i][j] = 1; // Dibujar la pirámide en la parte superior
    } else {
    this.matriz[i][j] = 0; // Resto en 0
    }
    }
}
this.dibujarMatriz();
}

//Ejercicio 13: Rombos Concentricos
RombosConcentricos()
{
    this.vaciarMatriz();
    const centro = Math.floor(this.columnas / 2);
    const alturaPiramide = Math.floor(this.filas / 2);

    for (let i = 0; i < alturaPiramide; i++) {
        const inicio = centro - i;
        const fin = centro + i;

        for (let j = inicio; j <= fin; j++) {
            this.matriz[i][j] = 1; 
        }
    }

    for (let i = 0; i < alturaPiramide; i++) {
        const inicio = centro - i;
        const fin = centro + i;

        for (let j = inicio; j <= fin; j++) {
            this.matriz[this.filas - 1 - i][j] = 1; 
        }
    }

    this.dibujarMatriz();

    
}

//Ejercicio 14: Cruces Concentricas
CrucesConcentricas()
{
    this.vaciarMatriz();
    
}

//Ejercicio 15: Bandera Diagonal
BanderaDeNepal()
{
    this.vaciarMatriz();
    for (let i = 0; i < this.filas; i++) {
        for (let j = 0; j <= i; j++) {  // Solo rellena hasta el índice 'i'
            this.matriz[i][j] = 1;
        }
    }
    this.dibujarMatriz();
}

//Ejercicio 16: Cuadrado dentro de un cuadrado
CuadradoDentroCuadrado()
{
    this.vaciarMatriz();
    for (let i = 0; i < this.filas; i++) {
        for (let j = 0; j < this.columnas; j++) {
            // Bordes externos
            if (i === 0 || i === this.filas - 1 || j === 0 || j === this.columnas - 1) {
                this.matriz[i][j] = 1;
            }
            // Cuadrado interno de "2"
            else if ((i >= 2 && i <= this.filas - 3) && (j >= 2 && j <= this.columnas - 3)) {
                // Bordes del cuadrado interno
                if (i === 2 || i === this.filas - 3 || j === 2 || j === this.columnas - 3) {
                    this.matriz[i][j] = 2;
                } else {
                    // Centro vacío del cuadrado interno
                    this.matriz[i][j] = 0;
                }
            }
            // Resto del área intermedia
            else {
                this.matriz[i][j] = 0;
            }
        }
    }
    this.dibujarMatriz();
}

//Ejercicio 17: Bordes y Centros 
BordesYCentros()
{
    this.vaciarMatriz();
    for (let i = 0; i < this.filas; i++) {
        for (let j = 0; j < this.columnas; j++) {
            if (i === 0 || i === this.filas - 1 || j === 0 || j === this.columnas - 1) {
                this.matriz[i][j] = 1;
            } else if (i >= 3 && i <= 6 && j >= 3 && j <= 6) {
                this.matriz[i][j] = 2;
            } else {
                this.matriz[i][j] = 0;
            }
        }
    }
    this.dibujarMatriz();
}

//Ejercicio 18: Lineas Paralelas
LineasParalelas()
{
    this.vaciarMatriz();
    for (let i = 0; i < this.filas; i++) {
        for (let j = 0; j < this.columnas; j++) {
            if (i % 2 === 0) {
                this.matriz[i][j] = 1;
            } else {
                if (j === 0 || j === this.columnas - 1) {
                    this.matriz[i][j] = 1;
                }
            }
        }
    }this.dibujarMatriz();
}

//Ejercicio 19: Marcas de Cruz
MarcasDeCruz()
{
    this.vaciarMatriz();
    for (let i = 0; i < this.filas; i++) {
        for (let j = 0; j < this.columnas; j++) {
            this.matriz[i][j] = (i % 4 === j % 4) ? 1 : 0;
        }
    }this.dibujarMatriz();
}

//Ejercicio 20: Rombo de Esquinas
RomboDeEsquinas()
{
    this.vaciarMatriz();
    const tamRombo = 3; // Tamaño del rombo desde la esquina hacia el centro
// Dibuja rombo en la esquina superior izquierda
for (let i = 0; i <= tamRombo; i++) {
    for (let j = 0; j <= tamRombo - i; j++) {
        this.matriz[i][j] = 1;
        this.matriz[j][i] = 1;
    }
}
// Dibuja rombo en la esquina superior derecha
for (let i = 0; i <= tamRombo; i++) {
    for (let j = 0; j <= tamRombo - i; j++) {
        this.matriz[i][this.columnas - 1 - j] = 1;
        this.matriz[j][this.columnas - 1 - i] = 1;
    }
}
// Dibuja rombo en la esquina inferior izquierda
for (let i = 0; i <= tamRombo; i++) {
    for (let j = 0; j <= tamRombo - i; j++) {
        this.matriz[this.filas - 1 - i][j] = 1;
        this.matriz[this.filas - 1 - j][i] = 1;
    }
}
// Dibuja rombo en la esquina inferior derecha
for (let i = 0; i <= tamRombo; i++) {
    for (let j = 0; j <= tamRombo - i; j++) {
        this.matriz[this.filas - 1 - i][this.columnas - 1 - j] = 1;
        this.matriz[this.filas - 1 - j][this.columnas - 1 - i] = 1;
    }
}
this.dibujarMatriz();

}

//Ejercicio 21: Relleno en Forma de Ajedrez
RellenoDeAjedrez()
{ 
    this.vaciarMatriz();
    for (let i = 0; i < this.filas; i++) {
        for (let j = 0; j < this.columnas; j++) {
            // Alternar entre 1 y 0 para crear el patrón de ajedrez
            if ((i + j) % 2 === 0) {
                this.matriz[i][j] = 1;
            } else {
                this.matriz[i][j] = 0;
            }
        }
    }this.dibujarMatriz();
}

//Ejercicio 22: Reloj de Arena
RelojDeArena()
{
    this.vaciarMatriz();
    for (let i = 0; i < this.filas; i++) {
        for (let j = 0; j < this.columnas; j++) {
            if (j >= i && j < this.columnas - i || j >= this.columnas - i - 1 && j <= i) {
                this.matriz[i][j] = 1;
            }
        }
    }this.dibujarMatriz();
}
// Fin de la tarea