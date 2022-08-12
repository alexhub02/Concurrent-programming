#include <iostream>
#include <vector>
#include <thread>
#include <mysql/mysql.h>
#include <memory>
#include "func.h"
#include "func1.h"
using namespace std;

void add(int a,int b){

    cout << a + b << endl;

}

using namespace std;

int main(){
    thread th1(add,1,2);
    th1.join();
    thread th2(add,1,3);
    th2.join();
    cout << boolalpha << th1.joinable() << endl;

    int* p = new int();
    shared_ptr<int> p1(p) ;
    cout << p1.use_count() << endl;

    cout << add1(1,-1) << endl;
    cout << add2() << endl;
    return 0;
}