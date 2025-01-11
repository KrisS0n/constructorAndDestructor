#include "classMatrix.h"

Matrix::Matrix(int r, int c): rows(r), cols(c){
    arr = new int*[rows];
    for(int i=0; i<rows; i++){
        arr[i] = new int[cols];
        for(int j=0; j<cols; j++){
            arr[i][j] = 0;
        }
    }
}

Matrix::~Matrix(){
    for(int i=0; i<rows; i++){
        delete[] arr[i];
    }
    delete[] arr;
    arr = nullptr;
    rows = 0;
    cols = 0;
}
