#include<iostream>
using namespace std;

void change(double list[10]) {
    bool changed = true;
    do {
        changed = false;
        for (int i = 0; i < 9; i++) {
            if (list[i] > list[i + 1]) {
                double temp = list[i];
                list[i] = list[i + 1];
                list[i + 1] = temp;
                changed = true;
            }
        }
    } while (changed == true);
}

int main() {
    double B[10];

    cout << "请输入十个数" << "\n";
    for (int j = 0; j < 10; j++)
        cin >> B[j];

    change(B);

    cout << "排序后的数组：" << endl;
    for (int n = 0; n < 10; n++)
        cout << B[n] << " ";

    return 0;
}