#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<cmath>
#include<vector>
#include<string.h>
using namespace std;

 // CLASE PADRE ARMAMENTO
class Armamento
{
	private:
		int cant_armas_fuego;
		int cant_armas_blancas;
	public:
		void getcant_armas_fuego(int);
		int setcant_armas_fuego();
		void getcant_armas_blancas(int);
		int setcant_armas_blancas();
};

void Armamento::getcant_armas_fuego(int _cant_armas_fuego)     // 	Metodos get y set de Armamento
{
	cant_armas_fuego = _cant_armas_fuego; 
}

int Armamento::setcant_armas_fuego()
{
	return cant_armas_fuego;
}

void Armamento::getcant_armas_blancas(int _cant_armas_blancas)
{
	cant_armas_blancas = _cant_armas_blancas; 
}

int Armamento::setcant_armas_blancas()
{
	return cant_armas_blancas;
}

//*************************************************************************************************************************//

// CLASE HIJA ARMAS_FUEGO 

class Armas_Fuego : public Armamento
{
	private:
		int cant_pistola;
		int cant_escopeta;
	public:
		void getcant_pistola(int);
		int setcant_pistola();
		void getcant_escopeta(int);
		int setcant_escopeta();
};

void Armas_Fuego::getcant_pistola(int _cant_pistola)            // Metodo get y set de la clase Armas_Fuego
{
	cant_pistola = _cant_pistola;
}

int Armas_Fuego::setcant_pistola()
{
	return cant_pistola;
}

void Armas_Fuego::getcant_escopeta(int _cant_escopeta)
{
	cant_escopeta = _cant_escopeta;
}

int Armas_Fuego::setcant_escopeta()
{
	return cant_escopeta;
}

//**************************************************************************************************************************//

// CLASE HIJA ARMAS_BLANCAS

class Armas_Blancas : public Armamento
{	
	private:
		int cant_cuchillo;
		int cant_bayoneta;
		int cant_machete;
	public:
		void getcant_cuchillo(int);
		int setcant_cuchillo();
		void getcant_bayoneta(int);
		int setcant_bayoneta();
		void getcant_machete(int);
		int setcant_machete();
};

void Armas_Blancas::getcant_cuchillo(int _cant_cuchillo)        // Metodo set y get de la clase Armas Blancas
{
	cant_cuchillo = _cant_cuchillo;
}

int Armas_Blancas::setcant_cuchillo()
{
	return cant_cuchillo;	
} 

void Armas_Blancas::getcant_bayoneta(int _cant_bayoneta)
{
	cant_bayoneta = _cant_bayoneta;
}

int Armas_Blancas::setcant_bayoneta()
{
	return cant_bayoneta;	
} 

void Armas_Blancas::getcant_machete(int _cant_machete)
{
	cant_machete = _cant_machete;
}

int Armas_Blancas::setcant_machete()
{
	return cant_machete;	
} 

//***************************************************************************************************************************//

// CLASE NIETA PISTOLA

class Pistola : public Armas_Fuego
{
	private:
		float calibre_p;
		int cargador_p;
		int numero_balas_p;
		float alcance_maximo_p;
		float longitud_canion_p;
		string estado_p;
		int numero_inventario_p;
		int valor_arma_p;
	public:
		void getcalibre_p(float);
		float setcalibre_p();
		void getcargador_p(int);
		void setcargador_p();
		int setnumero_balas_p();
		void getalcance_maximo_p(float);
		float setalcance_maximo_p();
		void getlongitud_canion_p(float);
		float setlongitud_canion_p();
		void getestado_p(int indice);
		string setestado_p();
		void getnumero_inventario_p(int);
		int setnumero_inventario_p();
		void getvalor_arma_p(int);
		int setvalor_arma_p();
		float utilidad_arma_p();
};

void Pistola::getcalibre_p(float _calibre_p)
{
	calibre_p = _calibre_p;
}

float Pistola::setcalibre_p()
{
	return calibre_p;
}

void Pistola::getcargador_p(int _cargador_p)
{
	cargador_p = _cargador_p;
	
	if(cargador_p == 1)
	{
		int _numero_balas_p;
		cout<<"Introducir el numero de balas del cargador: "; cin>>_numero_balas_p;
		numero_balas_p = _numero_balas_p;
	}
	else if(cargador_p == 2)
	{
		numero_balas_p = 0;
	}
}

void Pistola::setcargador_p()
{
	if(cargador_p == true)
	{
		cout<<"La pistola posee cargador.\n";
	}
	else
	{
		cout<<"La pistola no posee cargador.\n";
	}
}

int Pistola::setnumero_balas_p()
{
	return numero_balas_p;
}

void Pistola::getalcance_maximo_p(float _alcance_maximo_p)
{
	alcance_maximo_p = _alcance_maximo_p;	
}

float Pistola::setalcance_maximo_p()
{
	return alcance_maximo_p;
}

void Pistola::getlongitud_canion_p(float _longitud_canion_p)
{
	longitud_canion_p = _longitud_canion_p;
}

float Pistola::setlongitud_canion_p()
{
	return longitud_canion_p;
}

void Pistola::getestado_p(int indice)
{
	if(indice == 1)
	{
		estado_p = "Uso";
	}
	else if(indice == 2)
	{
		estado_p = "Perdida";
	}
	else if(indice == 3)
	{
		estado_p = "Reserva";
	}	
}

string Pistola::setestado_p()
{
	return estado_p;
}

void Pistola::getnumero_inventario_p(int _numero_inventario_p)
{
	numero_inventario_p = _numero_inventario_p;
}

int Pistola::setnumero_inventario_p()
{
	return numero_inventario_p;
}

void Pistola::getvalor_arma_p(int _valor_arma_p)
{
	valor_arma_p = _valor_arma_p;
}

int Pistola::setvalor_arma_p()
{
	return valor_arma_p + numero_balas_p * calibre_p;
}

float Pistola::utilidad_arma_p()
{
	return longitud_canion_p * alcance_maximo_p * 1.5 ;
}
//************************************************************************************************************************//

//CLASE NIETA ESCOPETA

class Escopeta : public Armas_Fuego
{
	private:
		float calibre_e;
		int cargador_e;
		int numero_balas_e;
		float alcance_maximo_e;
		float longitud_canion_e;
		string estado_e;
		int numero_inventario_e;
		int valor_arma_e;
	public:
		void getcalibre_e(float);
		float setcalibre_e();
		void getcargador_e(int);
		void setcargador_e();
		int setnumero_balas_e();
		void getalcance_maximo_e(float);
		float setalcance_maximo_e();
		void getlongitud_canion_e(float);
		float setlongitud_canion_e();
		void getestado_e(int);
		string setestado_e();
		void getnumero_inventario_e(int);
		int setnumero_inventario_e();
		void getvalor_arma_e(int);
		int setvalor_arma_e();
		float utilidad_arma_e();
};

void Escopeta::getcalibre_e(float _calibre_e)
{
	calibre_e = _calibre_e;
}

float Escopeta::setcalibre_e()
{
	return calibre_e;
}

void Escopeta::getcargador_e(int _cargador_e)
{
	cargador_e = _cargador_e;
	
	if(cargador_e == 1)
	{
		int _numero_balas_e;
		cout<<"Introducir el numero de balas del cargador: "; cin>>_numero_balas_e;
		numero_balas_e = _numero_balas_e;
	}
	else if(cargador_e == 2)
	{
		numero_balas_e = 0;
	}
}

void Escopeta::setcargador_e()
{
	if(cargador_e == true)
	{
		cout<<"La escopeta posee cargador.\n";
	}
	else
	{
		cout<<"La escopeta no posee cargador.\n";
	}
}

int Escopeta::setnumero_balas_e()
{
	return numero_balas_e;
}

void Escopeta::getalcance_maximo_e(float _alcance_maximo_e)
{
	alcance_maximo_e = _alcance_maximo_e;	
}

float Escopeta::setalcance_maximo_e()
{
	return alcance_maximo_e;
}

void Escopeta::getlongitud_canion_e(float _longitud_canion_e)
{
	longitud_canion_e = _longitud_canion_e;
}

float Escopeta::setlongitud_canion_e()
{
	return longitud_canion_e;
}

