#include "classMatrix.h"

int main() {
    Matrix matrix1 = Matrix(4, 5);
        matrix1.setRows(4);
        matrix1.setCols(5);

        Matrix matrix2 = Matrix(8,8);
        matrix2.setRows(8);
        matrix2.setCols(8);

        for(int i = 0; i < matrix1.N(); i++) {
            for(int j = 0; j < matrix1.K(); j++) {
                if(j == 0 || j == matrix1.K()-1) {
                    matrix1.setMatrix(i,j,1);
                }
            }
        }

        for(int i = 0; i < matrix1.N(); i++) {
            for(int j = 0; j < matrix1.K(); j++) {
                std::cout << matrix1.getMatrix(i,j)<<" ";
            }
            std::cout << std::endl;
        }

        std::cout<<std::endl;
        for(int i = 0; i < matrix2.N(); i++) {
            for(int j = 0; j < matrix2.K(); j++) {
                if(j == 0 || j == matrix2.N()-1) {
                    matrix2.setMatrix(i,j,1);
                }
            }
        }

        for(int i = 0; i < matrix2.N(); i++) {
            for(int j = 0; j < matrix2.K(); j++) {
                std::cout << matrix2.getMatrix(i,j)<<" ";
            }
            std::cout << std::endl;
        }

      std::cout<< "\n\n";

      try {
          std::cout << matrix1.getMatrix(1,2);
          matrix1.setMatrix(-1,2,3);
      } catch(const Matrix_Exception& ex) { }

    return 0;
}
