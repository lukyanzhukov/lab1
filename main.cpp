#include "domain/MatrixOperator.h"
#include "presentation/MainPresenter.h"
#include "presentation/MainView.h"

int main() {
    MatrixOperator matrixOperator{};
    MainPresenter presenter(&matrixOperator);
    MainView view(&presenter);
    return 0;
}