void Escopeta::getestado_e(int indice_e)
{
	if(indice_e == 1)
	{
		estado_e = "Uso";
	}
	else if(indice_e == 2)
	{
		estado_e = "Perdida";
	}
	else if(indice_e == 3)
	{
		estado_e = "Reserva";
	}	
}

string Escopeta::setestado_e()
{
	return estado_e;
}

void Escopeta::getnumero_inventario_e(int _numero_inventario_e)
{
	numero_inventario_e = _numero_inventario_e;
}

int Escopeta::setnumero_inventario_e()
{
	return numero_inventario_e;
}

void Escopeta::getvalor_arma_e(int _valor_arma_e)
{
	valor_arma_e = _valor_arma_e;
}

int Escopeta::setvalor_arma_e()
{
	return valor_arma_e + numero_balas_e * calibre_e;
}

float Escopeta::utilidad_arma_e()
{
	return longitud_canion_e * alcance_maximo_e * 1.5 ;
}

//***********************************************************************************************************************//

// CLASE NIETA CUCHILLO

class Cuchillo : public Armas_Blancas
{
	private:
		string material_c;
		int valor_material_c;
		int peligrosidad_c;
		string estado_c;
		int numero_inventario_c;
		int valor_arma_c;		
	public:
		void getmaterial_c(string);
		string setmaterial_c();
		void getvalor_material_c(int);
		int setvalor_material_c();
		void getpeligrosidad_c(int);
		int setpeligrosidad_c();
		void getestado_c(int);
		string setestado_c();
		void getnumero_inventario_c(int);
		int setnumero_inventario_c();
		void getvalor_arma_c(int);
		int setvalor_arma_c();
		float utilidad_arma_c();
}; 

void Cuchillo::getmaterial_c(string _material_c)
{
	material_c = _material_c;
}

string Cuchillo::setmaterial_c()
{
	return material_c;
}

void Cuchillo::getvalor_material_c(int _valor_material_c)
{
	valor_material_c = _valor_material_c;
}

int Cuchillo::setvalor_material_c()
{
	return valor_material_c;
}

void Cuchillo::getpeligrosidad_c(int _peligrosidad_c)
{
	peligrosidad_c = _peligrosidad_c;
}

int Cuchillo::setpeligrosidad_c()
{
	return peligrosidad_c;
}

void Cuchillo::getestado_c(int indice_c)
{
	if(indice_c == 1)
	{
		estado_c = "Uso";
	}
	else if(indice_c == 2)
	{
		estado_c = "Perdida";
	}
	else if(indice_c == 3)
	{
		estado_c = "Reserva";
	}	
}

string Cuchillo::setestado_c()
{
	return estado_c;
}

void Cuchillo::getnumero_inventario_c(int _numero_inventario_c)
{
	numero_inventario_c = _numero_inventario_c;
}

int Cuchillo::setnumero_inventario_c()
{
	return numero_inventario_c;
}

void Cuchillo::getvalor_arma_c(int _valor_arma_c)
{
	valor_arma_c = _valor_arma_c;
}

int Cuchillo::setvalor_arma_c()
{
	return valor_material_c * peligrosidad_c;
}

float Cuchillo::utilidad_arma_c()
{
	return peligrosidad_c * 1.7;
}

//********************************************************************************************************************//
// CLASE NIETA BAYONETA

class Bayoneta : public Armas_Blancas
{
	private:
		string material_b;
		int valor_material_b;
		int peligrosidad_b;
		string estado_b;
		int numero_inventario_b;
		int valor_arma_b;		
	public:
		void getmaterial_b(string);
		string setmaterial_b();
		void getvalor_material_b(int);
		int setvalor_material_b();
		void getpeligrosidad_b(int);
		int setpeligrosidad_b();
		void getestado_b(int);
		string setestado_b();
		void getnumero_inventario_b(int);
		int setnumero_inventario_b();
		void getvalor_arma_b(int);
		int setvalor_arma_b();
		float utilidad_arma_b();
}; 

void Bayoneta::getmaterial_b(string _material_b)
{
	material_b = _material_b;
}

string Bayoneta::setmaterial_b()
{
	return material_b;
}

void Bayoneta::getvalor_material_b(int _valor_material_b)
{
	valor_material_b = _valor_material_b;
}

int Bayoneta::setvalor_material_b()
{
	return valor_material_b;
}

void Bayoneta::getpeligrosidad_b(int _peligrosidad_b)
{
	peligrosidad_b = _peligrosidad_b;
}

int Bayoneta::setpeligrosidad_b()
{
	return peligrosidad_b;
}

void Bayoneta::getestado_b(int indice_b)
{
	if(indice_b == 1)
	{
		estado_b = "Uso";
	}
	else if(indice_b == 2)
	{
		estado_b = "Perdida";
	}
	else if(indice_b == 3)
	{
		estado_b = "Reserva";
	}	
}

string Bayoneta::setestado_b()
{
	return estado_b;
}

void Bayoneta::getnumero_inventario_b(int _numero_inventario_b)
{
	numero_inventario_b = _numero_inventario_b;
}

int Bayoneta::setnumero_inventario_b()
{
	return numero_inventario_b;
}


void Bayoneta::getvalor_arma_b(int _valor_arma_b)
{
	valor_arma_b = _valor_arma_b;
}

int Bayoneta::setvalor_arma_b()
{
	return valor_material_b * peligrosidad_b;
}

float Bayoneta::utilidad_arma_b()
{
	return peligrosidad_b * 1.7;
}

//*********************************************************************************************************************//

// CLASE NIETA MACHETE

class Machete : public Armas_Blancas
{
	private:
		string material_m;
		int valor_material_m;
		int peligrosidad_m;
		string estado_m;
		int numero_inventario_m;
		int valor_arma_m;		
	public:
		void getmaterial_m(string);
		string setmaterial_m();
		void getvalor_material_m(int);
		int setvalor_material_m();
		void getpeligrosidad_m(int);
		int setpeligrosidad_m();
		void getestado_m(int);
		string setestado_m();
		void getnumero_inventario_m(int);
		int setnumero_inventario_m();
		void getvalor_arma_m(int);
		int setvalor_arma_m();
		float utilidad_arma_m();
}; 

void Machete::getmaterial_m(string _material_m)
{
	material_m = _material_m;
}

string Machete::setmaterial_m()
{
	return material_m;
}

void Machete::getvalor_material_m(int _valor_material_m)
{
	valor_material_m = _valor_material_m;
}

int Machete::setvalor_material_m()
{
	return valor_material_m;
}

void Machete::getpeligrosidad_m(int _peligrosidad_m)
{
	peligrosidad_m = _peligrosidad_m;
}

int Machete::setpeligrosidad_m()
{
	return peligrosidad_m;
}

void Machete::getestado_m(int indice_m)
{
	if(indice_m == 1)
	{
		estado_m = "Uso";
	}
	else if(indice_m == 2)
	{
		estado_m = "Perdida";
	}
	else if(indice_m == 3)
	{
		estado_m = "Reserva";
	}	
}

string Machete::setestado_m()
{
	return estado_m;
}

void Machete::getnumero_inventario_m(int _numero_inventario_m)
{
	numero_inventario_m = _numero_inventario_m;
}

int Machete::setnumero_inventario_m()
{
	return numero_inventario_m;
}

void Machete::getvalor_arma_m(int _valor_arma_m)
{
	valor_arma_m = _valor_arma_m;
}

int Machete::setvalor_arma_m()
{
	return valor_material_m * peligrosidad_m;
}

float Machete::utilidad_arma_m()
{
	return peligrosidad_m * 1.7;
}

//**********************************************************************************************************************//

// Prototipos de Funciones

int menu_control_armamento();
int menu_armas_fuego();
int menu_armas_blancas();
int menu_mostrar_armamentos();
int menu_cambio_estados_armamentos();
int menu_estado_numero_inventario();

//***********************************************************************************************************************//

// Estructuras para almacenar variables

