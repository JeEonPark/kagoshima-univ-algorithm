#include "Seiseki.h"

int main() {
    Seiseki **s = (Seiseki**)malloc(3*sizeof(Seiseki*));
    s[0] = (Seiseki*)malloc(sizeof(Seiseki));
    s[1] = (Seiseki*)malloc(sizeof(Seiseki));
    s[2] = (Seiseki*)malloc(sizeof(Seiseki));
    

    s[0]=makeSeiseki("StudentA", 78, 55, 80, 88);
    s[1]=makeSeiseki("StudentB", 90, 80, 85, 87);
    s[2]=makeSeiseki("StudentC", 40, 62, 72, 21);

    for(int i=0; i<3; i++) {
        print(s[i]);
    }

    for(int i=0; i<3; i++) {
        free(s[i]);
    }
    
    free(s);

}