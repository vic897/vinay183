#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("GeneratedProgram.cpp");

    if (!fout) {
        cout << "Error creating file!";
        return 1;
    }

    fout << "#include <iostream>\n";
    fout << "using namespace std;\n\n";
    fout << "int main() {\n";
    fout << "    cout << \"Hello from the generated program!\" << endl;\n";
    fout << "    return 0;\n";
    fout << "}\n";

    fout.close();

    cout << "Program successfully written to 'GeneratedProgram.cpp'\n";
    return 0;
}
