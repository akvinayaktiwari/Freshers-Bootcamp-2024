#include <bits/stdc++.h>
using namespace std;

class Customer{
    private:
    string name;
    string address;
    string pan;
    string aadhar;
    long phone;
    string email;
    public:
    Customer(string nameArg,string addressArg,string panArg, string aadharArg,long phoneArg,string emailArg):name{nameArg},address{addressArg},pan{panArg},aadhar{aadharArg},phone{phoneArg},email{emailArg}{}
};

class CustomerBuilder{
    private:
    string name;
    string address;
    string pan;
    string aadhar;
    long phone=0;
    string email="";
    public:
    CustomerBuilder(string nameArg,string addressArg,string panArg, string aadharArg):name{nameArg},address{addressArg},pan{panArg},aadhar{aadharArg}{}
    CustomerBuilder* setPhone(long phoneArg){
        phone=phoneArg;
        return this;
    }
    CustomerBuilder* setEmail(string emailArg){
        email=emailArg;
        return this;
    }
    Customer* getInstance(){
        return new Customer(name, address, pan, aadhar, phone, email);
    }

};

int main(){
  Customer* customer1=(new CustomerBuilder{"venu","Blr","ADDRV007","ADH546899"})->getInstance();
   Customer* customer2=((new CustomerBuilder{"venu","Blr","ADDRV007","ADH546899"})->setPhone(12345))->getInstance();
  Customer* customer3=new CustomerBuilder{"venu","Blr","ADDRV007","ADH546899"}->setEmail("vgk@v.com")->getInstance();

  delete customer1;
  delete customer2;
  delete customer3;
  return 0;
