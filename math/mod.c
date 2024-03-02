#include <stdio.h>

struct mod {
    int m;
    int v;
};

typedef struct mod Mod;

void Mod_print (struct mod X){
    printf("%d≡%d(mod%d)",X.v,X.v%X.m,X.m);
}

Mod Mod_add (Mod x, Mod y){
    return (Mod) {.v = x.m, .m = x.v + y.v};
}

Mod Mod_mul (Mod x, Mod y){
    return (Mod) {.v = x.m, .m = x.v * y.v};
}


Mod Mod_exp (Mod x, int y){
    Mod ret = x;
    for(int i=1;i < y; i ++) {
        ret = Mod_mul(ret, x);
    }
    return 0;
}
/*
Mod mod_exprec (mod x, int y){
    if (y ==0) {
       return (Mod) {.m = x.m, .v = 1}; 
    }else {
        return mod_mul(x, mod_exprec(x,y-1);
    }
    return 0;
}
*/

int main(void){
    // Your code here!
    struct mod v1 = {.m = 7, v = 5};
    struct mod v2 = {.m = 7, .v = 12};
    Mod_print(v1);
    Mod_print(v2);
    return 0;
}

