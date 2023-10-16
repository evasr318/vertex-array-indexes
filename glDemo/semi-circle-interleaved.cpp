#include "semi-circle-interleaved.h"

struct SemiCircleInterleaved {

	GLfloat		x, y;		// position
	GLubyte		r, g, b;	// colour

	SemiCircleInterleaved(GLfloat x, GLfloat y, GLubyte r, GLubyte g, GLubyte b) {

		this->x = x;
		this->y = y;

		this->r = r;
		this->g = g;
		this->b = b;
	}
};

static SemiCircleInterleaved vertices[] = {

	SemiCircleInterleaved(-0.25f, 0.0f, 255, 0, 0),
	SemiCircleInterleaved(-0.75f, 0.0f, 255, 0, 0),
	SemiCircleInterleaved(-0.216506351f, 0.125f, 255, 0, 0),
	SemiCircleInterleaved(-0.649519053f, 0.375f, 255, 0, 0),
	SemiCircleInterleaved(-0.125, 0.216506351f, 255, 255, 0),
	SemiCircleInterleaved(-0.375f, 0.649519053f, 255, 255, 0),
	SemiCircleInterleaved(0.0f, 0.25f, 0, 255, 0),
	SemiCircleInterleaved(0.0f, 0.75f, 0, 255, 0),
	SemiCircleInterleaved(0.125f, 0.216506351f, 112, 231, 243),
	SemiCircleInterleaved(0.375f, 0.649519053f, 112, 231, 243),
	SemiCircleInterleaved(0.216506351f, 0.125f, 0, 0, 255),
	SemiCircleInterleaved(0.649519053f, 0.375f, 0, 0, 255),
	SemiCircleInterleaved(0.25f, 0.0f, 234, 53, 230),
	SemiCircleInterleaved(0.75f, 0.0f, 234, 53, 230)


};

void drawSemiCircleInterleaved() {
	
	glVertexPointer(2, GL_FLOAT, sizeof(SemiCircleInterleaved), &(vertices[0].x));
	glColorPointer(3, GL_UNSIGNED_BYTE, sizeof(SemiCircleInterleaved), &(vertices[0].r));

	glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_COLOR_ARRAY);
	glDrawArrays(GL_TRIANGLE_STRIP, 0, 14);
}