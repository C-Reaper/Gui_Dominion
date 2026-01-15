//#include "C:/Wichtig/System/Static/Library/WindowEngine1.0.h"
#include "/home/codeleaded/System/Static/Library/WindowEngine1.0.h"
#include "/home/codeleaded/System/Static/Library/Dominion.h"



Dominion dom;

void Setup(AlxWindow* w){
	dom = Dominion_New(DOMINION_STACKS,DOMINION_CARDS_STACK,(Dominion_Card[]){
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
	Dominion_AddPlayer(&dom,Dominion_Player_New());
	Dominion_AddPlayer(&dom,Dominion_Player_New());
	Dominion_AddPlayer(&dom,Dominion_Player_New());
	Dominion_AddPlayer(&dom,Dominion_Player_New());
}

void Update(AlxWindow* w){
	if(Stroke(ALX_KEY_ENTER).PRESSED){
		Dominion_ExeBot(&dom);
	}

	Clear(BLACK);

	Dominion_RenderMiddle(&dom,WINDOW_STD_ARGS,0.0f,0.0f);
	
	if(dom.playerturn < dom.players.size){
		Dominion_RenderPlayer(
			&dom,
			(Dominion_Player*)Vector_Get(&dom.players,dom.playerturn),
			WINDOW_STD_ARGS,
			0.0f,
			GetHeight() - 280.0f
		);
	}
}

void Delete(AlxWindow* w){
	Dominion_Free(&dom);
}

int main(){
    if(Create("Dominion",2500,1200,1,1,Setup,Update,Delete))
        Start();
    return 0;
}