struct Datos
{
	int cant_arm;
	int cant_arm_fue;
	int cant_arm_blan;
	int cant_pistolas = 1;
	int cant_escopetas = 1;
	int cant_cuchillos = 1;
	int cant_bayonetas = 1;
	int cant_machetes = 1;
	int numero_pistolas = 0;
	int numero_escopetas = 0;
	int numero_cuchillos = 0;
	int numero_bayonetas = 0;
	int numero_machetes = 0;
	int mayor_armamento_perdida = 0;
	int mayor_armamento_reserva = 0;
	int mayor_armamento_uso = 0;
	int menor_armamento_completamiento = 100;
	int num_inventario_buscado;
	//opciones
	int opc;
	int opc_af;
	int opc_ab;
	int opc_ma;
	int opc_es;
	int opc_e_i;
	char salir; 
	// pistola  
	char repetir_p;    
	float calibre_p;
	int cargador_p;
	float al_maximo_p;
	float long_canion_p;
	int indice_p;
	int i_p = 0;
	int num_inventario_p;
	int val_arma_p;
	int mod_estado_p;
	int cont_estado_uso_p;
	int cont_estado_perdida_p;
	int cont_estado_reserva_p;	
	int contenedor_num_inventario_p;
	int guardar_i_p;
	// escopeta
	char repetir_e; 
	float calibre_e;
	int cargador_e;
	float al_maximo_e;
	float long_canion_e;
	int indice_e;
	int i_e = 0;
	int num_inventario_e;
	int val_arma_e;
	int mod_estado_e;
	int cont_estado_uso_e;
	int cont_estado_perdida_e;
	int cont_estado_reserva_e;	
	int contenedor_num_inventario_e;
	int guardar_i_e;
	//cuchillo
	char repetir_c;
	string material_c;
	int val_material_c;
	int peligrosidad_c;
	int indice_c;
	int i_c;
	int num_inventario_c;
	int val_arma_c;
	int mod_estado_c;
	int cont_estado_uso_c;
	int cont_estado_perdida_c;
	int cont_estado_reserva_c;	
	int contenedor_num_inventario_c;
	int guardar_i_c;
	//bayoneta
	char repetir_b;
	string material_b;
	int val_material_b;
	int peligrosidad_b;
	int indice_b;
	int i_b;
	int num_inventario_b;
	int val_arma_b;
	int mod_estado_b;
	int cont_estado_uso_b;
	int cont_estado_perdida_b;
	int cont_estado_reserva_b;	
	int contenedor_num_inventario_b;
	int guardar_i_b;
	//machete
	char repetir_m;
	string material_m;
	int val_material_m;
	int peligrosidad_m;
	int indice_m;
	int i_m;
	int num_inventario_m;
	int val_arma_m;
	int mod_estado_m;
	int cont_estado_uso_m;
	int cont_estado_perdida_m;
	int cont_estado_reserva_m;
	int contenedor_num_inventario_m;
	int guardar_i_m;
	//mostrar armamento
	char repetir_ma;
	//existencia armas
	char existencia_arma[50];
    char existencia_pistola[50] = "pistola";
	char existencia_escopeta[50] = "escopeta";
    char existencia_cuchillo[50] = "cuchillo";
	char existencia_bayoneta[50] = "bayoneta";
	char existencia_machete[50] = "machete";		
}dato;

//**************************************************************************************************************************//

// Funcion Main

