long double pow2(long double a,int exp) {
	if(exp == 0) return 1;
	else if(exp > 1){
		return pow2(a,exp - 1) * a;	
	}
	return a;
}
long int fak(int n) {
  if (n == 0)
    return 1;
  else
    return (n * fak(n-1));
}
double t_sincos(long double x, int n, int start){
	long double sinx = 0.0;
	int nPeriod = start;
	int vz = 1;	
	while(n != 0){
		sinx += (vz * (pow2(x,nPeriod) / fak(nPeriod)));
		vz *= -1;
		nPeriod += 2;
		n--;
	}
	return sinx;
}
double tsin(long double x, int n){
	return t_sincos(x,n,1);
}
double tcos(long double x, int n){
	return t_sincos(x,n,0);
}