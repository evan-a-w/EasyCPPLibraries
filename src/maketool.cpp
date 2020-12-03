#include "MyTools.h"
#include <string>
#include <iostream>

using namespace std;
int main(){
    vector<string> args = StringTools::Split(StringTools::FileToString("args.txt"), ' ');
    for(int i = 0; i < args.size(); i++){
        if(args[i].size() > 2){
            string temp = "importlib " + StringTools::Split(args[i],'.')[0];
            system(temp.c_str());
        }
    }
}