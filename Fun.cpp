// Funny project by Vitulin Ivan 2022

#include "FunH.h"

int main() {
    int code = 984365707;
    time_t t1, t2;
    double dt;
    t1 = time(NULL);
    for (int i = 0; i <= 999999999; i++) {
        int vcode = i;
        if (vcode == code) {
            printf("code is %d \n", vcode);
        }
    }
    t2 = time(NULL);
    dt = difftime(t2, t1);
    cout << "time action: " << dt << "\n";
    funcHW();
    return 0;
}
