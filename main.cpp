#include <iostream>
using namespace std;

class Array {
private:
    int array[10];

public:
    //��������Ԫ��
    void set_value() {
        cout << "Enter 10 integers: ";
        for (int i = 0; i < 10; i++) {
            cin >> array[i];
        }
    }
    //��ӡÿһ��Ԫ��
    void show_value() {
        cout << "The array values are: ";
        for (int i = 0; i < 10; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
    //��ȡ���ֵ
    int get_max() {
        int max = array[0];
        for (int i = 1; i < 10; i++) {
            if (array[i] > max) {
                max = array[i];
            }
        }
        return max;
    }
    //��ȡ��Сֵ
    int get_min() {
        int min = array[0];
        for (int i = 1; i < 10; i++) {
            if (array[i] < min) {
                min = array[i];
            }
        }
        return min;
    }
    //��ӡ���ֵ
    void show_max() {
        cout << "The maximum value is: " << get_max() << endl;
    }
    //��ӡ��Сֵ
     void show_min() {
        cout << "The minimum value is: " << get_min() << endl;
    }
    //��С�������򣬲����
    void show_in_order() {
        int temp;
        for (int i = 0; i < 9; i++) {
            for (int j = i + 1; j < 10; j++) {
                if (array[i] > array[j]) {//ǰ�Ⱥ���򽻻�
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
        cout << "The array values in order are: ";
        for (int i = 0; i < 10; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};


int main()
{
    Array rannum;
    rannum.set_value();
    rannum.show_value();
    rannum.show_max();
    rannum.show_min();
    rannum.show_in_order();
    system("pause");
    return 0;
}
