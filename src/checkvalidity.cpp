#include <iostream>
#include <bits/stdc++.h>
#include "studentRecord.cpp"

using namespace std;

bool funid (int id, vector <studentRecord> studentlist)
{   
    for(auto it : studentlist)
    {   
        if(it.getId() == id)
            return true;
    }
    return false;

}