
void f(int N){
	int index = 0,i;
	for(i=1;i<=N;i++){
		if(N%i==0) index++;
	}
	if(index==2) printf("prime");
	else printf("composite");
	
}
