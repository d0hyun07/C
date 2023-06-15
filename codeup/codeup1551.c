int f(int N) {
    
    int index = 0;
    for (int i = 0; i <= 100000; i++) {
        if (d[i] == N) {
            index = i;
            break;
        }
        else {
            index = -1;
        }
    }
    return index;
}