int main()
{
	// Punteros en la direccion de los tamanios de los arreglos
	int *ptrcant_pistolas = &dato.cant_pistolas;
	int *ptrcant_escopetas = &dato.cant_escopetas;
	int *ptrcant_cuchillos = &dato.cant_cuchillos;
	int *ptrcant_bayonetas = &dato.cant_bayonetas;
	int *ptrcant_machetes = &dato.cant_machetes;
	
	// Objetos de las clases 
	vector <Pistola> pistola(dato.cant_pistolas);
	vector <Escopeta> escopeta(dato.cant_escopetas);
	vector <Cuchillo> cuchillo(dato.cant_cuchillos);
	vector <Bayoneta> bayoneta(dato.cant_bayonetas);
	vector <Machete> machete(dato.cant_machetes);
		
	do{
		
		menu_control_armamento:
		menu_control_armamento();		
		system("cls");
	 if(dato.opc >= 1 && dato.opc <= 17)
	 {
	 
		switch(dato.opc)
		{
			case 1:
					menu_armas_fuego:
					menu_armas_fuego();
										
					switch(dato.opc_af)
					{
						case 1: system("cls");
								cout<<"\t.:Pistolas:.\n\n";
								do{
									cout<<"Pistola #: "<<dato.i_p+1 <<"."<<"\n\n";
									cout<<"Introducir el calibre de la pistola: "; cin>>dato.calibre_p;									
									pistola[dato.i_p].getcalibre_p(dato.calibre_p);
									cargador_p:
									cout<<"Introduzca si la pistola posee cargador o no 'True(1) - False(2)': "; cin>>dato.cargador_p;
									if(dato.cargador_p >= 1 && dato.cargador_p <= 2)
									{
										pistola[dato.i_p].getcargador_p(dato.cargador_p);	
									}
									else
									{
										cout<<"Opcion no valida\n";getch();
										goto cargador_p;
									}									
									cout<<"Introduzca el alcance maximo: "; cin>>dato.al_maximo_p;
									pistola[dato.i_p].getalcance_maximo_p(dato.al_maximo_p);
									cout<<"Introduzca la longitud del canion de la pistola: "; cin>>dato.long_canion_p;
									pistola[dato.i_p].getlongitud_canion_p(dato.long_canion_p);
									introducir_estado_p:
									cout<<"Introduzca el estado de la pistola (1-'Uso', 2-'Perdida', 3-'Reserva'): "; cin>>dato.indice_p;
									if(dato.indice_p >= 1 && dato.indice_p <= 3)
									{
										pistola[dato.i_p].getestado_p(dato.indice_p);
										
										if(dato.indice_p == 1)
										{
											dato.cont_estado_uso_p++;
										}
										else if(dato.indice_p == 2)
										{
											dato.cont_estado_perdida_p++;
										}
										else if(dato.indice_p == 3)
										{
											dato.cont_estado_reserva_p++;
										}
									}
									else
									{		
										cout<<"Estado Invalido.\n";
										goto introducir_estado_p;
									}									
									cout<<"Introduzca el numero de inventario de la pistola: "; cin>>dato.num_inventario_p;
									pistola[dato.i_p].getnumero_inventario_p(dato.num_inventario_p);
									cout<<"Introduzca el valor del arma: "; cin>>dato.val_arma_p;
									pistola[dato.i_p].getvalor_arma_p(dato.val_arma_p);
									
									dato.i_p++;
									dato.numero_pistolas++;
									
									cout<<"\nDesea introducir una nueva pistola (s/n): "; cin>>dato.repetir_p;
									cout<<endl;
									
									if(dato.repetir_p == 'S' || dato.repetir_p == 's' )
									{
										pistola.resize(*ptrcant_pistolas += 1);
						
									}									
									
								}while(dato.repetir_p == 'S' || dato.repetir_p == 's');								
								break;
								
						case 2: system("cls");
								cout<<"\t.:Escopetas:.\n\n";
								do{
									cout<<"Escopeta #: "<<dato.i_e+1 <<"."<<"\n\n";
									cout<<"Introducir el calibre de la escopeta: "; cin>>dato.calibre_e;									
									escopeta[dato.i_e].getcalibre_e(dato.calibre_e);
									cargador_e:
									cout<<"Introduzca si la escopeta posee cargador o no 'True(1) - False(2)': "; cin>>dato.cargador_e;
									if(dato.cargador_e >= 1 && dato.cargador_e <= 2)
									{
										escopeta[dato.i_e].getcargador_e(dato.cargador_e);	
									}
									else
									{
										cout<<"Opcion no valida\n";
										goto cargador_e;
									}						
									cout<<"Introduzca el alcance maximo de la escopeta: "; cin>>dato.al_maximo_e;
									escopeta[dato.i_e].getalcance_maximo_e(dato.al_maximo_e);
									cout<<"Introduzca la longitud del canion de la escopeta: "; cin>>dato.long_canion_e;
									escopeta[dato.i_e].getlongitud_canion_e(dato.long_canion_e);
									introducir_estado_e:
									cout<<"Introduzca el estado de la escopeta (1-'Uso', 2-'Perdida', 3-'Reserva'): "; cin>>dato.indice_e;
									if(dato.indice_e >= 1 && dato.indice_e <= 3)
									{
										escopeta[dato.i_e].getestado_e(dato.indice_e);
										
										if(dato.indice_e == 1)
										{
											dato.cont_estado_uso_e++;
										}
										else if(dato.indice_e == 2)
										{
											dato.cont_estado_perdida_e++;
										}
										else if(dato.indice_e == 3)
										{
											dato.cont_estado_reserva_e++;
										}
									}
									else
									{		
										cout<<"Estado Invalido.\n";
										goto introducir_estado_e;
									}							
									cout<<"Introduzca el numero de inventario de la escopeta: "; cin>>dato.num_inventario_e;
									escopeta[dato.i_e].getnumero_inventario_e(dato.num_inventario_e);
									cout<<"Introduzca el valor del arma: "; cin>>dato.val_arma_e;
									escopeta[dato.i_e].getvalor_arma_e(dato.val_arma_e);
									
									dato.i_e++;
									dato.numero_escopetas++;
									
									cout<<"\nDesea introducir una nueva escopeta (s/n): "; cin>>dato.repetir_e;
									cout<<endl;
									
									if(dato.repetir_e == 'S' || dato.repetir_e == 's' )
									{
										escopeta.resize(*ptrcant_escopetas += 1);						
									}
									
								}while(dato.repetir_e == 'S' || dato.repetir_e == 's');								
								break;									
							
						default: system("cls");
						     	 cout<<"OPCION NO VALIDA.\n";
							 	 getch();
							     system("cls");
							     goto menu_armas_fuego;
					}
					break;
				
			case 2:	
					menu_armas_blancas:
					menu_armas_blancas();
											
					switch(dato.opc_ab)
					{
						case 1: system("cls");
								cout<<"\t.:Cuchillo:.\n\n";
								do{
									cout<<"Cuchillo #: "<<dato.i_c+1 <<"."<<"\n\n";
									cout<<"Introduzca el material del cuchillo: "; cin>>dato.material_c;
									cuchillo[dato.i_c].getmaterial_c(dato.material_c);
									cout<<"Introduzca el valor del material del cuchillo: "; cin>>dato.val_material_c;
									cuchillo[dato.i_c].getvalor_material_c(dato.val_material_c);
									peligrosidad_c:
									cout<<"Introduzca la peligrosidad del cuchillo en un rango del [ 1 al 10]: "; cin>>dato.peligrosidad_c;
									if(dato.peligrosidad_c >= 1 && dato.peligrosidad_c <= 10)
									{
										cuchillo[dato.i_c].getpeligrosidad_c(dato.peligrosidad_c);	
									}
									else
									{
										cout<<"Opcion Invalida.\n";
										goto peligrosidad_c;
									}																		
									introducir_estado_c:
									cout<<"Introduzca el estado del cuchillo (1-'Uso', 2-'Perdida', 3-'Reserva'): "; cin>>dato.indice_c;
									if(dato.indice_c >= 1 && dato.indice_c <= 3)
									{
										cuchillo[dato.i_c].getestado_c(dato.indice_c);
										
										if(dato.indice_c == 1)
										{
											dato.cont_estado_uso_c++;
										}
										else if(dato.indice_c == 2)
										{
											dato.cont_estado_perdida_c++;
										}
										else if(dato.indice_c == 3)
										{
											dato.cont_estado_reserva_c++;
										}
									}
									else
									{		
										cout<<"Estado Invalido.\n";
										goto introducir_estado_c;
									}							
									cout<<"Introduzca el numero de inventario del cuchillo: "; cin>>dato.num_inventario_c;
									cuchillo[dato.i_c].getnumero_inventario_c(dato.num_inventario_c);
									cout<<"Introduzca el valor del arma: "; cin>>dato.val_arma_c;
									cuchillo[dato.i_c].getvalor_arma_c(dato.val_arma_c);
									
									dato.i_c++;
									dato.numero_cuchillos++;
									
									cout<<"\nDesea introducir un nuevo cuchillo (s/n): "; cin>>dato.repetir_c;
									cout<<endl;
									
									if(dato.repetir_c == 'S' || dato.repetir_c == 's' )
									{
										cuchillo.resize(*ptrcant_cuchillos += 1);						
									}
									
								}while(dato.repetir_c == 'S' || dato.repetir_c == 's');
								break;
															
						case 2: system("cls");
								cout<<"\t.:Bayoneta:.\n\n";
								do{
									cout<<"Bayoneta #: "<<dato.i_b+1 <<"."<<"\n\n";
									cout<<"Introduzca el material de la bayoneta: "; cin>>dato.material_b;
									bayoneta[dato.i_b].getmaterial_b(dato.material_b);
									cout<<"Introduzca el valor del material de la bayoneta: "; cin>>dato.val_material_b;
									bayoneta[dato.i_b].getvalor_material_b(dato.val_material_b);
									peligrosidad_b:
									cout<<"Introduzca la peligrosidad de la bayoneta en un rango del [ 1 al 10]: "; cin>>dato.peligrosidad_b;
									if(dato.peligrosidad_b >= 1 && dato.peligrosidad_b <= 10)
									{
										bayoneta[dato.i_b].getpeligrosidad_b(dato.peligrosidad_b);	
									}
									else
									{
										cout<<"Opcion Invalida.\n";
										goto peligrosidad_b;
									}									
									introducir_estado_b:
									cout<<"Introduzca el estado de la bayoneta (1-'Uso', 2-'Perdida', 3-'Reserva'): "; cin>>dato.indice_b;
									if(dato.indice_b >= 1 && dato.indice_b <= 3)
									{
										bayoneta[dato.i_b].getestado_b(dato.indice_b);
										
										if(dato.indice_b == 1)
										{
											dato.cont_estado_uso_b++;
										}
										else if(dato.indice_b == 2)
										{
											dato.cont_estado_perdida_b++;
										}
										else if(dato.indice_b == 3)
										{
											dato.cont_estado_reserva_b++;
										}
									}
									else
									{		
										cout<<"Estado Invalido.\n";
										goto introducir_estado_b;
									}							
									cout<<"Introduzca el numero de inventario de la bayoneta: "; cin>>dato.num_inventario_b;
									bayoneta[dato.i_b].getnumero_inventario_b(dato.num_inventario_b);
									cout<<"Introduzca el valor del arma: "; cin>>dato.val_arma_b;
									bayoneta[dato.i_b].getvalor_arma_b(dato.val_arma_b);									
									
									dato.i_b++;
									dato.numero_bayonetas++;
									
									cout<<"\nDesea introducir una nueva bayoneta (s/n): "; cin>>dato.repetir_b;
									cout<<endl;
									
									if(dato.repetir_b == 'S' || dato.repetir_b == 's' )
									{
										bayoneta.resize(*ptrcant_bayonetas += 1);						
									}
									
								}while(dato.repetir_b == 'S' || dato.repetir_b == 's');
								break;
							
						case 3: system("cls");
								cout<<"\t.:Machete:.\n\n";
								do{
									cout<<"Machete #: "<<dato.i_m+1 <<"."<<"\n\n";
									cout<<"Introduzca el material del machete: "; cin>>dato.material_m;
									machete[dato.i_m].getmaterial_m(dato.material_m);
									cout<<"Introduzca el valor del material del machete: "; cin>>dato.val_material_m;
									machete[dato.i_m].getvalor_material_m(dato.val_material_m);
									peligrosidad_m:
									cout<<"Introduzca la peligrosidad del machete en un rango del [ 1 al 10]: "; cin>>dato.peligrosidad_m;
									if(dato.peligrosidad_m >= 1 && dato.peligrosidad_m <= 10)
									{
										machete[dato.i_m].getpeligrosidad_m(dato.peligrosidad_m);	
									}
									else
									{
										cout<<"Opcion Invalida.\n";
										goto peligrosidad_m;
									}								
									introducir_estado_m:
									cout<<"Introduzca el estado del machete (1-'Uso', 2-'Perdida', 3-'Reserva'): "; cin>>dato.indice_m;
									if(dato.indice_m >= 1 && dato.indice_m <= 3)
									{
										machete[dato.i_m].getestado_m(dato.indice_m);
										
										if(dato.indice_m == 1)
										{
											dato.cont_estado_uso_m++;
										}
										else if(dato.indice_m == 2)
										{
											dato.cont_estado_perdida_m++;
										}
										else if(dato.indice_m == 3)
										{
											dato.cont_estado_reserva_m++;
										}
									}
									else
									{		
										cout<<"Estado Invalido.\n";
										goto introducir_estado_m;
									}							
									cout<<"Introduzca el numero de inventario del machete: "; cin>>dato.num_inventario_m;
									machete[dato.i_m].getnumero_inventario_m(dato.num_inventario_m);
									cout<<"Introduzca el valor del arma: "; cin>>dato.val_arma_m;
									machete[dato.i_m].getvalor_arma_m(dato.val_arma_m);
										
									dato.i_m++;
									dato.numero_machetes++;
									
									cout<<"\nDesea introducir un nuevo machete (s/n): "; cin>>dato.repetir_m;
									cout<<endl;
									
									if(dato.repetir_m == 'S' || dato.repetir_m == 's' )
									{
										machete.resize(*ptrcant_machetes += 1);						
									}
									
								}while(dato.repetir_m == 'S' || dato.repetir_m == 's');
								break;
								
						default: system("cls");
							 	 cout<<"OPCION NO VALIDA\n";
								 getch();
					        	 system("cls");
					        	 goto menu_armas_blancas;
					}
					break;
					
			case 3: 
					menu_mostrar_armamento:
					menu_mostrar_armamentos();
					
					switch(dato.opc_ma)
					{
						case 1: system("cls");
								cout<<"La cantidad de pistolas disponibles es: "<<dato.numero_pistolas<<endl;
																
								if(dato.numero_pistolas == 0)
								{
									cout<<"\nArmamento no disponible.\n";
									getch();	
								}
								else
								{
									cout<<'\n';
									for(int i = 0; i < dato.cant_pistolas; i++)
									{
										cout<<"\nPistola #: "<<i+1<<"."<<"\n\n";
										cout<<"El calibre de la pistola es: "<<pistola[i].setcalibre_p()<<endl;											
										pistola[i].setcargador_p();
										cout<<"La pistola tiene: "<<pistola[i].setnumero_balas_p()<<" balas"<<endl;
										cout<<"El alcance maximo de la pistola es: "<<pistola[i].setalcance_maximo_p()<<endl;											
										cout<<"La longitud del canion de la pistola es: "<<pistola[i].setlongitud_canion_p()<<endl;														
										cout<<"El estado de la pistola es: "<<pistola[i].setestado_p()<<endl;											
											cout<<"El numero de inventario de la pistola es: "<<pistola[i].setnumero_inventario_p()<<endl;
										cout<<"El peso de perdida es: "<<pistola[i].setvalor_arma_p()<<endl;
										cout<<"La utilidad del arma es: "<<pistola[i].utilidad_arma_p()<<endl;		
										cout<<"\n";
									}
									getch();
									system("cls");
									cout<<"Desea ver la reserva de otro armamento (s/n): "; cin>>dato.repetir_ma;
									if(dato.repetir_ma == 's' || dato.repetir_ma == 'S')
									{
										system("cls");
										goto menu_mostrar_armamento;
									}
								} 								
								break;
								
						case 2: system("cls");
								cout<<"La cantidad de escopetas disponibles es: "<<dato.numero_escopetas<<endl; 
																
								if(dato.numero_escopetas == 0)
								{
									cout<<"\nArmamento no disponible.\n";
									getch();	
								}
								else
								{
									for(int i = 0; i < dato.cant_escopetas; i++)
									{
										cout<<"\nEscopeta #: "<<i+1<<"."<<"\n\n";
										cout<<"El calibre de la escopeta es: "<<escopeta[i].setcalibre_e()<<endl;											
										escopeta[i].setcargador_e();
										cout<<"La escopeta tiene: "<<escopeta[i].setnumero_balas_e()<<" balas"<<endl;
										cout<<"El alcance maximo de la escopeta es: "<<escopeta[i].setalcance_maximo_e()<<endl;											
										cout<<"La longitud del canion de la escopeta es: "<<escopeta[i].setlongitud_canion_e()<<endl;														
										cout<<"El estado de la escopeta es: "<<escopeta[i].setestado_e()<<endl;											
										cout<<"El numero de inventario de la escopeta es: "<<escopeta[i].setnumero_inventario_e()<<endl;
										cout<<"El peso de perdida es: "<<escopeta[i].setvalor_arma_e()<<endl;
										cout<<"La utilidad del arma es: "<<escopeta[i].utilidad_arma_e()<<endl;		
										cout<<"\n";
									}
									getch();
									system("cls");
									cout<<"Desea ver la reserva de otro armamento (s/n): "; cin>>dato.repetir_ma;
									if(dato.repetir_ma == 's' || dato.repetir_ma == 'S')
									{
										system("cls");
										goto menu_mostrar_armamento;
									}
								}
								break;
								
						case 3: system("cls");
								cout<<"La cantidad de cuchillos disponibles es: "<<dato.numero_cuchillos<<endl; 
																
								if(dato.numero_cuchillos == 0)
								{
									cout<<"\nArmamento no disponible.\n";
									getch();
								}
								else
								{
									for(int i = 0; i < dato.cant_cuchillos; i++)
									{
										cout<<"\nCuchillo #: "<<i+1 <<"."<<"\n\n";
										cout<<"El material del cuchillo es: "<<cuchillo[i].setmaterial_c()<<endl;									
										cout<<"El valor del material del cuchillo es: "<<cuchillo[i].setvalor_material_c()<<endl;
										cout<<"La peligrosidad del cuchillo es: "<<cuchillo[i].setpeligrosidad_c()<<endl;																		
										cout<<"El estado del cuchillo es: "<<cuchillo[i].setestado_c()<<endl;
										cout<<"El numero de inventario del cuchillo es: "<<cuchillo[i].setnumero_inventario_c()<<endl;
										cout<<"El peso de perdida es: "<<cuchillo[i].setvalor_arma_c()<<endl;
										cout<<"La utilidad del arma es: "<<cuchillo[i].utilidad_arma_c()<<endl;	
										cout<<"\n";	
									}
									getch();
									system("cls");
									cout<<"Desea ver la reserva de otro armamento (s/n): "; cin>>dato.repetir_ma;
									if(dato.repetir_ma == 's' || dato.repetir_ma == 'S')
									{
										system("cls");
										goto menu_mostrar_armamento;
									}
								}								
								break;
								
						case 4: system("cls");
								cout<<"La cantidad de bayonetas disponibles es: "<<dato.numero_bayonetas<<endl; 
																
								if(dato.numero_bayonetas == 0)
								{
									cout<<"\nArmamento no disponible\n";
									getch();
								}
								else
								{
									for(int i = 0; i < dato.cant_bayonetas; i++)
									{
										cout<<"\nBayonetas #: "<<i+1 <<"."<<"\n\n";
										cout<<"El material de la bayoneta es: "<<bayoneta[i].setmaterial_b()<<endl;									
										cout<<"El valor del material de la bayoneta es: "<<bayoneta[i].setvalor_material_b()<<endl;
										cout<<"La peligrosidad de la bayoneta es: "<<bayoneta[i].setpeligrosidad_b()<<endl;																		
										cout<<"El estado de la bayoneta es: "<<bayoneta[i].setestado_b()<<endl;
										cout<<"El numero de inventario de la bayoneta es: "<<bayoneta[i].setnumero_inventario_b()<<endl;
										cout<<"El peso de perdida es: "<<bayoneta[i].setvalor_arma_b()<<endl;
										cout<<"La utilidad del arma es: "<<bayoneta[i].utilidad_arma_b()<<endl;	
										cout<<"\n";	
									}
									getch();
									system("cls");
									cout<<"Desea ver la reserva de otro armamento (s/n): "; cin>>dato.repetir_ma;
									if(dato.repetir_ma == 's' || dato.repetir_ma == 'S')
									{
										system("cls");
										goto menu_mostrar_armamento;
									}
								}								
								break;
								
						case 5: system("cls");
								cout<<"La cantidad de machetes disponibles es: "<<dato.numero_machetes<<endl; 
								
								if(dato.numero_machetes == 0)
								{
									cout<<"\nArmamento no disponible\n";
									getch();	
								}
								else
								{
									for(int i = 0; i < dato.cant_machetes; i++)
									{
										cout<<"\nMachetes #: "<<i+1 <<"."<<"\n\n";
										cout<<"El material del machete es: "<<machete[i].setmaterial_m()<<endl;									
										cout<<"El valor del material del machete es: "<<machete[i].setvalor_material_m()<<endl;
										cout<<"La peligrosidad del machete es: "<<machete[i].setpeligrosidad_m()<<endl;																		
										cout<<"El estado del machete es: "<<machete[i].setestado_m()<<endl;
										cout<<"El numero de inventario del machete es: "<<machete[i].setnumero_inventario_m()<<endl;
										cout<<"El peso de perdida es: "<<machete[i].setvalor_arma_m()<<endl;
										cout<<"La utilidad del arma es: "<<machete[i].utilidad_arma_m()<<endl;	
										cout<<"\n";	
									}
									getch();
									system("cls");
									cout<<"Desea ver la reserva se otro armamento (s/n): "; cin>>dato.repetir_ma;
									if(dato.repetir_ma == 's' || dato.repetir_ma == 'S')
									{
										system("cls");
										goto menu_mostrar_armamento;
									}
								}								
								break;
						default: system("cls");
							 	 cout<<"OPCION NO VALIDA\n";
								 getch();
					        	 system("cls");
					        	 goto menu_mostrar_armamento;		 
					}		
					break;
					
			case 4: system("cls");
					cout<<"\t.:Total de Armas de Fuego:.\n\n";
					cout<<"El total de Armas de Fuego es: "<<dato.numero_pistolas + dato.numero_escopetas;
					getch();
					break;
					
			case 5: system("cls");
					cout<<"\t.:Total de Armas Blancas:.\n\n";
					cout<<"El total de Armas Blancas es: "<<dato.numero_cuchillos + dato.numero_bayonetas + dato.numero_machetes;
					getch();
					break;
					
			case 6: system("cls");
					cout<<"\t.:Total de Armas:.\n\n";
					cout<<"El total de Armas es: "<<dato.numero_cuchillos + dato.numero_bayonetas + dato.numero_machetes + dato.numero_pistolas + dato.numero_escopetas;
					getch();
					break;
			
			case 7: system("cls");
					menu_cambio_estados_armamentos:
					menu_cambio_estados_armamentos();
					
					switch(dato.opc_es)
					{
						case 1: system("cls");
								cout<<"Modificar el estado de la pistola #: "; cin>>dato.mod_estado_p;
								cout<<"Introduzca el estado de la pistola (1-'Uso', 2-'Perdida', 3-'Reserva'): "; cin>>dato.indice_p;
								pistola[dato.mod_estado_p - 1].getestado_p(dato.indice_p);
								break;
								
						case 2:	system("cls");
								cout<<"Modificar el estado de la escopeta #: "; cin>>dato.mod_estado_e;
								cout<<"Introduzca el estado de la escopeta (1-'Uso', 2-'Perdida', 3-'Reserva'): "; cin>>dato.indice_e;
								escopeta[dato.mod_estado_e - 1].getestado_e(dato.indice_e);
								break;
								
						case 3: system("cls");
								cout<<"Modificar el estado del cuchillo #: "; cin>>dato.mod_estado_c;
								cout<<"Introduzca el estado de la cuchillo (1-'Uso', 2-'Perdida', 3-'Reserva'): "; cin>>dato.indice_c;
								cuchillo[dato.mod_estado_c - 1].getestado_c(dato.indice_c);
								break;
								
						case 4: system("cls");
								cout<<"Modificar el estado de la bayoneta #: "; cin>>dato.mod_estado_b;
								cout<<"Introduzca el estado de la bayoneta (1-'Uso', 2-'Perdida', 3-'Reserva'): "; cin>>dato.indice_b;
								bayoneta[dato.mod_estado_b - 1].getestado_b(dato.indice_b);
								break;
								
						case 5: system("cls");
								cout<<"Modificar el estado del machete #: "; cin>>dato.mod_estado_m;
								cout<<"Introduzca el estado del machete (1-'Uso', 2-'Perdida', 3-'Reserva'): "; cin>>dato.indice_m;
								machete[dato.mod_estado_m - 1].getestado_m(dato.indice_m);
								break;									
					}
					break;
					
			case 8:	system("cls");
					cout<<".:Perdidas de Armamentos:.\n\n";
					cout<<"La cantidad de pistolas perdidas es: "<<dato.cont_estado_perdida_p<<endl;				
					cout<<"La cantidad de escopetas perdidas es: "<<dato.cont_estado_perdida_e<<endl;
					cout<<"La cantidad de cuchillos perdidos es: "<<dato.cont_estado_perdida_c<<endl;
					cout<<"La cantidad de bayonetas perdidas es: "<<dato.cont_estado_perdida_b<<endl;
					cout<<"La cantidad de machetes perdidos es: "<<dato.cont_estado_perdida_m<<endl;
					getch();
					break;
					
			case 9: system("cls");
					cout<<".:Reservas de Armamentos:.\n\n";
					cout<<"La cantidad de pistolas en reserva es: "<<dato.cont_estado_reserva_p<<endl;				
					cout<<"La cantidad de escopetas en reserva es: "<<dato.cont_estado_reserva_e<<endl;
					cout<<"La cantidad de cuchillos en reserva es: "<<dato.cont_estado_reserva_c<<endl;
					cout<<"La cantidad de bayonetas en reserva es: "<<dato.cont_estado_reserva_b<<endl;
					cout<<"La cantidad de machetes reserva es: "<<dato.cont_estado_reserva_m<<endl;
					getch();
					break;
			
			case 10: system("cls");
					 cout<<".:Reservas de Armamentos:.\n\n";
					 cout<<"La cantidad de pistolas en uso es: "<<dato.cont_estado_uso_p<<endl;				
					 cout<<"La cantidad de escopetas en uso es: "<<dato.cont_estado_uso_e<<endl;
					 cout<<"La cantidad de cuchillos en uso es: "<<dato.cont_estado_uso_c<<endl;
					 cout<<"La cantidad de bayonetas en uso es: "<<dato.cont_estado_uso_b<<endl;
					 cout<<"La cantidad de machetes uso es: "<<dato.cont_estado_uso_m<<endl;
					 getch();
					 break;
					
			case 11: system("cls");
					 cout<<"\t.:Mayor Armamento Perdido:.\n\n";
					 
					 if(dato.cont_estado_perdida_p > dato.mayor_armamento_perdida )
					 {
					 	dato.mayor_armamento_perdida = dato.cont_estado_perdida_p;
					 }
					 if(dato.cont_estado_perdida_e > dato.mayor_armamento_perdida )
					 {
					 	dato.mayor_armamento_perdida = dato.cont_estado_perdida_e;
					 }
					 if(dato.cont_estado_perdida_c > dato.mayor_armamento_perdida )
					 {
					 	dato.mayor_armamento_perdida = dato.cont_estado_perdida_c;
					 }
					 if(dato.cont_estado_perdida_b > dato.mayor_armamento_perdida )
					 {
					 	dato.mayor_armamento_perdida = dato.cont_estado_perdida_b;
					 }	
					 if(dato.cont_estado_perdida_m > dato.mayor_armamento_perdida )
					 {
					 	dato.mayor_armamento_perdida = dato.cont_estado_perdida_m;
					 }
					 
					 if	(dato.mayor_armamento_perdida != 0)			
					 {
						 if(dato.cont_estado_perdida_p == dato.mayor_armamento_perdida )
						 {
						 	cout<<"Las pistolas son el armamento con mayor perdida.\n";
						 }
						 if(dato.cont_estado_perdida_e == dato.mayor_armamento_perdida )
						 {
						 	cout<<"Las escopetas son el armamento con mayor perdida.\n";
						 }
						 if(dato.cont_estado_perdida_c == dato.mayor_armamento_perdida )
						 {
						 	cout<<"Los cuchillos son el armamento con mayor perdida.\n";
						 }
						 if(dato.cont_estado_perdida_b == dato.mayor_armamento_perdida )
						 {
						 	cout<<"Las bayonetas son el armamento con mayor perdida.\n";
						 }	
						 if(dato.cont_estado_perdida_m == dato.mayor_armamento_perdida )
						 {
						 	cout<<"Los machetes son el armamento con mayor perdida.\n";
						 }
						 getch();
				     }
					 else
				     {
						cout<<"No hay perdidas de armamentos.\n";
						getch();
					 }
					 break;
					 
			case 12: system("cls");
					 cout<<"\t.:Mayor Armamento Reserva:.\n\n";
					 
					 if(dato.cont_estado_reserva_p > dato.mayor_armamento_reserva )
					 {
					 	dato.mayor_armamento_reserva = dato.cont_estado_reserva_p;
					 }
					 if(dato.cont_estado_reserva_e > dato.mayor_armamento_reserva )
					 {
					 	dato.mayor_armamento_perdida = dato.cont_estado_reserva_e;
					 }
					 if(dato.cont_estado_reserva_c > dato.mayor_armamento_reserva )
					 {
					 	dato.mayor_armamento_reserva = dato.cont_estado_reserva_c;
					 }
					 if(dato.cont_estado_reserva_b > dato.mayor_armamento_perdida )
					 {
					 	dato.mayor_armamento_reserva = dato.cont_estado_reserva_b;
					 }	
					 if(dato.cont_estado_reserva_m > dato.mayor_armamento_reserva )
					 {
					 	dato.mayor_armamento_reserva = dato.cont_estado_reserva_m;
					 }
					 
					 if	(dato.mayor_armamento_reserva != 0)			
					 {
						 if(dato.cont_estado_reserva_p == dato.mayor_armamento_reserva )
						 {
						 	cout<<"Las pistolas son el armamento con mayor reserva.\n";
						 }
						 if(dato.cont_estado_reserva_e == dato.mayor_armamento_reserva )
						 {
						 	cout<<"Las escopetas son el armamento con mayor reserva.\n";
						 }
						 if(dato.cont_estado_reserva_c == dato.mayor_armamento_reserva )
						 {
						 	cout<<"Los cuchillos son el armamento con mayor reserva.\n";
						 }
						 if(dato.cont_estado_reserva_b == dato.mayor_armamento_reserva )
						 {
						 	cout<<"Las bayonetas son el armamento con mayor reserva.\n";
						 }	
						 if(dato.cont_estado_reserva_m == dato.mayor_armamento_reserva )
						 {
						 	cout<<"Los machetes son el armamento con mayor reserva.\n";
						 }
						 getch();
				     }
					 else
				     {
						cout<<"No hay reservas de armamento.\n";
						getch();
					 }
					 break;
			
			case 13: system("cls");
					 cout<<"\t.:Mayor Armamento en Uso:.\n\n";
					 
					 if(dato.cont_estado_uso_p > dato.mayor_armamento_uso )
					 {
					 	dato.mayor_armamento_uso = dato.cont_estado_uso_p;
					 }
					 if(dato.cont_estado_uso_e > dato.mayor_armamento_uso )
					 {
					 	dato.mayor_armamento_uso = dato.cont_estado_uso_e;
					 }
					 if(dato.cont_estado_uso_c > dato.mayor_armamento_uso )
					 {
					 	dato.mayor_armamento_uso = dato.cont_estado_uso_c;
					 }
					 if(dato.cont_estado_uso_b > dato.mayor_armamento_uso )
					 {
					 	dato.mayor_armamento_uso = dato.cont_estado_uso_b;
					 }	
					 if(dato.cont_estado_uso_m > dato.mayor_armamento_uso )
					 {
					 	dato.mayor_armamento_uso = dato.cont_estado_uso_m;
					 }
					 
					 if	(dato.mayor_armamento_uso != 0)			
					 {
						 if(dato.cont_estado_uso_p == dato.mayor_armamento_uso )
						 {
						 	cout<<"Las pistolas son el armamento con mayor uso.\n";
						 }
						 if(dato.cont_estado_uso_e == dato.mayor_armamento_uso )
						 {
						 	cout<<"Las escopetas son el armamento con mayor uso.\n";
						 }
						 if(dato.cont_estado_uso_c == dato.mayor_armamento_uso )
						 {
						 	cout<<"Los cuchillos son el armamento con mayor uso.\n";
						 }
						 if(dato.cont_estado_uso_b == dato.mayor_armamento_uso )
						 {
						 	cout<<"Las bayonetas son el armamento con mayor uso.\n";
						 }	
						 if(dato.cont_estado_uso_m == dato.mayor_armamento_uso )
						 {
						 	cout<<"Los machetes son el armamento con mayor uso.\n";
						 }
						 getch();
				     }
					 else
				     {
						cout<<"No hay armamento en uso.\n";
						getch();
					 }
					 break;
					 
			case 14: system("cls");	
					 cout<<"\t.:CANTIDAD DE ARMAMENTO POR TIPO:.\n\n";
					 cout<<"La cantidad de pistolas disponibles es: "<<dato.numero_pistolas<<endl;
					 cout<<"La cantidad de escopetas disponibles es: "<<dato.numero_escopetas<<endl;
					 cout<<"La cantidad de cuchillos disponibles es: "<<dato.numero_cuchillos<<endl;
					 cout<<"La cantidad de bayonetas disponibles es: "<<dato.numero_bayonetas<<endl;
					 cout<<"La cantidad de machetes disponibles es: "<<dato.numero_machetes<<endl;
					 getch();
					 break;
					 
			case 15: system("cls");
					 cout<<"\t.:ARMAMENTO DE MENOR COMPLETAMIENTO:.\n\n";
					 
					 if(dato.numero_pistolas < dato.menor_armamento_completamiento)
					 {
					 	dato.menor_armamento_completamiento = dato.numero_pistolas;
					 }					 
					 if(dato.numero_escopetas < dato.menor_armamento_completamiento)
					 {
					 	dato.menor_armamento_completamiento = dato.numero_escopetas;
					 }
					 if(dato.numero_cuchillos < dato.menor_armamento_completamiento)
					 {
					 	dato.menor_armamento_completamiento = dato.numero_cuchillos;
					 }
					 if(dato.numero_bayonetas < dato.menor_armamento_completamiento)
					 {
					 	dato.menor_armamento_completamiento = dato.numero_bayonetas;
					 }
					 if(dato.numero_machetes < dato.menor_armamento_completamiento)
					 {
					 	dato.menor_armamento_completamiento = dato.numero_machetes;
					 }
					 
					 if(dato.numero_pistolas == dato.menor_armamento_completamiento)
					 {
					 	cout<<"Las pistolas son el armamento con menor completamiento\n";
					 }					 
					 if(dato.numero_escopetas == dato.menor_armamento_completamiento)
					 {
					 	cout<<"Las escopetas son el armamento con menor completamiento\n";
					 }
					 if(dato.numero_cuchillos == dato.menor_armamento_completamiento)
					 {
					 	cout<<"Los cuchillos son el armamento con menor completamiento\n";
					 }
					 if(dato.numero_bayonetas == dato.menor_armamento_completamiento)
					 {
					 	cout<<"Las bayonetas son el armamento con menor completamiento\n";
					 }
					 if(dato.numero_machetes == dato.menor_armamento_completamiento)
					 {
					 	cout<<"Los machetes son el armamento con menor completamiento\n";
					 }
					 getch();
					 break;
					 
			case 16: system("cls");
					 cout<<"\tExistencia de Armamento.\n\n";
					 					 
					 cout<<"Introduzca el nombre del arma para saber si existe: "; cin>>dato.existencia_arma;
					 
					 if(strcmp(dato.existencia_arma,dato.existencia_pistola) == 0)
					 {
					 	cout<<"\nEl armamento ( pistola ) si existe.\n";
					 	getch();
					 }
					 else if(strcmp(dato.existencia_arma,dato.existencia_escopeta) == 0)
					 {
					 	cout<<"\nEl armamento ( escopeta ) si existe.\n";
					 	getch();
					 }	
					 else if(strcmp(dato.existencia_arma,dato.existencia_cuchillo) == 0)
					 {
					 	cout<<"\nEl armamento ( cuchillo ) si existe.\n";
					 	getch();
					 }
				     else if(strcmp(dato.existencia_arma,dato.existencia_bayoneta) == 0)
					 {
					 	cout<<"\nEl armamento ( bayoneta ) si existe.\n";
					 	getch();
					 }	
					 else if(strcmp(dato.existencia_arma,dato.existencia_machete) == 0)
					 {
					 	cout<<"\nEl armamento ( machete ) si existe.\n";
					 	getch();
					 }
					 else
					 {
					 	cout<<"\nEl armamento buscado no existe.\n";
					 	getch();
					 }		
					 break;
					 
			case 17: system("cls");
					 cout<<"\t.:Estado por numero inventario de las pistolas:.\n\n";
					 
	     		     cout<<"Introducir numero de inventario deseado: "; cin>>dato.num_inventario_buscado;				    
					
					 bool bandera_p = false;
					 bool bandera_e = false;
					 bool bandera_c = false;
					 bool bandera_b = false;
					 bool bandera_m = false;
					 
					 for(int i = 0; i < dato.cant_pistolas; i++)
					 {
					 	dato.contenedor_num_inventario_p = pistola[i].setnumero_inventario_p();
					 	
						 if(dato.num_inventario_buscado == dato.contenedor_num_inventario_p)
						  {
						     bandera_p = true;
							 dato.guardar_i_p = i;					 		
						  }
					 }
					 
					 for(int i = 0; i < dato.cant_escopetas; i++)
					 {
					 	dato.contenedor_num_inventario_e = escopeta[i].setnumero_inventario_e();
					 	
					    if(dato.num_inventario_buscado == dato.contenedor_num_inventario_e)
						{
						 	bandera_e = true;
							dato.guardar_i_e = i;					 		
						}
					 }
					 
					 for(int i = 0; i < dato.cant_cuchillos; i++)
					 {
					 	dato.contenedor_num_inventario_c = cuchillo[i].setnumero_inventario_c();
					 	
						 if(dato.num_inventario_buscado == dato.contenedor_num_inventario_c)
						  {
						     bandera_c = true;
							 dato.guardar_i_c = i;					 		
						  }
					 }
					 
					 for(int i = 0; i < dato.cant_bayonetas; i++)
					 {
					 	dato.contenedor_num_inventario_b = bayoneta[i].setnumero_inventario_b();
					 	
						 if(dato.num_inventario_buscado == dato.contenedor_num_inventario_b)
						  {
						     bandera_b = true;
							 dato.guardar_i_b = i;					 		
						  }
					 }
					 
					 for(int i = 0; i < dato.cant_machetes; i++)
					 {
					 	dato.contenedor_num_inventario_m = machete[i].setnumero_inventario_m();
					 	
						 if(dato.num_inventario_buscado == dato.contenedor_num_inventario_m)
						  {
						     bandera_m = true;
							 dato.guardar_i_m = i;					 		
						  }
					 }
					 
					 if(bandera_p == true)
					 {
						cout<<"\nEl estado de la pistola con el numero de inventario introducido es: "<<pistola[dato.guardar_i_p].setestado_p();
						getch();
					 }
					 else if(bandera_e == true)
					 {
						cout<<"\nEl estado de la escopeta con el numero de inventario introducido es: "<<escopeta[dato.guardar_i_e].setestado_e();
						getch();
					 }
					 else if(bandera_c == true)
					 {
						cout<<"\nEl estado del cuchillo con el numero de inventario introducido es: "<<cuchillo[dato.guardar_i_c].setestado_c();
						getch();
					 }else if(bandera_b == true)
					 {
						cout<<"\nEl estado de la bayoneta con el numero de inventario introducido es: "<<bayoneta[dato.guardar_i_b].setestado_b();
						getch();
					 }else if(bandera_m == true)
					 {
						cout<<"\nEl estado del machete con el numero de inventario introducido es: "<<machete[dato.guardar_i_m].setestado_m();
						getch();
					 }
					 else
					 {
					   cout<<"\nEl numero de inventario no esta asignado a ningun armamento.\n";
					   getch();
					 }
					 break;				     
		}
	}
	else
	{
		system("cls");
		cout<<"\tOPCION NO VALIDA.\n";
		getch();
		system("cls");
		goto menu_control_armamento;
	}
		system("cls");
		cout<<"Desea salir del programa Si(s) o No(n): "; cin>>dato.salir; 
		system("cls");
				
	}while(dato.salir == 'n' || dato.salir == 'N');
	
	cout<<"\tHasta Pronto.\n";
	
	cout<<'\n';
	system("pause");	
return 0;	
}


