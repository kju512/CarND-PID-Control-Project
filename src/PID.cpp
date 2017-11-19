#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    this->Kp=Kp;
    this->Ki=Ki;
    this->Kd=Kd;

    this->p_error_prev = 0;
    this->p_error = 0;
    this->i_error = 0;
    this->d_error = 0;
    this->first=true;
}

void PID::UpdateError(double cte) {
    p_error = cte;
    d_error = cte-p_error_prev;
    i_error += cte;
    p_error_prev =cte;
}

double PID::TotalError() {
    return (-Kp *p_error-Ki *i_error-Kd *d_error);
}

