#include <iostream>
#include <vector>
using namespace std;



class Ifeatures {
public:
    virtual void update(string state) = 0;
};

class Smartdoor {
public:
    virtual void open() = 0;
    virtual void close() = 0;
};

class SmartdoorImpl : public Smartdoor {
private:
    
    vector<Ifeatures*> features;
    string state;
   
public:
    
    void attach(Ifeatures* feature) {
        features.push_back(feature);
    }

    void notify() {
        for (Ifeatures* feature : features) {
            feature->update(state);
        }
    }

    void open() {
        state = "open";
        cout << "Door opened" << endl;
        // buzzer->update(state);
        notify();
    }

    void close() {
        state = "close";
        cout << "Door closed" << endl;
        // buzzer->update(state);
        notify();
    }
};


class Buzzer : public Ifeatures {
public:
    void update(string state) {
        if (state == "open") {
            cout << "Noise" << endl;
        }
    }
};


class SMSManager : public Ifeatures {
public:
    void update(string state) {
        if (state == "open") {
            cout << "Notification" << endl;
        }
    }
};


class VisualizationManager : public Ifeatures {
public:
    void update(string state) {
        if (state == "open") {
            cout << "Video turned on" << endl;
        }
        else if (state == "close") {
            cout << "Video turned off" << endl;
        }
    }
};

int main() {
    Buzzer* buzzer = new Buzzer();
    SMSManager* smsManager = new SMSManager();
    VisualizationManager* visManager = new VisualizationManager();
    SmartdoorImpl* smartDoor = new SmartdoorImpl;
    
    smartDoor->attach(buzzer);
    smartDoor->attach(smsManager);
    smartDoor->attach(visManager);

    smartDoor->open();
    smartDoor->close();

    delete buzzer;
    delete smsManager;
    delete visManager;
    delete smartDoor;

    return 0;
}
