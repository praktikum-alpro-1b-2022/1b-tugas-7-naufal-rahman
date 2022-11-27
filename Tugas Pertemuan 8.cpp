#include <iostream>
using namespace std;

int main(){
    int bil[2][2];
    int num[2][2];
    int kal[2][2];
    int jum[2][2];
    int i, j;
    cout << "Masukkan 4 buah bilangan untuk matriks A!" << endl;

        for (i=0; i<2; i++){
            for (int j =0; j<2; j++){
                cout << "[" << i << "][" << j << "] = ";
                cin >> bil[i][j];
            }
        }

    cout << "Masukkan 4 buah bilangan untuk matriks B!" << endl;

        for (i=0; i<2; i++){
            for (int j=0; j<2; j++){
                cout << "[" << i << "][" << j << "] = ";
                cin >> num[i][j];
            }
        }

    cout << "\nMatriks A= " << endl;
        for (i=0; i<2; i++){
            for (j=0; j<2; j++){
                cout << " " << bil[i][j];
                    if (j==1){
                        cout << endl;
                }
            }
        }

    cout << "\nMatriks B= " << endl;
        for (i=0; i<2; i++){
            for (j=0; j<2; j++){
                cout << " " << num[i][j];
                    if (j==1){
                        cout << endl;
                }
            }
        }

    cout << "\nPenjumlahan matriks A dan matriks B" << endl;
    cout << " A + B = " << endl;
        for (i=0; i<2; i++){
            for (j=0; j<2; j++){
                jum[i][j]=bil[i][j]+num[i][j];
                cout << jum[i][j] << " ";
                    if (j==1){
                        cout << endl;
                }
            }
        }
        /*
        perkalian matriks 2x2
        X= |a b|   Y=|e f|
           |c d|     |g h|

        X*Y= |a*e+b*g   a*f+b*h|
             |c*e+d*g   c*f+d*h|
        */
    cout << "\nPerkalian matriks A dan matriks B" << endl;
    cout << " A * B = " << endl;
        for (j=0; j<2; j++){
            if (j==0){
                for (i=0; i<2; i++){
                    kal[i][j]=(bil[i][0]*num[0][j])+(bil[i][1]*num[1][j]);
                }
            }
            if (j==1){
                for (i=0; i<2; i++){
                    kal[i][j]=(bil[i][0]*num[0][j])+(bil[i][1]*num[1][j]);
                }
            }
        }
        for (i=0; i<2; i++){
            for (j=0; j<2; j++){
                cout << kal[i][j] << " ";
                    if (j==1){
                        cout << endl;
                }
            }
        }

    cout << "\nTranspose matriks A: " << endl;
        for (j=0; j<2; j++){
            if(j==0){
                for (i=0; i<2; i++){
                    cout << bil[i][j] << " ";
                        if(i==1){
                            cout << endl;
                    }
                }
            }
            if(j==1){
                for (i=0; i<2; i++){
                    cout << bil[i][j] << " ";
                        if(i==1){
                            cout << endl;
                    }
                }
            }
        }

    cout << "\nTranspose matriks B: " << endl;
        for (j=0; j<2; j++){
            if(j==0){
                for (i=0; i<2; i++){
                    cout << num[i][j] << " ";
                        if(i==1){
                            cout << endl;
                    }
                }
            }
            if(j==1){
               for (i=0; i<2; i++){
                    cout << num[i][j] << " ";
                        if(i==1){
                            cout << endl;
                    }
                }
            }
        }

    return 0;
}
