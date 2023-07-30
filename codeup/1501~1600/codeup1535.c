int f(){
    int i,temp = 0;
    for(i = 0; i<n; i++){
        if(d[i]>temp){temp = d[i];}
    }
    for(i = 0; i<n; i++){
        if(d[i] == temp){
            return i+1;
            break;
        }
    }
}
