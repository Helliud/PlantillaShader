//La primera linea SIEMPRE es la version
#version 330 core

//Atributos de entrada (vienen desde C++)
in vec3 posicion;
in vec4 color;

//Atributos de salida (Van hacia el fragment shader)
out vec4 fragmentColor;

//Funcion Main
void main() {
	//Es la posiciom de salida del vertice
	//Es del tipo vec4
	gl_Position.xyz = posicion;
	gl_Position.w = 1.0;

	//Establecer valores de atributos de salida
	fragmentColor = color;
}