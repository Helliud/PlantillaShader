#include "pch.h"
#include "Shader.h"

GLuint Shader::getID() {
	return shaderID;
}

Shader::Shader(const char * rutaVertex, const char * rutaFragment) {
	//Guardar en variables el texto de los codigos de los Shaders

	string codigoVertexShader;
	ifstream vertexShaderStream(rutaVertex, ios::in);
	if (vertexShaderStream.is_open()) {
		string linea;
		while (getline(vertexShaderStream, linea)) {
			codigoVertexShader += linea + "\n";
		}
		vertexShaderStream.close();
	}

	else
	{
		cout << "No se pudo abrir el archivo" << rutaVertex << endl;
	}

	string codigoFragmentShader;
	ifstream fragmentShaderStream(
		rutaFragment, ios::in
	);

	if (fragmentShaderStream.is_open()) {
		string linea;
		while (getline(fragmentShaderStream, linea))
		{
			codigoFragmentShader += linea + "\n";
		}

		fragmentShaderStream.close();
	}

	else
	{
		cout << "No se pudo abrir el archivo: " << rutaFragment << endl;
	}

	//Convertir de string a candena de char
	const char* cadenaCodigoVertex = codigoVertexShader.c_str();
	const char* cadenaCodigoFragment = codigoFragmentShader.c_str();

	//1. Crear el programa de Shader
	shaderID = glCreateProgram();
	GLuint vertexShaderID = glCreateShader(GL_VERTEX_SHADER);
	GLuint fragmentShaderID = glCreateShader(GL_FRAGMENT_SHADER);

	//2. Cargar el codigo del shader
	glShaderSource(vertexShaderID, 1, &cadenaCodigoVertex, NULL);
	glShaderSource(fragmentShaderID, 1, &cadenaCodigoFragment, NULL);

	//3. Compilar los Shaders
	glCompileShader(vertexShaderID);
	glCompileShader(fragmentShaderID);

	//4. Verificar los errores de compilacion
	verificarCompilacion(vertexShaderID);
	verificarCompilacion(fragmentShaderID);

	//5. Adjuntar shader al programa
	glAttachShader(shaderID, vertexShaderID);
	glAttachShader(shaderID, fragmentShaderID);

	//6. Vincular el programa
	glLinkProgram(shaderID);

	//7. Verificar la vinculacion
	verificarVinculacion(shaderID);

	//8. Usar el programa
	glUseProgram(shaderID);

	//9. 
}

//Se hace antes del paso 4
void Shader::verificarCompilacion(GLuint id) {
	//gl_false es 0
	GLint resultado = GL_FALSE;
	GLint longitudLog = 0;
	
	glGetShaderiv(id, GL_COMPILE_STATUS, &resultado);
	glGetShaderiv(id, GL_INFO_LOG_LENGTH, &longitudLog);

	if (longitudLog > 0) {
		vector<char> mensajeError(longitudLog);
		glGetShaderInfoLog(id, longitudLog, NULL, &mensajeError[0]);
		for (vector<char>::const_iterator i = mensajeError.begin(); i != mensajeError.end(); i++) {
			cout << *i;
		}
	}
}

//Antes del paso 7
void Shader::verificarVinculacion(GLuint id) {
	GLint estadoVinculacion, estadoValidacion;

	//Ya no estamos checando un shader en especifico, si no ya un programa
	glGetProgramiv(id, GL_LINK_STATUS, &estadoVinculacion);
	if (estadoVinculacion = GL_FALSE) {
		cout << "No se pudo vincular programa... F" << endl;
	}

	glGetProgramiv(id, GL_VALIDATE_STATUS, &estadoValidacion);
	if (estadoValidacion = GL_FALSE) {
		cout << "No hubo validacion... F" << endl;
	}
}

//Antes del paso 9
void Shader::enlazar() {
	glUseProgram(shaderID);
}
void Shader::desenlazar() {
	//Para dejar de usar un programa
	glUseProgram(0);
}