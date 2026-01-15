//#include "C:/Wichtig/System/Static/Library/WindowEngine1.0.h"
#include "/home/codeleaded/System/Static/Library/WindowEngine1.0.h"
#include "/home/codeleaded/System/Static/Library/Random.h"


void Setup(AlxWindow* w){
	
}

void Update(AlxWindow* w){
	Clear(BLACK);
}

void Delete(AlxWindow* w){
	
}

int main(){
    if(Create("Dominion",2500,1200,1,1,Setup,Update,Delete))
        Start();
    return 0;
}