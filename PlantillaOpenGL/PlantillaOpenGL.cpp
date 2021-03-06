#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>
#include <math.h>

#include "Shader.h"
#include "Vertice.h"

using namespace std;

//Antes del paso 9
Shader *shader;
GLuint posicionID;
GLuint colorID;

vector<Vertice> triangulo;
GLuint vertexArrayTrianguloID;
GLuint bufferTrianguloID;

vector<Vertice> cuadrado;
GLuint vertexArrayCuadradoID;
GLuint bufferCuadradoID;

vector<Vertice> cuadrado2;
GLuint vertexArrayCuadradoID2;
GLuint bufferCuadradoID2;

vector<Vertice> cuadrado3;
GLuint vertexArrayCuadradoID3;
GLuint bufferCuadradoID3;

vector<Vertice> cuadrado4;
GLuint vertexArrayCuadradoID4;
GLuint bufferCuadradoID4;

vector<Vertice> cuadrado5;
GLuint vertexArrayCuadradoID5;
GLuint bufferCuadradoID5;

vector<Vertice> cuadrado6;
GLuint vertexArrayCuadradoID6;
GLuint bufferCuadradoID6;

vector<Vertice> escalones;
GLuint vertexArrayEscalonesID;
GLuint bufferEscalonesID;

vector<Vertice> puerta;
GLuint vertexArrayPuertaID;
GLuint bufferPuertaID;

vector<Vertice> sol;
GLuint vertexArraySolID;
GLuint bufferSolID;

vector<Vertice> piso;
GLuint vertexArrayPisoID;
GLuint bufferPisoID;

void inicializarCuadrado1() {
	Vertice v1 = {
		vec3(-0.1, 0.85, 0.0),
		vec4(0.5, 0.5, 0.5, 1.0)
	};

	Vertice v2 = {
	vec3(-0.1, 0.6, 0.0),
	vec4(0.05, 0.05, 0.05, 0.05)
	};

	Vertice v3 = {
	vec3(0.1, 0.6, 0.0),
	vec4(0.05, 0.05, 0.05, 0.05)
	};

	Vertice v4 = {
	vec3(0.1, 0.85, 0.0),
	vec4(0.5, 0.5, 0.5, 0.5)
	};

	cuadrado.push_back(v1);
	cuadrado.push_back(v2);
	cuadrado.push_back(v3);
	cuadrado.push_back(v4);


}

void inicializarCuadrado2() {
	Vertice v1 = {
	vec3(-0.15, 0.68, 0.0),
	vec4(0.5, 0.5, 0.5, 1.0)
	};

	Vertice v2 = {
	vec3(-0.15, 0.48, 0.0),
	vec4(0.05, 0.05, 0.05, 1.0)
	};

	Vertice v3 = {
	vec3(0.15, 0.48, 0.0),
	vec4(0.05, 0.05, 0.05, 1.0)
	};

	Vertice v4 = {
	vec3(0.15, 0.68, 0.0),
	vec4(0.5, 0.5, 0.5, 1.0)
	};

	cuadrado2.push_back(v1);
	cuadrado2.push_back(v2);
	cuadrado2.push_back(v3);
	cuadrado2.push_back(v4);

}

void inicializarCuadrado3() {
	Vertice v1 = {
	vec3(-0.2, 0.56, 0.0),
	vec4(0.5, 0.5, 0.5, 1.0)
	};

	Vertice v2 = {
	vec3(-0.2, 0.36, 0.0),
	vec4(0.05, 0.05, 0.05, 1.0)
	};

	Vertice v3 = {
	vec3(0.2, 0.36, 0.0),
	vec4(0.05, 0.05, 0.05, 1.0)
	};

	Vertice v4 = {
	vec3(0.2, 0.56, 0.0),
	vec4(0.5, 0.5, 0.5, 1.0)
	};

	cuadrado3.push_back(v1);
	cuadrado3.push_back(v2);
	cuadrado3.push_back(v3);
	cuadrado3.push_back(v4);
}

void inicializarCuadrado4() {
	Vertice v1 = {
	vec3(-0.25, 0.44, 0.0),
	vec4(0.5, 0.5, 0.5, 1.0)
	};

	Vertice v2 = {
	vec3(-0.25, 0.24, 0.0),
	vec4(0.05, 0.05, 0.05, 1.0)
	};

	Vertice v3 = {
	vec3(0.25, 0.24, 0.0),
	vec4(0.05, 0.05, 0.05, 1.0)
	};

	Vertice v4 = {
	vec3(0.25, 0.44, 0.0),
	vec4(0.5, 0.5, 0.5, 1.0)
	};

	cuadrado4.push_back(v1);
	cuadrado4.push_back(v2);
	cuadrado4.push_back(v3);
	cuadrado4.push_back(v4);
}

