#include <iostream>
using namespace std;

int main()
{
    int op;

    cout << "1. Caminho 1" << endl;
    cout << "2. Caminho 2" << endl;
    cout << "3. Caminho 3" << endl;
    cout << "4. Caminho 4" << endl;
    cout << "5. caminho 5" <<endl;
    cout << "Digite sua opção: ";
    cin >> op;

    switch(op)
    {
        case 1:
            cout << "Caminho errado"<<endl;
            break;
            
        case 2:
            cout << "Caminho errado"<<endl;
            break;
            
        case 3:
            cout << "Caminho errado"<<endl;
            break;
            
        case 4:
            cout << "Caminho errado"<<endl;
            break;
            
        case 5:
            cout << "Caminho certo"<<endl;
            break;
    }
        
        return 0;
}
