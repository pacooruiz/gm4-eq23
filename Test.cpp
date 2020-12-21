#include "cute.h"
#include "ide_listener.h"
#include "xml_listener.h"
#include "cute_runner.h"

#include "visitante.h"
#include "sendero.h"

void thisIsATest() {
	ASSERTM("start writing tests", false);	
}

bool runAllTests(int argc, char const *argv[]) {
	cute::suite s { };
	//TODO add your test here
	s.push_back(CUTE(thisIsATest));
	cute::xml_file_opener xmlfile(argc, argv);
	cute::xml_listener<cute::ide_listener<>> lis(xmlfile.out);
	auto runner = cute::makeRunner(lis, argc, argv);
	bool success = runner(s, "AllTests");
	return success;
}

int main(int argc, char const *argv[]) {
    return runAllTests(argc, argv) ? EXIT_SUCCESS : EXIT_FAILURE;
}

void testSetInfoVisitante(){
	Visitante visitante1, visitante2;
	string nombre="Francisco";
	string dni="9831838Y";
	string direccion="Cordoba";
	string nacimiento="21/6/20";
	string problema="Alergico";
	int telefono=957153627;

	visitante1.setInfo("Francisco", "9831838Y", "Cordoba", "21/6/20", "Alergico", 957153627);

	visitante2.setInfo(nombre, dni, direccion, nacimiento, problema, telefono);

	ASSERT_EQUAL(visitante1, visitante2);
}

void testSetEstado(){
	Sendero sendero1, sendero2;
	string estado="cerrado";

	sendero1.setEstado("cerrado");

	sendero2.setEstado(estado);

	ASSERT_EQUAL(sendero1, sendero2);
}

void testSetDificultad(){
	Sendero sendero1, sendero2;
		string dificultad="facil";

		sendero1.setDificultad("facil");

		sendero2.setDificultad(dificultad);

		ASSERT_EQUAL(sendero1, sendero2);
}

void testSetAdministrativo(){
	Visitante admin1, admin2;
	string nombre="Juan";
	string dni="3274678U";
	string direccion="Cordoba";
	string nacimiento="1/6/90";
	string correo="nhdsaujsd@uco.es";
	int telefono=764838382;

	admin1.setInfo("Juan", "3274678U", "Cordoba", "nhdsaujsd@uco.es", "1/6/90", 764838382);

	admin2.setInfo(nombre, dni, direccion, correo, nacimiento, telefono);

	ASSERT_EQUAL(admin1, admin2);
