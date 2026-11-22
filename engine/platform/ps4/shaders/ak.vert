// Aurek level / model vertex shader (GLSL ES 1.00; the GL back end's, for PS4GL_GNM's offline compiler)
attribute vec3 aPos;
attribute vec2 aUv;
attribute vec4 aNrm;
attribute vec4 aCol;
uniform mat4 uVP;
uniform vec4 uFogRange;
uniform vec4 uTint;
uniform vec4 uSh0;
uniform vec4 uSh1;
uniform vec4 uSh2;
uniform vec4 uSh3;
uniform vec4 uUvOff;
varying vec2 vUv;
varying vec4 vCol;
varying vec4 vFog;

void main()
{
	vec4 p = uVP * vec4(aPos, 1.0);
	gl_Position = p;
	vUv = aUv + uUvOff.xy;
	vec3 c = aCol.xyz;
	if (uFogRange.w > 0.5) {
		vec3 n = aNrm.xyz;
		c = uSh0.xyz + vec3(max(dot(n, uSh1.xyz), 0.0), max(dot(n, uSh2.xyz), 0.0), max(dot(n, uSh3.xyz), 0.0));
	}
	vCol = vec4(c * uFogRange.z, aCol.w) * uTint;
	float f = 0.0;
	if (uFogRange.y > uFogRange.x) f = clamp((p.w - uFogRange.x) / (uFogRange.y - uFogRange.x), 0.0, 1.0);
	vFog = vec4(f, 0.0, 0.0, 0.0);
}
