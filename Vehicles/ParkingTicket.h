#include "../Includes.h"
class ParkingTicket
{
    public:
    ParkingTicket(time_t start_time,int floor_id,int spot_id);
    time_t GetStartTime();
    int GetfloorId();
    int GetSpotId();
    private:
     static int ticket_id;
     time_t start_time;
     int floor_id;
     int spot_id;
};