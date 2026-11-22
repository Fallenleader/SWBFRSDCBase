// Aurek debug text (GLSL ES 1.00)
attribute vec2 aPos;
attribute vec2 aUv;
attribute vec4 aCol;
uniform vec4 uScale;
varying vec2 vUv;
varying vec4 vCol;

void main()
{
	gl_Position = vec4(aPos.x * uScale.x - 1.0, 1.0 - aPos.y * uScale.y, 0.0, 1.0);
	vUv = aUv;
	vCol = aCol;
}