void inicializarCuadrado5() {
	Vertice v1 = {
	vec3(-0.3, 0.32, 0.0),
	vec4(0.5, 0.5, 0.5, 1.0)
	};

	Vertice v2 = {
	vec3(-0.3, 0.12, 0.0),
	vec4(0.05, 0.05, 0.05, 1.0)
	};

	Vertice v3 = {
	vec3(0.3, 0.12, 0.0),
	vec4(0.05, 0.05, 0.05, 1.0)
	};

	Vertice v4 = {
	vec3(0.3, 0.32, 0.0),
	vec4(0.5, 0.5, 0.5, 1.0)
	};

	cuadrado5.push_back(v1);
	cuadrado5.push_back(v2);
	cuadrado5.push_back(v3);
	cuadrado5.push_back(v4);
}

void inicializarCuadrado6() {
	Vertice v1 = {
	vec3(-0.35, 0.2, 0.0),
	vec4(0.5, 0.5, 0.5, 1.0)
	};

	Vertice v2 = {
	vec3(-0.35, 0.0, 0.0),
	vec4(0.05, 0.05, 0.05, 1.0)
	};

	Vertice v3 = {
	vec3(0.35, 0.0, 0.0),
	vec4(0.05, 0.05, 0.05, 1.0)
	};

	Vertice v4 = {
	vec3(0.35, 0.2, 0.0),
	vec4(0.5, 0.5, 0.5, 1.0)
	};

	cuadrado6.push_back(v1);
	cuadrado6.push_back(v2);
	cuadrado6.push_back(v3);
	cuadrado6.push_back(v4);
}

void inicializarEscalones() {

	Vertice v1 = {
		vec3(-0.05, 0.68, 0.0),
		vec4(0.4, 0.4, 0.4, 1.0)
	};

	Vertice v2 = {
	vec3(-0.1, -0.2, 0.0),
	vec4(0.4, 0.4, 0.4, 1.0)
	};

	Vertice v3 = {
	vec3(0.1, -0.2, 0.0),
	vec4(0.4, 0.4, 0.4, 1.0)
	};

	Vertice v4 = {
	vec3(0.05, 0.68, 0.0),
	vec4(0.4, 0.4, 0.4, 1.0)
	};

	escalones.push_back(v1);
	escalones.push_back(v2);
	escalones.push_back(v3);
	escalones.push_back(v4);
}

void inicializarPuerta() {

	Vertice v1 = {
		vec3(-0.025, 0.68, 0.0),
		vec4(0.1, 0.1, 0.1, 1.0)
	};

	Vertice v2 = {
	vec3(-0.025, 0.8, 0.0),
	vec4(0.1, 0.1, 0.1, 1.0)
	};

	Vertice v3 = {
	vec3(0.025, 0.8, 0.0),
	vec4(0.1, 0.1, 0.1, 1.0)
	};

	Vertice v4 = {
	vec3(0.025, 0.68, 0.0),
	vec4(0.1, 0.1, 0.1, 1.0)
	};

	puerta.push_back(v1);
	puerta.push_back(v2);
	puerta.push_back(v3);
	puerta.push_back(v4);
}

void inicializarPiso() {
	Vertice v1 = {
	vec3(-1.0, 0.08, 0.0),
	vec4(0.15, 0.7, 0.38, 1.0)
	};

	Vertice v2 = {
	vec3(-1.0, -1.0, 0.0),
	vec4(0.15, 0.7, 0.38, 1.0)
	};

	Vertice v3 = {
	vec3(1.0, -1.0, 0.0),
	vec4(0.15, 0.7, 0.38, 1.0)
	};

	Vertice v4 = {
	vec3(1.0, 0.08, 0.0),
	vec4(0.15, 0.7, 0.38, 1.0)
	};

	piso.push_back(v1);
	piso.push_back(v2);
	piso.push_back(v3);
	piso.push_back(v4);
}



