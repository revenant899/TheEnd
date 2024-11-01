//#include <iostream>
//using namespace std;
//
//void fillMatrix(int** matrix, int rows, int cols) {
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            matrix[i][j] = i * cols + j + 1;
//        }
//    }
//}
//
//void printMatrix(int** matrix, int rows, int cols) {
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int** transposeMatrix(int** matrix, int rows, int cols) {
//    int** transposed = new int* [cols];
//    for (int i = 0; i < cols; ++i) {
//        transposed[i] = new int[rows];
//    }
//
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            transposed[j][i] = matrix[i][j];
//        }
//    }
//
//    return transposed;
//}
//
//int main() {
//    int rows = 3;
//    int cols = 4;
//
//    int** matrix = new int* [rows];
//    for (int i = 0; i < rows; ++i) {
//        matrix[i] = new int[cols];
//    }
//
//    fillMatrix(matrix, rows, cols);
//    cout << "��������� �������:" << endl;
//    printMatrix(matrix, rows, cols);
//
//    int** transposed = transposeMatrix(matrix, rows, cols);
//    cout << "������������� �������:" << endl;
//    printMatrix(transposed, cols, rows);
//
//    for (int i = 0; i < rows; ++i) {
//        delete[] matrix[i];
//    }
//    delete[] matrix;
//
//    for (int i = 0; i < cols; ++i) {
//        delete[] transposed[i];
//    }
//    delete[] transposed;
//
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class PhoneBook {
//private:
//    string** contacts;
//    int size;
//
//public:
//    PhoneBook(int n) {
//        size = n;
//        contacts = new string * [2];
//        for (int i = 0; i < 2; ++i) {
//            contacts[i] = new string[size];
//        }
//    }
//
//    ~PhoneBook() {
//        for (int i = 0; i < 2; ++i) {
//            delete[] contacts[i];
//        }
//        delete[] contacts;
//    }
//
//    void inputContact(int index) {
//        cout << "������ ��'� ��� �������� " << index + 1 << ": ";
//        cin >> contacts[0][index];
//        cout << "������ ����� �������� ��� �������� " << index + 1 << ": ";
//        cin >> contacts[1][index];
//    }
//
//    void updateContact(int index) {
//        cout << "������ ���� ��'� ��� �������� " << index + 1 << ": ";
//        cin >> contacts[0][index];
//        cout << "������ ����� ����� �������� ��� �������� " << index + 1 << ": ";
//        cin >> contacts[1][index];
//    }
//
//    void searchByName(const string& name) {
//        for (int i = 0; i < size; ++i) {
//            if (contacts[0][i] == name) {
//                cout << "��������: " << contacts[0][i] << " - " << contacts[1][i] << endl;
//                return;
//            }
//        }
//        cout << "������� �� ��������" << endl;
//    }
//
//    void searchByPhone(const string& phone) {
//        for (int i = 0; i < size; ++i) {
//            if (contacts[1][i] == phone) {
//                cout << "��������: " << contacts[0][i] << " - " << contacts[1][i] << endl;
//                return;
//            }
//        }
//        cout << "������� �� ��������" << endl;
//    }
//};
//
//int main() {
//    int n;
//    cout << "������ ������� ��������: ";
//    cin >> n;
//
//    PhoneBook phoneBook(n);
//
//    for (int i = 0; i < n; ++i) {
//        phoneBook.inputContact(i);
//    }
//
//    string name, phone;
//    cout << "������ ��'� ��� ������: ";
//    cin >> name;
//    phoneBook.searchByName(name);
//
//    cout << "������ ����� �������� ��� ������: ";
//    cin >> phone;
//    phoneBook.searchByPhone(phone);
//
//    int index;
//    cout << "������ ����� �������� ��� ���� (0-" << n - 1 << "): ";
//    cin >> index;
//    if (index >= 0 && index < n) {
//        phoneBook.updateContact(index);
//    }
//    else {
//        cout << "������� ����� ��������." << endl;
//    }
//
//    return 0;
//}