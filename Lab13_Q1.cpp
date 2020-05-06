#include <fstream>

using namespace std;

int main() {
    ifstream fin;
    ofstream fout;
    fin.open("lab13.txt");
    fout.open("lab13_output.txt");
    if (fin.fail()) exit(1);
    int num;
    fin >> num;
    fin.ignore(100, 'L');
    for (int i = 0; i < num; ++i) {
        char content[100];
        fin.getline(content, 100);
        fout << "Student " << i + 1 << ":\nName: ";
        int j;
        for (j = 0; content[j] != ','; ++j) {
            fout << content[j];
        }
        fout << "\nStudent ID: ";
        for (j += 2; content[j] != ' '; ++j) {
            fout << content[j];
        }
        fout << "\nTel: ";
        for (j++; content[j] != '\0'; ++j) {
            fout << content[j];
        }
        fout << "\n\n";
    }
    fin.close();
    fout.close();
    return 0;
}