// Aurek fragment program: cutout (GLSL ES 1.00)
uniform sampler2D uTex;
uniform vec4 uFog;
varying vec2 vUv;
varying vec4 vCol;
varying vec4 vFog;

void main()
{
	vec4 t = texture2D(uTex, vUv);
	vec4 res;
	if (t.w < 0.5) discard;
	res = vec4(mix(t.xyz * vCol.xyz, uFog.xyz, vFog.x), 1.0);
	gl_FragColor = res;
}
