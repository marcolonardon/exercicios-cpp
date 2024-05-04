#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float n1, n2, n3, n4;
    float exame;
    int p1 = 2, p2 = 3, p3 = 4, p4 = 1;
    int peso = p1 + p2 + p3 + p4;
    float media = 0;

    cin >> n1 >> n2 >> n3 >> n4;

    media = ((p1 * n1) + (p2 * n2) + (p3 * n3) + (p4 * n4)) / peso * 1.0;

    cout << fixed << setprecision(1);
    cout << "Media: " << media << endl;

    if(media >= 7.0)
        cout << "Aluno aprovado.\n";
    else if(media >= 5){
        cout << "Aluno em exame.\n";
            
        cin >> exame;

        cout << "Nota do exame: " << exame << endl;

        media = (media + exame) / 2;

        if(media >= 5.0)
            cout << "Aluno aprovado.\n";
        else
            cout << "Aluno reprovado.\n";

        cout << "Media final: " << media << endl;
    } 
    else
        cout << "Aluno reprovado.\n";

    return 0;
}




//2.0 4.0 7.5 8.0 == 5.4
//6.4

//2.0 6.5 4.0 9.0 == 4.8
//9.0 4.0 8.5 9.0 == 7.3