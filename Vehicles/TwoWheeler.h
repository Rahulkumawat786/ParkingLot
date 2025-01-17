#include "Vehicle_t.h"
class TwoWheeler : public Vehicle_t
{
    public:
    TwoWheeler(string number_plate);
    virtual const string GetType()
    {
        return "TWO_WHEELER";
    }


};