//**************************************************************************************************************************//

// Funciones

int menu_control_armamento()
{
	cout<<"\t.:CONTROL DE ARMAMENTO:.\n\n";
	cout<<"*Registro de Armamento.*\n\n";
	cout<<"1-Registrar Armas de Fuego.\n";
	cout<<"2-Registrar Armas Blancas.\n";
	cout<<"3-Mostrar Armamento.\n";
	cout<<"4-Total de Armas de Fuego.\n";
	cout<<"5-Total de Armas Blancas.\n";
	cout<<"6-Total de Armamento.\n";
	cout<<"7-Cambiar Estado de Armamentos.\n";
	cout<<"8-Perdidas de Armamentos.\n";
	cout<<"9-Reservas de Armamentos.\n";
	cout<<"10-Uso de Armamentos.\n";
	cout<<"11-Armamento con Mayor Perdida.\n";
	cout<<"12-Armamento con Mayor Reserva.\n";
	cout<<"13-Armamento con mayor Uso.\n";
	cout<<"14-Total de Armamento por Tipo.\n";
	cout<<"15-Tipo de Armamento con Menor Completamiento.\n";
	cout<<"16-Conocer la existencia de un arma.\n";
	cout<<"17-Conocer estado a partir de numero inventario.\n";
	cout<<"\nOpcion: "; cin>>dato.opc;
	
	return dato.opc;
}

