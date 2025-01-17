#include "Vehicle_t.h"
class FourWheeler : public Vehicle_t
{
    public:
    FourWheeler(string number_plate);
    virtual const string GetType(){
        return "FOUR_WHEELER";
    }
};