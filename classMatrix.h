#ifndef CLASSMATRIX_H
#define CLASSMATRIX_H


#include <iostream>
#include <string>


class Matrix_Exception{
public:
    Matrix_Exception(const std::string message) : msg(message) {
        std::cerr << msg << std::endl;
    }
private:
    std::string msg;
};


class Matrix{
private:
    int** arr;
    int rows;
    int cols;
public:
    int N() const{ return rows; }

    int K() const{ return cols; }

    void setRows(int rows) { this -> rows = rows; }

    void setCols(int cols) { this -> cols = cols; }

    int getMatrix(int i, int j) const {
        if(i < 0 || j < 0 || i >= rows || j >= cols){
            throw Matrix_Exception("Matrix index out of range\n");
        }
    return arr[i][j];
    }

    int setMatrix(int i, int j, int value){
        if(i < 0 || j < 0 || i >= rows || j >= cols){
            throw Matrix_Exception("Matrix index out of range\n");
            }
        arr[i][j] = value;
    }

    Matrix(int rows, int cols);
    ~Matrix();
};

#endif // CLASSMATRIX_H
