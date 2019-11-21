#include <iostream>
#include <string>

using namespace std;

struct Person {
   string name;
   int age;
   float height;
   float weight;
   Person* next;
};

int main(){
   Person john, mar, allan;
   
   john.name = "John Santos";
   mar.name = "Marianne Ang";
   allan.name = "Allan Sioson";
   
   john.next = &mar;
   mar.next = &allan;
   allan.next = NULL;
   
   Person* head = &john;
   
   while(head != NULL) {
      cout << (*head).name << endl;
      
      head = (*head).next;
   }
   
   return 0;
}






