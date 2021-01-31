//
//  main.cpp
//  Socket
//
//  Created by 魏洁杨 on 2021/1/25.
//  Copyright © 2021 魏洁杨. All rights reserved.
//

#include <iostream>
#include <unistd.h>
#include <thread>
#include "socket.h"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    pid_t pid = fork();
    if(pid == -1){
        cout<<"error"<<endl;
    }else if(pid == 0){
        cout<<"son"<<endl;
        client();
    }else{
        cout<<"father "<<pid<<endl;
        server();
    }
    
   
    return 0;
}
