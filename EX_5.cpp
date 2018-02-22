# include <stdio.h>




int main()
{
	
	int V_int[1], *P_int, I_variavel;
	float V_float[1], *P_float, F_variavel; 
	
	V_int[0]=10;
	V_float[0]=10;
	
	P_int = &V_int[0];
	P_float = &V_float[0];
	
	printf("%i\n", V_int[0]);
	printf("%f\n", V_float[0]);
	
	printf("%p\n",P_int[0]);
	printf("%p\n", P_float[0]);
	
	P_int = & I_variavel;
	P_float = &F_variavel;
	
	printf("%p\n",P_int[0]);
	printf("%p\n", P_float[0]);
	
	
	
}
