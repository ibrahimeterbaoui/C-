#include <iostream>
using namespace std;
class Test{
public:
    static int tableau[] ;
public :
    static int division(int indice, int diviseur){
        if ( diviseur==0 )
        {
            throw "Attempted to divide by zero!!";//si l'utilisatteur taper 0 il  va afficher  ce message}return tableau[indice]/diviseur;
}};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main () {
    int x, y;
    cout<<"saise indice a divisé "<<endl;
    cin >> x ;
    cout <<"Entrez le diviseur: "<< endl;
    cin >> y ;
    cout <<"Le résultat de la division est: "<< endl;
    try{
        cout <<Test::division(x,y) << endl;
    }
    catch (const char* e) {
        cerr << e << endl;
    }
    return 0;
}