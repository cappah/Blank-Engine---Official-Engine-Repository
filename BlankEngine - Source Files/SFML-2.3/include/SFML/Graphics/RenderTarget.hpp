aaaaaiadp
diaaaaahccaabaaaabaaaaaadkaabaaaacaaaaaabkaabaaaabaaaaaabaaaaaah
ecaabaaaabaaaaaaegbcbaaaagaaaaaaegbcbaaaagaaaaaaefaaaaajpcaabaaa
acaaaaaakgakbaaaabaaaaaaeghobaaaacaaaaaaaagabaaaacaaaaaadiaaaaah
ccaabaaaabaaaaaabkaabaaaabaaaaaaakaabaaaacaaaaaadiaaaaaiocaabaaa
abaaaaaafgafbaaaabaaaaaaagijcaaaaaaaaaaaagaaaaaadiaaaaahhcaabaaa
acaaaaaapgapbaaaaaaaaaaajgahbaaaabaaaaaaaaaaaaaljcaabaaaaaaaaaaa
agaibaiaebaaaaaaaaaaaaaaaceaaaaaaaaaiadpaaaaaaaaaaaaaaaaaaaaiadp
diaaaaahecaabaaaaaaaaaaackaabaaaaaaaaaaackaabaaaaaaaaaaaapaaaaah
ecaabaaaaaaaaaaakgakbaaaaaaaaaaaagaabaaaabaaaaaaaaaaaaahecaabaaa
aaaaaaaackaabaaaaaaaaaaaabeaaaaaaaaaaalpdiaaaaahbcaabaaaabaaaaaa
dkaabaaaaaaaaaaadkaabaaaaaaaaaaadiaaaaahbcaabaaaabaaaaaaakaabaaa
abaaaaaaakaabaaaabaaaaaadiaaaaahicaabaaaaaaaaaaadkaabaaaaaaaaaaa
akaabaaaabaaaaaaefaaaaajpcaabaaaadaaaaaaegbabaaaabaaaaaaeghobaaa
aaaaaaaaaagabaaaaaaaaaaadcaaaaamhcaabaaaaeaaaaaaegiccaaaaaaaaaaa
ajaaaaaaegacbaaaadaaaaaaegiccaiaebaaaaaaaaaaaaaaacaaaaaadcaaaaal
hcaabaaaaeaaaaaakgikcaaaaaaaaaaaanaaaaaaegacbaaaaeaaaaaaegiccaaa
aaaaaaaaacaaaaaaaaaaaaalhcaabaaaafaaaaaaegacbaiaebaaaaaaaeaaaaaa
aceaaaaaaaaaiadpaaaaiadpaaaaiadpaaaaaaaadcaaaaajhcaabaaaaeaaaaaa
egacbaaaafaaaaaapgapbaaaaaaaaaaaegacbaaaaeaaaaaadiaaaaahhcaabaaa
acaaaaaaegacbaaaacaaaaaaegacbaaaaeaaaaaadiaaaaahicaabaaaaaaaaaaa
akaabaaaaaaaaaaaakaabaaaaaaaaaaadiaaaaahicaabaaaaaaaaaaadkaabaaa
aaaaaaaadkaabaaaaaaaaaaadiaaaaahbcaabaaaaaaaaaaaakaabaaaaaaaaaaa
dkaabaaaaaaaaaaadcaaaaajbcaabaaaaaaaaaaackaabaaaaaaaaaaaakaabaaa
aaaaaaaaabeaaaaaaaaaiadpaaaaaaaiicaabaaaaaaaaaaabkaabaiaebaaaaaa
aaaaaaaaabeaaaaaaaaaiadpdiaaaaahbcaabaaaabaaaaaadkaabaaaaaaaaaaa
dkaabaaaaaaaaaaadiaaaaahbcaabaaaabaaaaaaakaabaaaabaaaaaaakaabaaa
abaaaaaadiaaaaahicaabaaaaaaaaaaadkaabaaaaaaaaaaaakaabaaaabaaaaaa
dcaaaaajecaabaaaaaaaaaaackaabaaaaaaaaaaadkaabaaaaaaaaaaaabeaaaaa
aaaaiadpdiaaaaahbcaabaaaaaaaaaaaakaabaaaaaaaaaaackaabaaaaaaaaaaa
diaaaaahbcaabaaaaaaaaaaabkaabaaaaaaaaaaaakaabaaaaaaaaaaadiaaaaah
hcaabaaaaaaaaaaaagaabaaaaaaaaaaajgahbaaaabaaaaaadiaaaaaihcaabaaa
abaaaaaaegacbaaaadaaaaaaegiccaaaaaaaaaaaajaaaaaadiaaaaaiiccabaaa
aaaaaaaadkaabaaaadaaaaaadkiacaaaaaaaaaaaajaaaaaadcaaaaanicaabaaa
aaaaaaaackiacaiaebaaaaaaaaaaaaaaanaaaaaadkiacaaaaaaaaaaaacaaaaaa
dkiacaaaaaaaaaaaacaaaaaadiaaaaahhcaabaaaabaaaaaapgapbaaaaaaaaaaa
egacbaaaabaaaaaadcaaaaajhccabaaaaaaaaaaaegacbaaaabaaaaaaegacbaaa
aaaaaaaaegacbaaaacaaaaaadoaaaaab                          $Globals@        unity_ColorSpaceDielectricSpec                        _LightColor0                 `       unity_LightGammaCorrectionConsts                 �      _Color                 �   	   _Metallic                 �      _Glossiness                 �         _MainTex              _LightTexture0            _LightTextureB0            $Globals                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    �:    (               POINT_COOKIE   SHADOWS_OFF
   _NORMALMAP   _ALPHATEST_ON  !!GLSL
#ifdef VERTEX
uniform vec3 _WorldSpaceCameraPos;
uniform vec4 _WorldSpaceLightPos0;

uniform mat4 _Object2World;
uniform mat4 _World2Object;
uniform vec4 _MainTex_ST;
uniform vec4 _DetailAlbedoMap_ST;
uniform float _UVSec;
uniform mat4 _LightMatrix0;
attribute vec4 TANGENT;
varying vec4 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD1;
varying vec4 xlv_TEXCOORD2;
varying vec4 xlv_TEXCOORD2_1;
varying vec4 xlv_TEXCOORD2_2;
varying vec3 xlv_TEXCOORD5;
void main ()
{
  vec2 tmpvar_1;
  tmpvar_1 = gl_MultiTexCoord0.xy;
  vec2 tmpvar_2;
  tmpvar_2 = gl_MultiTexCoord1.xy;
  vec4 tmpvar_3;
  vec4 tmpvar_4;
  vec4 tmpvar_5;
  vec4 tmpvar_6;
  tmpvar_6 = (_Object2World * gl_Vertex);
  vec4 tmpvar_7;
  tmpvar_7 = (gl_ModelViewProjectionMatrix * gl_Vertex);
  vec4 texcoord_8;
  texcoord_8.xy = ((gl_MultiTexCoord0.xy * _MainTex_ST.xy) + _MainTex_ST.zw);
  vec2 tmpvar_9;
  if ((_UVSec == 0.0)) {
    tmpvar_9 = tmpvar_1;
  } else {
    tmpvar_9 = tmpvar_2;
  };
  texcoord_8.zw = ((tmpvar_9 * _DetailAlbedoMap_ST.xy) + _DetailAlbedoMap_ST.zw);
  vec4 v_10;
  v_10.x = _World2Object[0].x;
  v_10.y = _World2Object[1].x;
  v_10.z = _World2Object[2].x;
  v_10.w = _World2Object[3].x;
  vec4 v_11;
  v_11.x = _World2Object[0].y;
  v_11.y = _World2Object[1].y;
  v_11.z = _World2Object[2].y;
  v_11.w = _World2Object[3].y;
  vec4 v_12;
  v_12.x = _World2Object[0].z;
  v_12.y = _World2Object[1].z;
  v_12.z = _World2Object[2].z;
  v_12.w = _World2Object[3].z;
  vec3 tmpvar_13;
  tmpvar_13 = normalize(((
    (v_10.xyz * gl_Normal.x)
   + 
    (v_11.xyz * gl_Normal.y)
  ) + (v_12.xyz * gl_Normal.z)));
  mat3 tmpvar_14;
  tmpvar_14[0] = _Object2World[0].xyz;
  tmpvar_14[1] = _Object2World[1].xyz;
  tmpvar_14[2] = _Object2World[2].xyz;
  vec4 tmpvar_15;
  tmpvar_15.xyz = normalize((tmpvar_14 * TANGENT.xyz));
  tmpvar_15.w = TANGENT.w;
  vec3 tmpvar_16;
  vec3 tmpvar_17;
  tmpvar_16 = tmpvar_15.xyz;
  tmpvar_17 = (((tmpvar_13.yzx * tmpvar_15.zxy) - (tmpvar_13.zxy * tmpvar_15.yzx)) * TANGENT.www);
  vec3 tmpvar_18;
  vec3 tmpvar_19;
  vec3 tmpvar_20;
  tmpvar_18.x = tmpvar_16.x;
  tmpvar_18.y = tmpvar_17.x;
  tmpvar_18.z = tmpvar_13.x;
  tmpvar_19.x = tmpvar_16.y;
  tmpvar_19.y = tmpvar_17.y;
  tmpvar_19.z = tmpvar_13.y;
  tmpvar_20.x = tmpvar_16.z;
  tmpvar_20.y = tmpvar_17.z;
  tmpvar_20.z = tmpvar_13.z;
  vec3 v_21;
  v_21.x = tmpvar_18.x;
  v_21.y = tmpvar_19.x;
  v_21.z = tmpvar_20.x;
  tmpvar_3.xyz = v_21;
  vec3 v_22;
  v_22.x = tmpvar_18.y;
  v_22.y = tmpvar_19.y;
  v_22.z = tmpvar_20.y;
  tmpvar_4.xyz = v_22;
  vec3 v_23;
  v_23.x = tmpvar_18.z;
  v_23.y = tmpvar_19.z;
  v_23.z = tmpvar_20.z;
  tmpvar_5.xyz = v_23;
  vec3 tmpvar_24;
  tmpvar_24 = normalize((_WorldSpaceLightPos0.xyz - (tmpvar_6.xyz * _WorldSpaceLightPos0.w)));
  tmpvar_3.w = tmpvar_24.x;
  tmpvar_4.w = tmpvar_24.y;
  tmpvar_5.w = tmpvar_24.z;
  gl_Position = tmpvar_7;
  xlv_TEXCOORD0 = texcoord_8;
  xlv_TEXCOORD1 = normalize((tmpvar_6.xyz - _WorldSpaceCameraPos));
  xlv_TEXCOORD2 = tmpvar_3;
  xlv_TEXCOORD2_1 = tmpvar_4;
  xlv_TEXCOORD2_2 = tmpvar_5;
  xlv_TEXCOORD5 = (_LightMatrix0 * (_Object2World * gl_Vertex)).xyz;
}


#endif
#ifdef FRAGMENT
uniform vec4 unity_ColorSpaceDielectricSpec;
uniform vec4 _LightColor0;
uniform sampler2D unity_NHxRoughness;
uniform vec4 _Color;
uniform float _Cutoff;
uniform sampler2D _MainTex;
uniform sampler2D _BumpMap;
uniform float _Metallic;
uniform float _Glossiness;
uniform samplerCube _LightTexture0;
uniform sampler2D _LightTextureB0;
varying vec4 xlv_TEXCOORD0;
varying vec3 xlv_TEXCOORD1;
varying vec4 xlv_TEXCOORD2;
varying vec4 xlv_TEXCOORD2_1;
varying vec4 xlv_TEXCOORD2_2;
varying vec3 xlv_TEXCOORD5;
void main ()
{
  vec3 tmpvar_1;
  vec3 tmpvar_2;
  vec3 tmpvar_3;
  tmpvar_1 = xlv_TEXCOORD2.xyz;
  tmpvar_2 = xlv_TEXCOORD2_1.xyz;
  tmpvar_3 = xlv_TEXCOORD2_2.xyz;
  mat3 tmpvar_4;
  tmpvar_4[0].x = tmpvar_1.x;
  tmpvar_4[0].y = tmpvar_2.x;
  tmpvar_4[0].z = tmpvar_3.x;
  tmpvar_4[1].x = tmpvar_1.y;
  tmpvar_4[1].y = tmpvar_2.y;
  tmpvar_4[1].z = tmpvar_3.y;
  tmpvar_4[2].x = tmpvar_1.z;
  tmpvar_4[2].y = tmpvar_2.z;
  tmpvar_4[2].z = tmpvar_3.z;
  float x_5;
  x_5 = ((texture2D (_MainTex, xlv_TEXCOORD0.xy).w * _Color.w) - _Cutoff);
  if ((x_5 < 0.0)) {
    discard;
  };
  vec3 normal_6;
  normal_6.xy = ((texture2D (_BumpMap, xlv_TEXCOORD0.xy).wy * 2.0) - 1.0);
  normal_6.z = sqrt((1.0 - clamp (
    dot (normal_6.xy, normal_6.xy)
  , 0.0, 1.0)));
  vec3 n_7;
  n_7 = (normal_6 * tmpvar_4);
  vec3 tmpvar_8;
  tmpvar_8 = (_Color.xyz * texture2D (_MainTex, xlv_TEXCOORD0.xy).xyz);
  vec3 tmpvar_9;
  tmpvar_9.x = xlv_TEXCOORD2.w;
  tmpvar_9.y = xlv_TEXCOORD2_1.w;
  tmpvar_9.z = xlv_TEXCOORD2_2.w;
  vec3 viewDir_10;
  viewDir_10 = -(xlv_TEXCOORD1);
  vec2 tmpvar_11;
  tmpvar_11.x = dot ((viewDir_10 - (2.0 * 
    (dot (n_7, viewDir_10) * n_7)
  )), tmpvar_9);
  tmpvar_11.y = (1.0 - clamp (dot (n_7, viewDir_10), 0.0, 1.0));
  vec2 tmpvar_12;
  tmpvar_12.x = (((tmpvar_11 * tmpvar_11) * tmpvar_11) * tmpvar_11).x;
  tmpvar_12.y = (1.0 - _Glossiness);
  vec4 tmpvar_13;
  tmpvar_13.w = 1.0;
  tmpvar_13.xyz = (((
    (tmpvar_8 * (unity_ColorSpaceDielectricSpec.w - (_Metallic * unity_ColorSpaceDielectricSpec.w)))
   + 
    ((texture2D (unity_NHxRoughness, tmpvar_12).w * 16.0) * mix (unity_ColorSpaceDielectricSpec.xyz, tmpvar_8, vec3(_Metallic)))
  ) * (_LightColor0.xyz * 
    (texture2D (_LightTextureB0, vec2(dot (xlv_TEXCOORD5, xlv_TEXCOORD5))).w * textureCube (_LightTexture0, xlv_TEXCOORD5).w)
  )) * clamp (dot (n_7, tmpvar_9), 0.0, 1.0));
  vec4 xlat_varoutput_14;
  xlat_varoutput_14.xyz = tmpvar_13.xyz;
  xlat_varoutput_14.w = 1.0;
  gl_FragData[0] = xlat_varoutput_14;
}


#endif
�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                �:    -                 POINT   SHADOWS_CUBE
   _NORMALMAP   _ALPHATEST_ON�  vs_4_0
eefiecedcckhbhmdbjkamfbmldplilpddjohkijpabaaaaaafeajaaaaadaaaaaa
cmaaaaaaniaaaaaamaabaaaaejfdeheokeaaaaaaafaaaaaaaiaaaaaaiaaaaaaa
aaaaaaaaaaaaaaaaadaaaaaaaaaaaaaaapapaaaaijaaaaaaaaaaaaaaaaaaaaaa
adaaaaaaabaaaaaaahahaaaajaaaaaaaaaaaaaaaaaaaaaaaadaaaaaaacaaaaaa
adadaaaajaaaaaaaabaaaaaaaaaaaaaaadaaaaaaadaaaaaaadadaaaajjaaaaaa
aaaaaaaaaaaaaaaaadaaaaaaaeaaaaaaapapaaaafaepfdejfeejepeoaaeoepfc
enebemaafeeffiedepepfceeaafeebeoehefeofeaaklklklepfdeheooaaaaaaa
aiaaaaaaaiaaaaaamiaaaaaaaaaaaaaaabaaaaaaadaaaaaaaaaaaaaaapaaaaaa
neaaaaaaaaaaaaaaaaaaaaaaadaaaaaaabaaaaaaapaaaaaaneaaaaaaabaaaaaa
aaaaaaaaadaaaaaaacaaaaaaahaiaaaaneaaaaaaacaaaaaaaaaaaaaaadaaaaaa
adaaaaaaapaaaaaaneaaaaaaadaaaaaaaaaaaaaaadaaaaaaaeaaaaaaapaaaaaa
neaaaaaaaeaaaaaaaaaaaaaaadaaaaaaafaaaaaaapaaaaaaneaaaaaaafaaaaaa
aaaaaaaaadaaaaaaagaaaaaaahaiaaaaneaaaaaaagaaaaaaaaaaaaaaadaaaaaa
ahaaaaaaahaiaaaafdfgfpfaepfdejfeejepeoaafeeffiedepepfceeaaklklkl
fdeieefcimahaaaaeaaaabaaodabaaaafjaaaaaeegiocaaaaaaaaaaabeaaaaaa
fjaaaaaeegiocaaaabaaaaaaafaaaaaafjaaaaaeegiocaaaacaaaaaaacaaaaaa
fjaaaaaeegiocaaaadaaaaaabdaaaaaafpaaaaadpcbabaaaaaaaaaaafpaaaaad
hcbabaaaabaaaaaafpaaaaaddcbabaaaacaaaaaafpaaaaaddcbabaaaadaaaaaa
fpaaaaadpcbabaaaaeaaaaaaghaaaaaepccabaaaaaaaaaaaabaaaaaagfaaaaad
pccabaaaabaaaaaagfaaaaadhccabaaaacaaaaaagfaaaaadpccabaaaadaaaaaa
gfaaaaadpccabaaaaeaaaaaagfaaaaadpccabaaaafaaaaaagfaaaaadhccabaaa
agaaaaaagfaaaaadhccabaaaahaaaaaagiaaaaacaeaaaaaadiaaaaaipcaabaaa
aaaaaaaafgbfbaaaaaaaaaaaegiocaaaadaaaaaaabaaaaaadcaaaaakpcaabaaa
aaaaaaaaegiocaaaadaaaaaaaaaaaaaaagbabaaaaaaaaaaaegaobaaaaaaaaaaa
dcaaaaakpcaabaaaaaaaaaaaegiocaaaadaaaaaaacaaaaaakgbkbaaaaaaaaaaa
egaobaaaaaaaaaaadcaaaaakpccabaaaaaaaaaaaegiocaaaadaaaaaaadaaaaaa
pgbpbaaaaaaaaaaaegaobaaaaaaaaaaabiaaaaaibcaabaaaaaaaaaaackiacaaa
aaaaaaaaaoaaaaaaabeaaaaaaaaaaaaadhaaaaajdcaabaaaaaaaaaaaagaabaaa
aaaaaaaaegbabaaaacaaaaaaegbabaaaadaaaaaadcaaaaalmccabaaaabaaaaaa
agaebaaaaaaaaaaaagiecaaaaaaaaaaaamaaaaaakgiocaaaaaaaaaaaamaaaaaa
dcaaaaaldccabaaaabaaaaaaegbabaaaacaaaaaaegiacaaaaaaaaaaaalaaaaaa
ogikcaaaaaaaaaaaalaaaaaadiaaaaaihcaabaaaaaaaaaaafgbfbaaaaaaaaaaa
egiccaaaadaaaaaaanaaaaaadcaaaaakhcaabaaaaaaaaaaaegiccaaaadaaaaaa
amaaaaaaagbabaaaaaaaaaaaegacbaaaaaaaaaaadcaaaaakhcaabaaaaaaaaaaa
egiccaaaadaaaaaaaoaaaaaakgbkbaaaaaaaaaaaegacbaaaaaaaaaaadcaaaaak
hcaabaaaaaaaaaaaegiccaaaadaaaaaaapaaaaaapgbpbaaaaaaaaaaaegacbaaa
aaaaaaaaaaaaaaajhccabaaaacaaaaaaegacbaaaaaaaaaaaegiccaiaebaaaaaa
abaaaaaaaeaaaaaadiaaaaaihcaabaaaabaaaaaafgbfbaaaaeaaaaaaegiccaaa
adaaaaaaanaaaaaadcaaaaakhcaabaaaabaaaaaaegiccaaaadaaaaaaamaaaaaa
agbabaaaaeaaaaaaegacbaaaabaaaaaadcaaaaakhcaabaaaabaaaaaaegiccaaa
adaaaaaaaoaaaaaakgbkbaaaaeaaaaaaegacbaaaabaaaaaabaaaaaahicaabaaa
aaaaaaaaegacbaaaabaaaaaaegacbaaaabaaaaaaeeaaaaaficaabaaaaaaaaaaa
dkaabaaaaaaaaaaadiaaaaahhcaabaaaabaaaaaapgapbaaaaaaaaaaaegacbaaa
abaaaaaadgaaaaafhccabaaaadaaaaaaegacbaaaabaaaaaadcaaaaamhcaabaaa
acaaaaaaegacbaiaebaaaaaaaaaaaaaapgipcaaaacaaaaaaaaaaaaaaegiccaaa
acaaaaaaaaaaaaaaaaaaaaajhccabaaaahaaaaaaegacbaaaaaaaaaaaegiccaia
ebaaaaaaacaaaaaaabaaaaaadgaaaaaficcabaaaadaaaaaaakaabaaaacaaaaaa
diaaaaaibcaabaaaaaaaaaaaakbabaaaabaaaaaaakiacaaaadaaaaaabaaaaaaa
diaaaaaiccaabaaaaaaaaaaaakbabaaaabaaaaaaakiacaaaadaaaaaabbaaaaaa
diaaaaaiecaabaaaaaaaaaaaakbabaaaabaaaaaaakiacaaaadaaaaaabcaaaaaa
diaaaaaibcaabaaaadaaaaaabkbabaaaabaaaaaabkiacaaaadaaaaaabaaaaaaa
diaaaaaiccaabaaaadaaaaaabkbabaaaabaaaaaabkiacaaaadaaaaaabbaaaaaa
diaaaaaiecaabaaaadaaaaaabkbabaaaabaaaaaabkiacaaaadaaaaaabcaaaaaa
aaaaaaahhcaabaaaaaaaaaaaegacbaaaaaaaaaaaegacbaaaadaaaaaadiaaaaai
bcaabaaaadaaaaaackbabaaaabaaaaaackiacaaaadaaaaaabaaaaaaadiaaaaai
ccaabaaaadaaaaaackbabaaaabaaaaaackiacaaaadaaaaaabbaaaaaadiaaaaai
ecaabaaaadaaaaaackbabaaaabaaaaaackiacaaaadaaaaaabcaaaaaaaaaaaaah
hcaabaaaaaaaaaaaegacbaaaaaaaaaaaegacbaaaadaaaaaabaaaaaahicaabaaa
aaaaaaaaegacbaaaaaaaaaaaegacbaaaaaaaaaaaeeaaaaaficaabaaaaaaaaaaa
dkaabaaaaaaaaaaadiaaaaahhcaabaaaaaaaaaaapgapbaaaaaaaaaaaegacbaaa
aaaaaaaadiaaaaahhcaabaaaadaaaaaajgaebaaaabaaaaaacgajbaaaaaaaaaaa
dcaaaaakhcaabaaaabaaaaaajgaebaaaaaaaaaaacgajbaaaabaaaaaaegacbaia
ebaaaaaaadaaaaaadgaaaaafhccabaaaafaaaaaaegacbaaaaaaaaaaadiaaaaah
hccabaaaaeaaaaaaegacbaaaabaaaaaapgbpbaaaaeaaaaaadgaaaaaficcabaaa
aeaaaaaabkaabaaaacaaaaaadgaaaaaficcabaaaafaaaaaackaabaaaacaaaaaa
diaaaaaipcaabaaaaaaaaaaafgbfbaaaaaaaaaaaegiocaaaadaaaaaaanaaaaaa
dcaaaaakpcaabaaaaaaaaaaaegiocaaaadaaaaaaamaaaaaaagbabaaaaaaaaaaa
egaobaaaaaaaaaaadcaaaaakpcaabaaaaaaaaaaaegiocaaaadaaaaaaaoaaaaaa
kgbkbaaaaaaaaaaaegaobaaaaaaaaaaadcaaaaakpcaabaaaaaaaaaaaegiocaaa
adaaaaaaapaaaaaapgbpbaaaaaaaaaaaegaobaaaaaaaaaaadiaaaaaihcaabaaa
abaaaaaafgafbaaaaaaaaaaaegiccaaaaaaaaaaabbaaaaaadcaaaaakhcaabaaa
abaaaaaaegiccaaaaaaaaaaabaaaaaaaagaabaaaaaaaaaaaegacbaaaabaaaaaa
dcaaaaakhcaabaaaaaaaaaaaegiccaaaaaaaaaaabcaaaaaakgakbaaaaaaaaaaa
egacbaaaabaaaaaadcaaaaakhccabaaaagaaaaaaegiccaaaaaaaaaaabdaaaaaa
pgapbaaaaaaaaaaaegacbaaaaaaaaaaadoaaaaab�                                                        $Globals@        _MainTex_ST                 �      _DetailAlbedoMap_ST                 �      _UVSec                 �      _LightMatrix0                      UnityPerCamera�         _WorldSpaceCameraPos                 @      UnityLighting�        _WorldSpaceLightPos0                        _LightPositionRange                       UnityPerDrawP        glstate_matrix_mvp                       _Object2World                �      _World2Object                         $Globals              UnityPerCamera             UnityLighting             UnityPerDraw                                                          