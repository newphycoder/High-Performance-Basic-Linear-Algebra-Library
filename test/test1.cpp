#include "hipala_matrix.h"
//#include "hipala_vector.h"
#include <iostream>

using namespace std;

int main() {
    Hipala_Matrix_Type<int> a(2, 2);
    Hipala_Matrix_Type<int> b(2, 2);
    a.modify(0, 0, 1);
    a.modify(0, 1, 2);
    a.modify(1, 0, 3);
    a.modify(1, 1, 4);
    // input_int_mat(a);

    b = input_int_mat(2, 2);

    // for (int i = 0; i < b.show_row(); ++i)
    //     for (int j = 0; j < b.show_col(); ++j) {
    //         int tmp;
    //         std::cin >> tmp;
    //         b.modify(i, j, tmp);
    //     }
    cout << "a = \n";
    output_int_mat(a);
    cout << "\n\nb = \n";

    output_int_mat(b);

    //output_int_mat(b);
    Hipala_Matrix_Type<int> c(2, 2);
    cout << "\n\nc = \n";
    c = a + b;
    c.output_mat();
}