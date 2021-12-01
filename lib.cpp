#include "lib.h"

bool numerip (int n, int a){
    if (n<0){
        return false;
    }else if (n==1){
        return true;
    }else if (n%a==0){
        return false;
    }
    numerip (n, --a);
}

