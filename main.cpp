#include <iostream>

using namespace std;

int main() {
    int var = 55;

    int *ptrVar = &var;
    cout<<"Adresa je: "<<ptrVar<<endl;
    cout<<"Vrijednost u memoriji: "<<*ptrVar<<endl;

    int &refVar = var;
    cout<<"Vrijednost preko reference: "<<refVar<<endl;

    //promjena vrijednosti preko pointera
    *ptrVar = 44; //kada mijenjamo vrijednost preko pointera moramo da koristimo zvjezdicu ispred varijable
    cout<<"Adresa je: "<<ptrVar<<endl;
    cout<<"Vrijednost u memoriji: "<<*ptrVar<<endl;

    //promjena vrijednosti preko reference
    refVar = 33;
    cout<<"Vrijednost preko reference: "<<refVar<<endl;

    return 0;
}
