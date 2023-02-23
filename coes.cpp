// CPP libraries
#include <cmath>
#include <iostream>
#include <string>

// My libraries
#include "astroconsts.hpp"
#include "coes.hpp"
#include "state_vector.hpp"

using namespace std;

// Constructors (default is from semi_major)
COES::COES(double a_km, double ecc_, double inc_deg, double raan_deg,
           double omega_deg, double theta_deg) {

  semi = a_km;
  ecc = ecc_;
  inc = inc_deg;
  raan = raan_deg;
  omega = omega_deg;
  theta = theta_deg;

  double h2 = semi * EARTH_MU * (1 - ecc);
  h = sqrt(h2);

  T = 2 * PI * pow(semi, (double)1.5) / sqrt(EARTH_MU);
};

COES COES::calc_from_h(double h_km2s, double ecc, double inc_deg,
                       double raan_deg, double omega_deg, double theta_deg) {

  double a = pow(h, (double)2) / (EARTH_MU * (1 - ecc));

  return COES(a, ecc, inc_deg, raan_deg, omega_deg, theta_deg);
};

string COES::print() {
  string msg = "COES:\nh: " + to_string(h) + "\na: " + to_string(semi) +
               "\necc: " + to_string(ecc) + "\ninc: " + to_string(inc) +
               "\nraan: " + to_string(raan) + "\nomega: " + to_string(omega) +
               "\ntheta: " + to_string(theta) + "\n";
  return msg;
}
