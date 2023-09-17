#include <iostream>

using namespace std;

// private, protected, public


struct TV {
    private: 
        bool powerOn;
        int channel;
        int volume;
        
    public:
        void on() {
            powerOn = true;
            cout << "TV를 켰습니다." << endl;
        }
        
        void off() {
            powerOn = false;
            cout <<"TV를 껐습니다." << endl;
        }
        void setVolume(int vol) {
            if (vol >= 0 && vol <= 100) {
                volume = vol;
            }
        }
};

int main() {
    TV lg;
    lg.On();
    lg.channel = 10;
    lg.setVolume(50);
}