void inicializarTriangulo() {
	Vertice v1 = {
		vec3(0.0f, 0.3f, 0.0f),
		vec4(1.0f,0.0f,0.0f,1.0f)
	};

	Vertice v2 = {
		vec3(0.3f, 0.0f, 0.0f),
		vec4(1.0f,0.0f,0.0f,1.0f)
	};

	Vertice v3 = {
		vec3(-0.3f, 0.0f, 0.0f),
		vec4(1.0f,0.0f,0.0f,1.0f)
	};

	triangulo.push_back(v1);
	triangulo.push_back(v2);
	triangulo.push_back(v3);
}

void dibujar() {
	//Elegir el shader
	shader->enlazar();

	//Eligir un vertex array
	glBindVertexArray(vertexArrayTrianguloID);
	//Dibujar
	glDrawArrays(GL_TRIANGLES, 0, triangulo.size());


	//Eligir un vertex array
	glBindVertexArray(vertexArrayCuadradoID);
	//Dibujar
	glDrawArrays(GL_POLYGON, 0, cuadrado.size());


	//Eligir un vertex array
	glBindVertexArray(vertexArrayCuadradoID2);
	//Dibujar
	glDrawArrays(GL_POLYGON, 0, cuadrado2.size());


	//Eligir un vertex array
	glBindVertexArray(vertexArrayCuadradoID3);
	//Dibujar
	glDrawArrays(GL_POLYGON, 0, cuadrado3.size());

	//Eligir un vertex array
	glBindVertexArray(vertexArrayCuadradoID4);
	//Dibujar
	glDrawArrays(GL_POLYGON, 0, cuadrado4.size());

	//Eligir un vertex array
	glBindVertexArray(vertexArrayCuadradoID5);
	//Dibujar
	glDrawArrays(GL_POLYGON, 0, cuadrado5.size());

	//Eligir un vertex array
	glBindVertexArray(vertexArrayCuadradoID6);
	//Dibujar
	glDrawArrays(GL_POLYGON, 0, cuadrado6.size());



	//Eligir un vertex array
	glBindVertexArray(vertexArrayEscalonesID);
	//Dibujar
	glDrawArrays(GL_POLYGON, 0, escalones.size());

	//Eligir un vertex array
	glBindVertexArray(vertexArrayPuertaID);
	//Dibujar
	glDrawArrays(GL_QUADS, 0, puerta.size());

	//Eligir un vertex array
	glBindVertexArray(vertexArrayPisoID);
	//Dibujar
	glDrawArrays(GL_QUADS, 0, piso.size());

	//Soltar el vertex array
	glBindVertexArray(0);
	//Soltar el shader
	shader->desenlazar();
}


void actualizar(){

}

