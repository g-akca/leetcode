class ParkingSystem {
private:
    int big_max;
    int medium_max;
    int small_max;
    int big_current;
    int medium_current;
    int small_current;
public:
    ParkingSystem(int big, int medium, int small) {
        big_max = big, medium_max = medium, small_max = small;
        big_current = 0, medium_current = 0, small_current = 0;
    }
    
    bool addCar(int carType) {
        if (carType == 1 && big_max > big_current) {
            big_current++;
            return true;
        }
        if (carType == 2 && medium_max > medium_current) {
            medium_current++;
            return true;
        }
        if (carType == 3 && small_max > small_current) {
            small_current++;
            return true;
        }
        else return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */