#ifndef HONDUROTA_H
#define HONDUROTA_H

class Hondurota
{
public:
    Hondurota(double fuel = 0, double odom = 0, double capacity = 0, double mpg = 0);
    double addFuel(double gal);
    double getSpeed();
    double getTankCapacity();
    double getMPG();
    double getFuel();
    double getOdometer();
    double drive(double speed, int minutes);
    double highwayDrive(double distance, double speedLimit);

private:
    double m_Fuel;
    double m_Odometer;
    double m_TankCapacity;
    double m_MPG;
    double m_Speed;
};

#endif // HONDUROTA_H
