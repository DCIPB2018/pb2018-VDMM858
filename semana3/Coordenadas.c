/* Este programa convierte coordenadas cartesianas (x,y,z) a coordenadas esféricas (r, θ, φ)
Programa creado el 21 de Agosto de 2018 */

#include<stdio.h>
#include<math.h>

int main()
{

float x,y,z,r,o,p,o1,p1;
float x1,y1,z1,R,O,P;

printf("Ingrese una coordenada X:\n");
scanf("%f",&x);
printf("Ingrese una coordenada Y:\n");
scanf("%f",&y);
printf("Ingrese una coordenada Z:\n");
scanf("%f",&z);

r=sqrt((x*x)+(y*y)+(z*z));
o=acos(z/r);
p=atan(y/x);
o1=o*57.296;
p1=p*57.296;

printf("\n El valor para r es:%f",r);
printf("\n El valor para θ en grados es:%f",o1);
printf("\n El valor para φ en grados es:%f",p1);

/* Ahora pasaremos de coordenadas esféricas a cartesianas */

printf(";\n");
printf("Ingrese una coordenada r:\n");
scanf("%f",R);
printf("Ingrese una coordenada θ:\n");
scanf("%f",O);
printf("Ingrese una coordenada φ:\n");
scanf("%f",P);

x1=R*sin(O)*cos(P);
y1=R*sin(O)*sin(P);
z1=R*cos(O);

printf("\n El valor de X es:%f",x1);
printf("\n El valor de Y es:%f",y1);
printf("\n El valor de Z es:%f",z1);

return 0;
}

