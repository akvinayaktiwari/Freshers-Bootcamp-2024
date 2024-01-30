#include <iostream>
using namespace std;
class Device{
    private:
    string id;
    protected:
    Device(){}
    Device(string idArg):id{idArg}{
        cout<<"devise is here"<<endl;
    }
    public:
    ~Device(){
        cout<<"Device Distructed"<<endl;
    }
};
class Printer:public virtual Device{
   

    public:
    Printer(string idArg):Device::Device{idArg}{}
    Printer(){
        cout<<"printer is constructed"<<endl;
    }
     void print(string path){
        cout<<"Printing ....."<<path<<endl;
    }
    
    ~Printer(){
        cout<<"printer is distructed"<<endl;
    }
};

class Scanner:public virtual Device{
    
    public:
    Scanner(string idArg):Device::Device{idArg}{}
     void scan(string path){
        cout<<"Scanning ....."<<path<<endl;
    }
    // Scanner(){
    //     cout<<"Scanner is constructed"<<endl;
    // }
    ~Scanner(){
        cout<<"Scanner is distructed"<<endl;
    }
};

class PrintScanner : public Printer, public Scanner {
    public:
    PrintScanner(string idArg):Device::Device{idArg}{}
    
    
   
     
};

class TaskManager{
    public:
     static void execuctePrintTask(Printer *printer,string documentPath){
        printer->print(documentPath);
    }
     static void execucteScanTask(Scanner *scanner,string documentPath){
            scanner->scan(documentPath);
    }
};


    int main(){
        Printer printerObj{"p1"};
        Scanner scannerObj{"s1"};
        PrintScanner printScannerObj{"PS1"};
""
        TaskManager::execuctePrintTask(&printerObj,"Test.doc");
        TaskManager::execucteScanTask(&scannerObj,"MyImage.png");
        TaskManager::execuctePrintTask(&printScannerObj,"NewDoc.doc"); 
        TaskManager::execucteScanTask(&printScannerObj,"YourImage.png"); 
    }
