#include "hondurota.h"

Hondurota::Hondurota(double fuel, double odom, double capacity, double mpg):
    m_Fuel(fuel), m_Odometer(odom), m_TankCapacity(capacity), m_MPG(mpg) {
    m_Speed = 0.0;
}

double Hondurota::addFuel(double gal) {
    // gal == 0 fills tank to capacity
    if(gal == 0)
        m_Fuel = m_TankCapacity;
    // Don't fill past capacity
    else if(gal + m_Fuel > m_TankCapacity)
        m_Fuel = m_TankCapacity;
    else
        m_Fuel += gal;

    // Return amount of fuel
    return m_Fuel;
}


double Hondurota::getSpeed() {
    return m_Speed;
}

double Hondurota::getTankCapacity() {
    return m_TankCapacity;
}

double Hondurota::getMPG() {
    return m_MPG;
}

double Hondurota::getFuel() {
    return m_Fuel;
}

double Hondurota::getOdometer() {
    return m_Odometer;
}

/**
 * @brief Hondurota::drive
 * @param speed   - speed in mph
 * @param minutes - minutes to drive for
 * @return double - returns amount of fuel left
 */
double Hondurota::drive(double speed, int minutes) {
    double milesTraveled = minutes * (speed/60);
    double fuelUsed      = milesTraveled / m_MPG;

    if(fuelUsed > m_Fuel) {
        // How far can they go at this speed?
        double subFuelUsed = fuelUsed - (fuelUsed - m_Fuel);
        double subMilesTraveled = m_MPG * subFuelUsed;

        m_Odometer += subMilesTraveled;
        m_Fuel      = 0;
    } else {
        m_Odometer += milesTraveled;
        m_Fuel      = m_Fuel - fuelUsed;
    }

    return m_Fuel;
}
