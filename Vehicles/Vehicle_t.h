#include "../Includes.h"
#include "ParkingTicket.h"
class Vehicle_t
{
  public:
    Vehicle_t(string number_plate,int price);
    string GetNumberPlate();
    void SetParkingTicket(shared_ptr<ParkingTicket> ticket); 
    shared_ptr<ParkingTicket> GetParkingTicket();
    virtual const string GetType() = 0;
    int GetPrice();
    void SetPrice(int price);

  protected:
    string number_plate;
    int parking_price;
    shared_ptr<ParkingTicket> ticket;

};