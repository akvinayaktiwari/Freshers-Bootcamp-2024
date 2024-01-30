#include <iostream>

using namespace std;

 class Printer{

    public:
     void print(string path){
        cout<<"Printing .....\n"<<path;
    }
};

class Scanner{
    public:
     void scan(string path){
        cout<<"Scanning .....\n"<<path;
    }
};
class PrintScanner {
    Printer printer;
    Scanner scanner;

    public:
     
     void print(string path) {
         printer.print(path);
     }

     
     void scan(string path) {
         scanner.scan(path);
     }
   
};
class TaskManager{
    public:
     static void execuctePrintTask(Printer *printer,string documentPath){
        printer->print(documentPath);
    }
     static void execucteScanTask(Scanner *scanner,string documentPath){
            scanner->scan(documentPath);
    }
    static void execuctePrintTask(PrintScanner *printScanner, string documentPath) {
         printScanner->print(documentPath);
     }
     
     static void execucteScanTask(PrintScanner *printScanner, string documentPath) {
         printScanner->scan(documentPath);
     }
};


    int main(){
        Printer printerObj;
        Scanner scannerObj;
        PrintScanner printScannerObj;

        TaskManager::execuctePrintTask(&printerObj,"Test.doc");
        TaskManager::execucteScanTask(&scannerObj,"MyImage.png");
        TaskManager::execuctePrintTask(&printScannerObj,"NewDoc.doc");
        TaskManager::execucteScanTask(&printScannerObj,"YourImage.png");
    }
