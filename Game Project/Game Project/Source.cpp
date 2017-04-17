#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main() {
	string input = "code";
		int room = 1;
	while (input.compare("quit")) {
		switch (room) {
		case 1:
			cout << "You are in room 1, the living room." << endl;
			cout << "You can go south(s)." << endl;
			getline(cin,input);
			if (input.compare("south") == 0)
				room = 2;
			else
				cout << "You can not go this way" << endl;
			break;
		case 2:
			cout << "You are in room 2, the kitchen." << endl;
			cout << "You can go north(n), west(w), east(e), or south(s)." << endl;
			getline(cin, input);
			if (input.compare("north")==0)
				room = 1;
			else if (input.compare("west")==0)
				room = 4;
			else if (input.compare("east") == 0)
				room = 3;
			else if (input.compare("south") == 0)
				room = 5;
			break;
		case 3:
			cout << "You are in room 4, the blank room." << endl;
			cout << "You can go south(s), north(n), west...Oh wait its a blank room there is nothing. YOU DIED AND LOST!!! " << endl;
			getline(cin, input);
			break;
		case 4:
			cout << "You are in room 3, the trampoline room." << endl;
			cout << "You have bounced all the way to the top of the building and have found a flashlight!! You can only go south(s)." << endl;
			getline(cin, input);
			if (input.compare("south") == 0)
				room = 5;
			break;
		case 5:
			cout << "You are in room 5, the snack room." << endl;
			cout << "You grab a bag of chips and a drink." << endl;
			cout << "You finish up your drink and bag of chips but then realize a monster in a corner." << endl;
			cout << "Its a 30 foot snake! You have to get out of the room quickly." << endl;
			cout << "You can go east, or south" << endl;
			getline(cin, input);
			if (input.compare("east") == 0)
				room = 6;
			else if (input.compare("south") == 0)
				room = 7;
			break;
		case 6:
			cout << "You are in room 6, the torture chamber." << endl;
			cout << "You start to hear footsteps coming towards you." << endl;
			cout << "You decide to hide behind a table and see what was cominhg towards you." << endl;
			cout << "The thing comes closer. Close enough to see what he or she is." << endl;
			cout << "You start to feel scared becuse the thing has a head but no face, a body but no guts, legs but no feet?!" << endl;
			cout << "You start to panic and decide to run." << endl;
			cout << "while running you start to notice there are no doors. You look behind you and see the same dor open and decide to run back to the door." << endl;
			cout << "As soon as you are 40 feet away from the door the snake comes through the door and sees the other monster and decides to attack it." << endl;
			cout << "As soon as the snake ate the other monster you felt some relief and started to slow down. Until the snake turned it's head slowly and had his eyes directly facing you." << endl;
			cout << "You have no choice but to give up and let fate take your life. You look up and close your eyes with your arms spread apart from your body while hearing the snake get closer and closer to you." << endl;
			cout<<"Finally you hear the snake hiss and soon to realize his teeth were through your body." << endl;
			cout << "You have bled out. Thanks for wasting your time playing this game!!" << endl;
			getline(cin, input);
			break;
		case 7:
			cout << "You are in room 7, the light room." << endl;
			cout << "All you see is a bright white light. You have to walk along the wall to find your way around the room." << endl;
			cout << "You find a door knob and wanted to open the door,but you wanted to make sure there is nothing else in the room that can help you." << endl;
			cout << "You start to walk more along the wall and soon find another door knob.You decide to use this door instead of the first." << endl;
			cout << "You close the door behind you becuase the light is to bright to see the next room." << endl;
			cout << "As soon as you take a step u fall in a hole and drop 10 feet into the ground. You start to recover from the fall and started looking around and noticed a door." << endl;
			cout << "You can only go west." << endl;
			getline(cin, input);
			if (input.compare("west") == 0)
				room = 8;
			break;
		case 8:
			cout << "You are in room 8, the asylum!" << endl;
			cout << "You start walking more into the room to see what there is. You start to see a bed in the middle of the room." << endl;
			cout << "The bed also has a corpse on it." << endl;
			cout << "You got a little curious and decided to get close to the corpse. You take 3 steps forward and stand still." << endl;
			cout << "You examine the body first before you get any closer. You see nothing on the body." << endl;
			cout << "But there is something wrong with the body. There is a bubble forming " << endl;
			cout << "The bubble is green and big." << endl;
			cout << "It doesn't look like it was done on purpose. It seems like it is a disease." << endl;
			cout << "You got so curious and got the urge to pop the bubble.You take a step closer and see yourself right infront of the corpse." << endl;
			cout << "You start raising your hand and start poking the bubble. It bursts and green is everywhere. You take off the green stuff on your eyes and open them." << endl;
			cout << "You look back at the corpse and see a key. You grab the key and walk to the door. You open the door but didn't realize that there is a monster behind it." << endl;
			cout << "You quickly run and see another door." << endl;
			cout << "You can go west, or south." << endl;
			getline(cin, input);
			if (input.compare("west") == 0)
				room = 9;
			else if (input.compare("south") == 0)
				room = 10;
			break;
		case 9:
			cout << "You are in room 9, the Blue room." << endl;
			cout << "All you see is water. It doesnt seem like there is a bottom/floor." << endl;
			cout << "The water is dark but u have no choice but to go back. You try to open the door but it seems locked." << endl;
			cout << "You have to swim to the other side to reach the door that you see. You start swimming but you feel uncomfortable about not kmowing what is beneath you." << endl;
			cout << "You continue to swim but not knowing a fin behind you. You start swimming faster and faster. You take a break and take a look behind soon to realize the fin was gone." << endl;
			cout << "You start panic and dip your head in the water to try to take a look down to see if you see the shark." << endl;
			cout << "Nothing is there for about 5 seconds but then finally see the shark's face, coming straight at you." << endl;
			cout << "The face is huge. You see the mouth start to open and seeing that the mouth is bigger then your whole body." << endl;
			cout << "You  know you were screwed so you let the shark kill you. THANKS FOR WASTING YOUR TIME PLAYING THIS GAME!!!" << endl;
			break;
		case 10:
			cout << "You are in room 10, the ending." << endl;
			cout << "You see the door that leads to the outside world. You open the door and see trees everywhere." << endl;
			cout << "You walk outside but really it's still inside of a building. You see another door in which you open and see yourself sleeping." << endl;
			cout << "you get scared and finally wake up. In which you start to realize you were in a dream the whole time." << endl;
			cout << "THANKS FOR PLAYING> YOU WASTED YOUR TIME!!!" << endl;





		}
	}
}