#include <iostream>
using namespace std;

int main() {

    int row = 6, col = 5;
//     5 6
// 1 5 7 9 10 11
// 6 10 12 13 20 21
// 9 25 29 30 32 41
// 15 55 59 63 68 70
// 40 70 79 81 95 105
    int arr[row][col] = {{1, 5, 7, 9, 10}, {6, 10, 12, 13, 20}, {9 ,25, 29, 30, 32}, {15 ,55, 59, 63, 68}, {40, 70, 79, 81, 95}, {40, 70, 79, 81, 95}};

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){

            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
        cout<<endl;
    }
    cout<<endl;

    int transpose[col][row];

    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){

            transpose[i][j] = arr[j][i];
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;

    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){

            cout<<transpose[i][j]<<"\t";
        }
        cout<<endl;
        cout<<endl;
    }


    return 0;
}
