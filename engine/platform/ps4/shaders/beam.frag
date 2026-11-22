// Aurek fragment program: the procedural beam glow (GLSL ES 1.00)
uniform vec4 uFog;
varying vec2 vUv;
varying vec4 vCol;
varying vec4 vFog;

void main()
{
	float d = length(vUv);
	float glow = exp(-d * d * 5.0) * (1.0 - smoothstep(0.75, 1.0, d));
	float core = 1.0 - smoothstep(0.16, 0.30, d);
	float k = vCol.w * (1.0 - vFog.x);
	gl_FragColor = vec4((vCol.xyz * glow + vec3(core, core, core)) * k, glow * k * 0.6);
}
