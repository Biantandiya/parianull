if (enclosesNot(encloseBasis2(B[i], B[j]), p) 
    && enclosesNot(encloseBasis2(B[i], p), B[j]) 
    && enclosesNot(encloseBasis2(B[j], p), B[i]) 
    && enclosesWeakAll(encloseBasis3(B[i], B[j], p), B)) {
