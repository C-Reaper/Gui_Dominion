//#include "C:/Wichtig/System/Static/Library/WindowEngine1.0.h"
#include "/home/codeleaded/System/Static/Library/WindowEngine1.0.h"
#include "/home/codeleaded/System/Static/Library/Dominion.h"



Dominion dom;

void Setup(AlxWindow* w){
	dom = Dominion_New(0.0f,0.0f,DOMINION_STACKS,DOMINION_CARDS_STACK,(Dominion_Card[]){
		DOMINION_CARD_ACTION_MOAT,
		DOMINION_CARD_ACTION_WORKSHOP,
		DOMINION_CARD_ACTION_LUMBERJACK,
		DOMINION_CARD_ACTION_VILLAGE,
		DOMINION_CARD_ACTION_RENOVATION,
		DOMINION_CARD_ACTION_THRONROOM,
		DOMINION_CARD_ACTION_MILITIA,
		DOMINION_CARD_ACTION_MARKET,
		DOMINION_CARD_ACTION_FAIR,
		DOMINION_CARD_ACTION_LIBRARY
	});
	Dominion_AddPlayer(&dom,Dominion_Player_New(0.0f,0.7f));
	Dominion_AddPlayer(&dom,Dominion_Player_New(0.0f,0.8f));
	Dominion_AddPlayer(&dom,Dominion_Player_New(0.0f,0.8f));
	Dominion_AddPlayer(&dom,Dominion_Player_New(0.0f,0.8f));
}

void Update(AlxWindow* w){
	if(Stroke(ALX_MOUSE_L).PRESSED){
		Dominion_Interact(&dom,GetMouse().x / (float)GetWidth(),GetMouse().y / (float)GetHeight());
	}
	if(Stroke(ALX_KEY_ENTER).PRESSED){
		Dominion_SkipPhase(&dom);
	}
	
	Clear(WHITE);

	Dominion_RenderMiddle(&dom,WINDOW_STD_ARGS);
	
	if(dom.playerturn < dom.players.size){
		Dominion_RenderPlayer(
			&dom,
			(Dominion_Player*)Vector_Get(&dom.players,dom.playerturn),
			WINDOW_STD_ARGS
		);
	}
}

void Delete(AlxWindow* w){
	Dominion_Free(&dom);
}

int main(){
    if(Create("Dominion",1900,1300,1,1,Setup,Update,Delete))
        Start();
    return 0;
}