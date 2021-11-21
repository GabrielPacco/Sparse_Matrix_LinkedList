/*

Implemente la estructura Ma Esparza usando Listas Enlazadas. Con las siguientes operaciones:

init(A,m,n): Que reciba como entrada una Ma m*n A  y la convierta en una Ma esparza.

init(T,nz): Que reciba como entrada un arreglo de triplas  (posición fila, posición columna y valor) 
            de longitud nz y que la transforme en una Ma esparza. Asuma que el arreglo de triplas está ordenado
            ascendentemente por el valor de las columnas; si hubiese dos registros con el mismo valor de columna
            entonces está ordenado ascendentemente por las filas.
		
		Struct triple{
	int row;
	int col;
	double value;
};

triple* T = (triple*)malloc(nz*sizeof(triple));

sparseMatrix triple_to_sparseMatrix(triple* T,int nz){
	
}

get(i,j): Recupera el valor de la posición (i,j).

set(i,j,x): Asigna el valor x en la posición (i,j). Asuman que la posición (i,j) existe en la Ma.

transpose(B): Obtiene la transpuesta de la Ma esparza B, la transpuesta también debe ser esparza.

*/
// Cadena de filas
struct rowChain{
	int col;  // indice de las columna
	double value;  // valor almacenado
	rowChain* next;  // siguiente columna
};

// encabezado de fila
struct rowHeader{
	int row;    // indice de la fila
	rowChain* rowElements;  // cadena de elementos de la fila
	rowHeader* next;  // siguiente fila
};

struct sparseMatrix{
	int m; // número de filas
	int n; // número de columnas
	int nz; // número de entradas
	rowHeader* firstRow = nullptr;  // puntero a la primera fila
};
