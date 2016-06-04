static const double cos_c[10] = {
	-0.00000000000000015600, // 1/18!
	 0.00000000000004779477, // 1/16!
	-0.00000000001147074559, // 1/14!
	 0.00000000208767569878, // 1/12!
	-0.00000027557319223985, // 1/10!
	 0.00002480158730158730, // 1/8!
	-0.00138888888888888888, // 1/6!
	 0.04166666666666666666, // 1/4!
	-0.50000000000000000000, // 1/2!
	 1.0};
static const double sin_c[10] = {
	-0.00000000000000000822, // 1/19! 
	 0.00000000000000281145, // 1/17!
	-0.00000000000076471637, // 1/15!
	 0.00000000016059043836, // 1/13!
	-0.00000002505210838544, // 1/11!
	 0.00000275573192239858, // 1/9!	   
	-0.00019841269841269841, // 1/7!	  
	 0.00833333333333333333, // 1/5!
	-0.16666666666666666666, // 1/3!
	 1.0};
static const double pi1 = 3294198.0 / 2097152.0; // pi halbe
static const double pi2  = 3.139164786504813217e-7; // pi halbe nachkommastelle
static const double pi3 = 0.63661977236758134308; // 1/(pi/2) -> Genauer als durch pi halbe
static const double pi4 = 0.78539800643920898437; // pi Viertel


double _sincos(double x, const double *coeff, int n){
	double y;
	/*
	- Taylor-Reihe als Schleife
	- wir beginnen mit dem letzten glied 
	*/
	for (y = *coeff; 0 <= --n;)
		y = y * x + *++coeff;
	return y;
}


double x_shifted(double x, int isCos){
	double g;
	g = x * pi3; // Anzahl pi halbe in x
	
	if(0 < g) 	g = (long)(g + 0.5); // Aufrunden wenn wert positiv
	else 		g = (long)(g - 0.5); // Abrunden wenn wert negativ
	
	/*
	- Verschieben großen x-Wert nahe der Nullstelle 
	- Im Bereich -pi/4 bis +pi/4 (-0.78 bis 0.78)
	- Jedoch mit mehr Genauigkeit durch mehr nachkommastellen
	*/
	g = (x - g * pi1) - (g * pi2);
	printf("%.16f\n", g);
	
	/*
	Wenn Sinux x ziwischen -0,78 und 0,78 dann verwende sinus Coeffizienten
	ansonsten cosinus Coeffizienten
	*/
	if(!isCos){
		if(x > -pi4 && x < pi4 )
			g *=_sincos(g*g, sin_c, 9);
		else					
			g = _sincos(g*g, cos_c, 9);
	}else{
		if(x > -pi4 && x < pi4 )
			g =_sincos(g*g, cos_c, 9);
		else					
			g *=_sincos(g*g, sin_c, 9);
	}
	return g;
}

double tsin(double x){
	double g = x_shifted(x,0);
	if(x < -pi4) g = g * -1;
	return g;
}

double tcos(double x){
	double g = x_shifted(x,1);
	if(x > pi4) g = g * -1;
	return g;
}