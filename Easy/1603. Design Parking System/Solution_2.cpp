class ParkingSystem {
private:
    int big_space;
    int medium_space;
    int small_space;
public:
    ParkingSystem(int big, int medium, int small) {
        big_space = big, medium_space = medium, small_space = small;
    }
    
    bool addCar(int carType) {
        if (carType == 1 && big_space > 0) {
            big_space--;
            return true;
        }
        else if (carType == 2 && medium_space > 0) {
            medium_space--;
            return true;
        }
        else if (carType == 3 && small_space > 0) {
            small_space--;
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