int menu_armas_fuego()
{
	cout<<"\t.:ARMAS DE FUEGO:.\n\n";
	cout<<"1-Pistola.\n";
	cout<<"2-Escopeta.\n";
	cout<<"\nOpcion: "; cin>>dato.opc_af;
	
	return	dato.opc_af;
}

int menu_armas_blancas()
{
	cout<<"\t.:ARMAS BLANCAS:.\n\n";
	cout<<"1-Cuchillo.\n";
	cout<<"2-Bayoneta.\n";
	cout<<"3-Machete.\n";
	cout<<"\nOpcion: "; cin>>dato.opc_ab;
	
	return dato.opc_ab;	
}

int menu_mostrar_armamentos()
{
	cout<<"\t.:Armamentos:.\n\n";
	cout<<"1-Mostrar Pistolas.\n";
	cout<<"2-Mostrar Escopetas.\n";
	cout<<"3-Mostrar Cuchillos.\n";
	cout<<"4-Mostrar Bayonetas.\n";
	cout<<"5-Mostrar Machetes.\n";
	cout<<"\nOpcion: "; cin>>dato.opc_ma;
	
	return dato.opc_ma;
}

int menu_cambio_estados_armamentos()
{
	cout<<"\t.:Estado Armamentos:.\n\n";
	cout<<"1-Cambiar estados de pistolas.\n";
	cout<<"2-Cambiar estados de escopetas.\n";
	cout<<"3-Cambiar estados de cuchillos.\n";
	cout<<"4-Cambiar estados de bayonetas.\n";
	cout<<"5-Cambiar estados de machetes.\n";
	cout<<"\nOpcion: "; cin>>dato.opc_es;
		
	return dato.opc_es;	
}

int menu_estado_numero_inventario()
{
	cout<<"\t.:Conocer estados por numero de inventario:.\n\n";
	cout<<"1-Pistolas.\n";
	cout<<"2-Escopetas.\n";
	cout<<"3-Cuchillos.\n";
	cout<<"4-Bayonetas.\n";
	cout<<"5-Machetes.\n";
	cout<<"\nOpcion: "; cin>>dato.opc_e_i;	
}
