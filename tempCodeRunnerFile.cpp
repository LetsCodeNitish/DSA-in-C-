int factorial(int n)
{
	int fact=1;
	if(n==1||n=0){
		return 1;
	}
	while(n>0){
		fact= fact*(n);
		n--;
	}
	return fact;

}

int factorialRecusive(int n){
	if(n==0||n==1){
		return 1;
	}
	int fact =1;
	fact = fact*factorialRecusive(n-1);
	return fact;
}

