#ifndef COES_H
#define COES_H
#include <iostream>
#include <string>

class COES {
public:
  double semi;
  double h;
  double ecc;
  double inc;
  double raan;
  double omega;
  double theta;
  double T;

  COES(double a_km, double ecc, double inc_deg, double raan_deg,
       double omega_deg, double theta_deg);

  COES calc_from_h(double h_km2s, double ecc, double inc_deg, double raan_deg,
                   double omega_deg, double theta_deg);

  std::string print();
};

#endif
