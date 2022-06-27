
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    //100
    vector<int> f(1000, 0);
    f[2] = 1;
    for (int i = 2; i <= 15; i++) {
        if (i + 1 <= 16) f[i + 1] += f[i];
        if (i * 3 <= 16)f[i * 3] += f[i];
        if (i * 4 <= 16)f[i * 4] += f[i];
    }
    for (int i = 16; i <= 60; i++) {
        f[21] = 0;
        f[i + 1] += f[i];
        f[i * 3] += f[i];
        f[i * 4] += f[i];
    }
    cout << f[60];
}















//int main()
//{
//    vector <int> f(1000, 0);
//    f[3] = 1;
//    for (int i = 3; i <= 17; i++) {
//        f[12] = 0;
//        if (i + 1 <= 18) {
//            f[i + 1] += f[i];
//        }
//        if (i * 2 <= 18) {
//            f[i * 2] += f[i];
//        }
//    }
//    for (int i = 18; i <= 55; i++) {
//        f[i + 1] += f[i];
//        f[i * 2] += f[i];
//    }
//    cout << f[55];
//}