#ifndef LAB1_MAINVIEW_H
#define LAB1_MAINVIEW_H

#include "MainPresenter.h"

class MainView {
private:
    MainPresenter *presenter;
    int matrixIndex{};

    void inputMatrixValues(int index, double **values);

    void startMenu();

    void printResult();

public:

    explicit MainView(MainPresenter *presenter);

    ~MainView();
};

#endif