int main()
{

	GLFWwindow * window;

	// Si no se pudo iniciar GLFW terminamos la ejecucion
	if (!glfwInit()) { exit(EXIT_FAILURE); } // Si se pudo iniciar GLFW entonces inicializamos la ventana

	window = glfwCreateWindow(1024, 768, "Ventana", NULL, NULL);

	//SI no pudimos iniciar la ventana, entonces terminamos la ejecucion
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	//Establecemos el contexto
	glfwMakeContextCurrent(window);

	//Una vez establecido el contexto, activamos funciones modernas
	glewExperimental = true;
	GLenum errorGlew = glewInit();
	if (errorGlew != GLEW_OK) {
		cout << glewGetErrorString(errorGlew);
	}

	const GLubyte *versionGL = glGetString(GL_VERSION);
	cout << "Version OpenGL: " << versionGL;
	cout << "\n Hecho por Javier Eliud \n Matricula: 169171";

	/*------------------------------------------------------------------------------*/

	//inicializarTriangulo();
	inicializarCuadrado1();
	inicializarCuadrado2();
	inicializarCuadrado3();
	inicializarCuadrado4();
	inicializarCuadrado5();
	inicializarCuadrado6();
	inicializarEscalones();
	inicializarPuerta();
	inicializarPiso();

	//Antes del paso 9
	const char *rutaVertex = "VertexShader.shader";
	const char *rutaFragment = "FragmentShader.shader";

	shader = new Shader(rutaVertex, rutaFragment);

	//Mapeo de atributos
	posicionID = glGetAttribLocation(shader->getID(), "posicion");
	colorID = glGetAttribLocation(shader->getID(), "color");

	//Desenlazar el shader
	shader->desenlazar();


	
	/*-----------------------------------------------------------------------------------------------*/
	/*
	//Buffer del triangulo
	//Crear un vertex array
	glGenVertexArrays(1, &vertexArrayTrianguloID);
	glBindVertexArray(vertexArrayTrianguloID);

	//Crear vertex buffer
	glGenBuffers(1, &bufferTrianguloID);
	glBindBuffer(GL_ARRAY_BUFFER, bufferTrianguloID);

	//Llenar el buffer
	glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice) * triangulo.size(), triangulo.data(), GL_STATIC_DRAW);
	
	//Habilitar atributos de shader
	glEnableVertexAttribArray(posicionID);
	glEnableVertexAttribArray(colorID);

	//Especificar a OpenGL como se va a comunicar
	glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
	glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));

	*/
	/*-----------------------------------------------------------------------------------------------*/


	/*-----------------------------------------------------------------------------------------------*/
	//Buffer del cuadrado
	//Crear un vertex array
	glGenVertexArrays(1, &vertexArrayCuadradoID);
	glBindVertexArray(vertexArrayCuadradoID);

	//Crear vertex buffer
	glGenBuffers(1, &bufferCuadradoID);
	glBindBuffer(GL_ARRAY_BUFFER, bufferCuadradoID);

	//Llenar el buffer
	glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice) * cuadrado.size(), cuadrado.data(), GL_STATIC_DRAW);

	//Habilitar atributos de shader
	glEnableVertexAttribArray(posicionID);
	glEnableVertexAttribArray(colorID);

	//Especificar a OpenGL como se va a comunicar
	glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
	glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));
	/*-----------------------------------------------------------------------------------------------*/
	/*-----------------------------------------------------------------------------------------------*/
	//Buffer del cuadrado
	//Crear un vertex array
	glGenVertexArrays(1, &vertexArrayCuadradoID2);
	glBindVertexArray(vertexArrayCuadradoID2);

	//Crear vertex buffer
	glGenBuffers(1, &bufferCuadradoID2);
	glBindBuffer(GL_ARRAY_BUFFER, bufferCuadradoID2);

	//Llenar el buffer
	glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice) * cuadrado2.size(), cuadrado2.data(), GL_STATIC_DRAW);

	//Habilitar atributos de shader
	glEnableVertexAttribArray(posicionID);
	glEnableVertexAttribArray(colorID);

	//Especificar a OpenGL como se va a comunicar
	glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
	glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));
	
	//Soltar vertex array y buffer
	glBindVertexArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	
	/*------------------------------------------------------------------------------*/
	/*-----------------------------------------------------------------------------------------------*/
	//Buffer del cuadrado
	//Crear un vertex array
	glGenVertexArrays(1, &vertexArrayCuadradoID3);
	glBindVertexArray(vertexArrayCuadradoID3);

	//Crear vertex buffer
	glGenBuffers(1, &bufferCuadradoID3);
	glBindBuffer(GL_ARRAY_BUFFER, bufferCuadradoID3);

	//Llenar el buffer
	glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice) * cuadrado3.size(), cuadrado3.data(), GL_STATIC_DRAW);

	//Habilitar atributos de shader
	glEnableVertexAttribArray(posicionID);
	glEnableVertexAttribArray(colorID);

	//Especificar a OpenGL como se va a comunicar
	glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
	glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));

	//Soltar vertex array y buffer
	glBindVertexArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	/*------------------------------------------------------------------------------*/
		/*-----------------------------------------------------------------------------------------------*/
	//Buffer del cuadrado
	//Crear un vertex array
	glGenVertexArrays(1, &vertexArrayCuadradoID4);
	glBindVertexArray(vertexArrayCuadradoID4);

	//Crear vertex buffer
	glGenBuffers(1, &bufferCuadradoID4);
	glBindBuffer(GL_ARRAY_BUFFER, bufferCuadradoID4);

	//Llenar el buffer
	glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice) * cuadrado4.size(), cuadrado4.data(), GL_STATIC_DRAW);

	//Habilitar atributos de shader
	glEnableVertexAttribArray(posicionID);
	glEnableVertexAttribArray(colorID);

	//Especificar a OpenGL como se va a comunicar
	glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
	glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));

	//Soltar vertex array y buffer
	glBindVertexArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	/*------------------------------------------------------------------------------*/
			/*-----------------------------------------------------------------------------------------------*/
	//Buffer del cuadrado
	//Crear un vertex array
	glGenVertexArrays(1, &vertexArrayCuadradoID5);
	glBindVertexArray(vertexArrayCuadradoID5);

	//Crear vertex buffer
	glGenBuffers(1, &bufferCuadradoID5);
	glBindBuffer(GL_ARRAY_BUFFER, bufferCuadradoID5);

	//Llenar el buffer
	glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice) * cuadrado5.size(), cuadrado5.data(), GL_STATIC_DRAW);

	//Habilitar atributos de shader
	glEnableVertexAttribArray(posicionID);
	glEnableVertexAttribArray(colorID);

	//Especificar a OpenGL como se va a comunicar
	glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
	glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));

	//Soltar vertex array y buffer
	glBindVertexArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	/*------------------------------------------------------------------------------*/
			/*-----------------------------------------------------------------------------------------------*/
	//Buffer del cuadrado
	//Crear un vertex array
	glGenVertexArrays(1, &vertexArrayCuadradoID6);
	glBindVertexArray(vertexArrayCuadradoID6);

	//Crear vertex buffer
	glGenBuffers(1, &bufferCuadradoID6);
	glBindBuffer(GL_ARRAY_BUFFER, bufferCuadradoID6);

	//Llenar el buffer
	glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice) * cuadrado6.size(), cuadrado6.data(), GL_STATIC_DRAW);

	//Habilitar atributos de shader
	glEnableVertexAttribArray(posicionID);
	glEnableVertexAttribArray(colorID);

	//Especificar a OpenGL como se va a comunicar
	glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
	glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));

	//Soltar vertex array y buffer
	glBindVertexArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	/*------------------------------------------------------------------------------*/
			/*-----------------------------------------------------------------------------------------------*/
	//Buffer del cuadrado
	//Crear un vertex array
	glGenVertexArrays(1, &vertexArrayEscalonesID);
	glBindVertexArray(vertexArrayEscalonesID);

	//Crear vertex buffer
	glGenBuffers(1, &bufferEscalonesID);
	glBindBuffer(GL_ARRAY_BUFFER, bufferEscalonesID);

	//Llenar el buffer
	glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice) * escalones.size(), escalones.data(), GL_STATIC_DRAW);

	//Habilitar atributos de shader
	glEnableVertexAttribArray(posicionID);
	glEnableVertexAttribArray(colorID);

	//Especificar a OpenGL como se va a comunicar
	glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
	glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));

	//Soltar vertex array y buffer
	glBindVertexArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	/*------------------------------------------------------------------------------*/
				/*-----------------------------------------------------------------------------------------------*/
	//Buffer del cuadrado
	//Crear un vertex array
	glGenVertexArrays(1, &vertexArrayPuertaID);
	glBindVertexArray(vertexArrayPuertaID);

	//Crear vertex buffer
	glGenBuffers(1, &bufferPuertaID);
	glBindBuffer(GL_ARRAY_BUFFER, bufferPuertaID);

	//Llenar el buffer
	glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice) * puerta.size(), puerta.data(), GL_STATIC_DRAW);

	//Habilitar atributos de shader
	glEnableVertexAttribArray(posicionID);
	glEnableVertexAttribArray(colorID);

	//Especificar a OpenGL como se va a comunicar
	glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
	glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));

	//Soltar vertex array y buffer
	glBindVertexArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	/*-----------------------------------------------------------------------------------------------*/
//Buffer del cuadrado
//Crear un vertex array
	glGenVertexArrays(1, &vertexArrayPisoID);
	glBindVertexArray(vertexArrayPisoID);

	//Crear vertex buffer
	glGenBuffers(1, &bufferPisoID);
	glBindBuffer(GL_ARRAY_BUFFER, bufferPisoID);

	//Llenar el buffer
	glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice) * piso.size(), piso.data(), GL_STATIC_DRAW);

	//Habilitar atributos de shader
	glEnableVertexAttribArray(posicionID);
	glEnableVertexAttribArray(colorID);

	//Especificar a OpenGL como se va a comunicar
	glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
	glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));

	//Soltar vertex array y buffer
	glBindVertexArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	/*------------------------------------------------------------------------------*/

	//ciclo de dibujo (Draw loop)
	while (!glfwWindowShouldClose(window)) {
		//Establecer region de dibujo
		glViewport(0, 0, 1024, 768);
		//Establece el color de borrado
		glClearColor(0, 0.68, 0.83, 0.09);
		//Clear
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Rutina de dibujo
		actualizar();
		dibujar();

		//Cambiar los buffer
		glfwSwapBuffers(window);
		//Reconocer si hay entradas
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}