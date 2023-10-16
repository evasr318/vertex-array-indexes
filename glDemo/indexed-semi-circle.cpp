#include "indexed-semi-circle.h"


static GLfloat positions[] = {

	-0.25f, 0.0f, //v0
	-0.75f, 0.0f,	//v1
	-0.216506351f, 0.125f,	//v2
	-0.649519053f, 0.375f,	//v3
	-0.125, 0.216506351f,	//v4
	-0.375f, 0.649519053f,	//v5
	0.0f, 0.25f,	//v6
	0.0f, 0.75f,	//v7
	0.125f, 0.216506351f,	//v8
	0.375f, 0.649519053f,	//v9
	0.216506351f, 0.125f,	//v10
	0.649519053f, 0.375f,	//v11
	0.25f, 0.0f, //v12
	0.75f, 0.0f, //v13
};

static GLubyte triangleIndices[] = {
	0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 
};

void drawIndexedSemiCircle() {

		glShadeModel(GL_FLAT);

		glVertexPointer(2, GL_FLOAT, 0, positions);

		glEnableClientState(GL_VERTEX_ARRAY);
//glEnableClientState(GL_COLOR_ARRAY);

// Draw the object
		glDrawElements(GL_TRIANGLE_STRIP, 14, GL_UNSIGNED_BYTE, triangleIndices);
}