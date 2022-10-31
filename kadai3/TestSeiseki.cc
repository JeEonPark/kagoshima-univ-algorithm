#include "Seiseki.h"

int main() {
    Seiseki *s[3];
    s[0]=makeSeiseki("StudentA", 78, 55, 80, 88);
    s[1]=makeSeiseki("StudentB", 90, 80, 85, 87);
    s[2]=makeSeiseki("StudentC", 40, 62, 72, 21);

    for(int i=0; i<3; i++) {
        print(s[i]);
    }

    for(int i=0; i<3; i++) {
        free(s[i]);
    }
}