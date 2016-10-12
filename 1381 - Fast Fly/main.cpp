#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int iCasos;
    float fDist, fVel1, fVel2, fVelM, fDistM, fTime;
    cin >> iCasos;
    for (int i = 0; i < iCasos; i++){
        cin >> fDist >> fVel1 >> fVel2 >> fVelM;
        fTime = fDist / (fVel1 + fVel2);
        fDistM = fVelM * fTime;
        cout << fixed << setprecision(2) << fDistM << endl;
    }
    return 0;
}
