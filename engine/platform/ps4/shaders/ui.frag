// Aurek debug text (GLSL ES 1.00): the font's coverage is its red channel
uniform sampler2D uTex;
varying vec2 vUv;
varying vec4 vCol;

void main()
{
	vec4 t = texture2D(uTex, vUv);
	gl_FragColor = vec4(vCol.xyz, vCol.w * t.x);
}
