#include "QInt.h"

int main() {
    QInt *qi=makeQInt(100);
    print(qi);

    enq(qi, 1);
    enq(qi, 2);
    enq(qi, 3);
    enq(qi, 4);
    print(qi);

    deq(qi);
    deq(qi);
    print(qi);

    enq(qi, 5);
    enq(qi, 6);
    print(qi);

    deq(qi);
    deq(qi);
    deq(qi);
    print(qi);

    deq(qi);
    deq(qi);
    print(qi);

    free(qi);
}