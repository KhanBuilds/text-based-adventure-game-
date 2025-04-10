#include <iostream>
#include <string>
using namespace std;
void inquireAboutHeart(); // function declaration because it was needed

//main menu function
void displayMainMenu() {
    cout << "------------------------------------------------------------" <<endl;
    cout << "                    WELCOME TO THE GAME                     " <<endl;
    cout << "                     PRESS S TO START                       " <<endl;
    cout << "------------------------------------------------------------" <<endl;
    
}
// Ending #1
void ending1(){
	 char mapp;
	 char touchh;
			                cout << "As you rest in the cave for the night, the cool air and soft sounds of the forest lull you into a deep sleep." << endl;
    	                    cout << "You wake up with the first light of dawn, feeling refreshed and ready to continue your journey." << endl <<endl;
		                    
		                    cout << "As you walk deeper into the forest, the trees begin to thin out, and suddenly, you see it—a golden castle so massive that its towers disappear into the clouds." << endl;
		                    cout << "The sheer size and brilliance of the castle leave you in awe, but you steel yourself and approach its towering gates." << endl <<endl;

		                    cout << "The gates creak open as you push against them, revealing a vast, ornate hallway shimmering with golden light." << endl <<endl;
		                    
		                    cout << "Press 'M' to pull out the Map of the castle: ";
		                    cin >> mapp;
		                    
		                    if (mapp == 'M' || mapp == 'm') {
                                
							
		                    
		                    cout << "You pull out the ancient map of the castle, detailing its many halls and secret chambers." << endl <<endl;
		                    cout << "The map guides you to a central chamber, labeled 'The Heart of Gold'—an object said to control the fate of your village's people." << endl <<endl;

		                    cout << "With every step, the air grows heavier, and you feel the weight of unseen eyes watching you." << endl <<endl;
		                    cout << "Finally, you reach the chamber. In the center lies the Heart of Gold, glowing with an ethereal light, suspended above a pedestal." << endl <<endl;
		                    
		                    cout << "Press 'T' to touch the heart of gold: ";
		                    cin >> touchh;
		                    
		                    if (touchh == 'T' || touchh == 't'){
		                    cout << "Your hands tremble as you reach out to touch it, driven by the thought of securing your village's future." << endl <<endl;

		                    cout << "But as soon as your fingers brush against the Heart of Gold, an intense pain shoots through your body." << endl <<endl;
		                    cout << "You collapse to the ground, realizing too late that you were warned—only with the guidance of the village elder could you safely approach the artifact." << endl <<endl;

		                    cout << "The glow of the Heart of Gold dims, and the room begins to tremble. The castle itself seems to mourn your fate." << endl <<endl;
		                    cout << "Your vision fades as you draw your final breath, knowing your actions have forever changed the course of your village." << endl <<endl;

		                    cout << "The End." << endl;
		                    
		                } else {
		                	cout << "INVALID INPUT!!";
						}
						
						
		                }
		                 else { 
		                 cout << "INVALID INPUT!" <<endl;
						 }

}

// Ending #2
void ending2(){
	char checkin;
	string arr1[4] = {"Food", "Water" , "Knife" , "Map of the castle"};
	int size = 4;
	cout << "As you rest in a shelter you found, midnight you are awaken by a voice familiar ITS THE GLIMMER GHOST!! you think to yourself" << endl <<endl;
	cout << "The voice gets louder and louder the you feel coming near you"<<endl <<endl;
	cout << "Press 'I' to check your inventory";
	cin >> checkin;
	if (checkin == 'I' || checkin == 'i'){
		
		for (int i=0 ; size > i ;i++){
			cout << arr1[i]<<endl;
		}
		
    cout<< "You have no visible potion left"<<endl <<endl;
    cout << "Before you're able to do anything, you feel horrible pain in your abdomen"<<endl <<endl;
    cout << "The glimmer ghost becomes visible and it has stabbed you with its claw"<<endl <<endl;
    
    cout << "You gasp for each breath, and finally reach your last one"<<endl <<endl;
    cout << "Your last sight being the very thing that killed"<<endl <<endl;
    cout << "THE END (:()"<<endl;
	}
}

// ending #3
void ending3(){
	char mappp;
	char touch;
	char conti;
	cout << "After defeating the Glimmerghost, you feel exhausted and decide to rest for the night in the forest." << endl <<endl;
cout << "You find a safe spot, light a small fire, and drift off into an uneasy sleep under the starlit sky." << endl <<endl;
cout << "At dawn, you wake up feeling refreshed and ready to continue your journey." << endl <<endl;
cout << "Press 'C' to continue: ";
cin >> conti;
   
   if (conti == 'C' || conti == 'c') {
   
cout << "You walk for hours through dense forests, crossing treacherous rivers and rocky terrain." << endl <<endl;
cout << "Finally, you see its the Golden Castle. Its towering spires seem to stretch endlessly into the sky." << endl <<endl;
cout << R"(
       /\       /\
      (__)     (__)
     |    |___|    |
     |    |   |    |
     |____|___|____|
     |    |   |    |
     |____|___|____|
     |    |   |    | 
     |____|___|____|
)" << endl;

cout << "The sight of the castle fills you with awe, but the air grows heavy as you approach." << endl <<endl;
cout << "Each step feels like a burden, and an invisible force seems to push you back." << endl <<endl ;

cout << "Press 'M' to pull out the map of the castle" <<endl;
cin >> mappp;
    if (mappp == 'M' || mappp == 'm'){

cout << "You pull out the map the elder gave you and locate the path to the Heart of Gold."  << endl <<endl;

cout << "As you near the room where it is kept, the air becomes almost unbearable." << endl <<endl;

cout << "You realize that the Heart of Gold is protected by a shield that senses the presence of intruders." << endl <<endl;
cout << "However, it doesn’t sense objects cloaked in invisibility." << endl <<endl;

char useCloak;
cout << "Press 'W' to use the Invisibility Cloak: ";
cin >> useCloak;

if (useCloak == 'W' || useCloak == 'w') {
    cout << "You quickly wrap the Invisibility Cloak around yourself." << endl<<endl;
    cout << "The heaviness in the air vanishes, and the protective shield around the Heart of Gold flickers out of existence." << endl <<endl;
    
    cout << "Press 'T' to touch the heart of gold: ";
    cin >> touch;
    if (touch == 'T' || touch == 't'){

    cout << "You cautiously step forward, your hands trembling as you reach for the Heart of Gold." << endl <<endl;

    cout << "As soon as you touch the Heart of Gold, a brilliant golden light engulfs you." << endl <<endl;
    cout << "You feel your body being lifted into the air and instantly transported back to the village." << endl <<endl;

    cout << "When you open your eyes, you find yourself standing in the center of the village." << endl <<endl;
    cout << "The villagers gather around you, their faces filled with joy and relief." << endl <<endl;

    cout << "They cheer your name, praising your bravery and dedication. The elder approaches you with a smile." << endl <<endl;
    cout << "\"You have done it! You’ve brought the Heart of Gold back to us!\" he exclaims." << endl <<endl;

    cout << "You hold the Heart of Gold high, its golden glow illuminating the faces of the villagers." << endl <<endl;
    cout << "The village is safe, and you are hailed as a hero, your name forever etched into the history of the land." << endl <<endl;

    






} else {
	cout << "INVALID INPUT!!" <<endl;
}

       } else {
        cout << "INVALID INPUT!!" <<endl;
}


} else {
	cout << "INVALID INPUT!!" <<endl;
}


} else {
	cout << "INVALID INPUT!!" <<endl;
} 

      }

// funtion if death (:|)
void death(){
	cout << "YOU DIED, GAME OVER."<<endl;
}

// function if they quit the game
void gamequit(){
	cout << "GAME OVER!!"<<endl;
}

//function if they restart the game	
void restart(){
	cout << "Game restarted"<<endl;
}





// function if they go straight into the forest 
void ignore_forest(){

	char choicef , inventory1 , numchoice, numchoice1;
	
	//  array for inventory
	string inventory[5] = {"KNIFE", "INVISIBLE VISION POTION" , "MAP OF THE GOLD CASTLE" , "FOOD" , "WATER"};
	int size = 5;
	
	
	cout << " You've decided to go directly to the forest, acknowledging a path very ruthless and dangerous awaits you,"<<endl <<endl;
	cout << " but your curiosity outweighs your fear of the path, you decide to venture into the forest deep into the night."<<endl <<endl;
	
	cout << " Once everybody is asleep in the village, you pack your things and start walking into the forest." <<endl <<endl;
	cout << " You hear strange sounds coming from the forest (Do you continue walking into the forest? 'Y' for Yes 'N' for No) "<<endl <<endl;
	cin >> choicef ;
	
	if (choicef == 'Y' || choicef == 'y' ){
		cout << "You keep Walking into the forest and you encounter a strange creature (The 'Glimmerghost') which has the ability to become invisible."<<endl <<endl;
		 cout << R"(
           .-"      "-.
          /            \
         |,  .-.  .-.  ,|
         | )(_o/  \o_)( |
         |/     /\     \|
         (_     ^^     _)
          \__|IIIIII|__/
           | \IIIIII/ |
           \          /
            `--------`
        )";
		cout << "There is no way to escape the glimmerghost without facing it and defeating/killing it." <<endl <<endl;
		cout << "To fight you have to check your inventory for weapons to fight THE GLIMMERGHOST"   <<endl <<endl;
		cout << "To check your inventory PRESS 'I' " ;
		cin >> inventory1;
		
		//  for loop for displaying array elements (:))
				
		if (inventory1 == 'I' || inventory1 == 'i'){
		 for (int i=0 , j=1 ; i < size ; i++ , j++){
		 	cout << j << " " <<inventory[i] <<endl;
			  }
			  cout << endl << "Choose from the inventory :";
			  	cin >> numchoice;
			  	
			  	if (numchoice == '1'){
			  		cout << "The glimmer ghost senses danger from the weapon you picked from your inventory and becomes invisible" <<endl<<endl;
			  		cout << "You sense its presence but cant see it" <<endl <<endl;
			  		
			  		cout << "You close your eyes in order to sense its position" <<endl <<endl;
			  		cout << "You move your knife with force and sense a resistence knowing that you have stabbed the glimmerghost" <<endl <<endl;
			  		
			  		cout << "The glimmer ghost now becomes visible and is injured from the stab, and it runs off into the forest"<<endl <<endl;
			  		cout << "The look in its eyes promises a return" <<endl <<endl;
			  		ending2();
			  	
				  }
				  if (numchoice == '2'){
				  	cout << "The glimmer ghost senses danger from the weapon you picked from your inventory and becomes invisible" <<endl <<endl;
			  		cout << "You sense its presence but cant see it" <<endl <<endl;
			  		
			  		cout << "You drink the Invisible vision potion" <<endl <<endl;
			  		cout << "You feel the strength of the potion" <<endl <<endl;
			  		
			  		cout << "You can now see the glimmer ghost and deliver a forceful kick to its neck killing it there and then" <<endl <<endl;
			  		cout << "You now feel a sense of relief (Do you rest for a bit? Y for yes, N for no): ";
			  		cin >> numchoice1;
			  		
			  		 
			  		switch(numchoice1){
			  			char touch;
			  			char map;
			  			
			  			 case 'Y':
			  			 case 'y':
			  			 	cout << "You gather soft wood to make a shelter and light up a fire to keep you warm and rest for the night"<<endl <<endl;
			  			 	cout << "You are awaken by something moving in the bushes"  <<endl;
			  			 	
			  			 	cout << "You go to see whats moving its just a snake"<<endl <<endl;
			  			 	cout << "You prepare yourself for the day since its morning" <<endl;
			  			 	
			  			 	cout << "You go to fish in the nearby lake and eat the fish"<<endl <<endl;
		                    cout << "feeling refreshed and ready to continue your journey." << endl;
		                    
		                    cout << "As you walk deeper into the forest, the trees begin to thin out, and suddenly, you see it—a golden castle so massive that its towers disappear into the clouds." <<endl << endl;
		                    cout << "The sheer size and brilliance of the castle leave you in awe, but you steel yourself and approach its towering gates."  << endl;

		                    cout << "The gates creak open as you push against them, revealing a vast, ornate hallway shimmering with golden light." <<endl << endl;
		                    
		                    cout << "Press 'M' to pull out the map of the castle" <<endl;
		                    cin >> map;
		                    
		                    if (map == 'M' || map == 'm') {
							
		                    
		                    cout << "You pull out the ancient map of the castle, detailing its many halls and secret chambers." <<endl << endl;
		                    
		                    cout << "The map guides you to a central chamber, labeled 'The Heart of Gold' an object said to control the fate of your village's people."<<endl << endl;

		                    cout << "With every step, the air grows heavier, and you feel the weight of unseen eyes watching you." <<endl << endl;
		                    cout << "Finally, you reach the chamber. In the center lies the Heart of Gold, glowing with an ethereal light, suspended above a pedestal." <<endl << endl;
		                    
		                    cout << "Press 'T' to touch it: " <<endl;
		                    cin >> touch;
		                    
		                    if (touch == 'T' || touch == 't'){
							
		                    
		                    cout << "Your hands tremble as you reach out to touch it, driven by the thought of securing your village's future." <<endl << endl;

		                    cout << "But as soon as your fingers brush against the Heart of Gold, an intense pain shoots through your body."<<endl << endl;
		                    cout << "You collapse to the ground, realizing too late that you were warned—only with the guidance of the village elder could you safely approach the artifact." <<endl << endl;

		                    cout << "The glow of the Heart of Gold dims, and the room begins to tremble. The castle itself seems to mourn your fate." <<endl << endl;
		                    cout << "Your vision fades as you draw your final breath, knowing your actions have forever changed the course of your village." <<endl << endl;

		                    cout << "The End." << endl;
		                    
		            
		                }
		                
		             
		                
		                  else { 
		                   cout << "INVALID INPUT!!" <<endl;
						  }
						  
					}  else {
						
						cout <<"INVALID INPUT!"<<endl;
					}
						    
			  			 	break; 
							   
			  			 	
			  			
						   case 'N':
						   case 'n': 
						    cout << "You decide not to rest and continue your venture as its best to get it over with as quickly as possible"<<endl <<endl;
						    cout << "You continue onwards and stop in between to admire the stary night sky" <<endl <<endl;
    cout << R"(
+-----------------------------------+
|  *    *     *       *          *  |               
| *      *   *         *       *    |             
|   *         *     *      *        |             
| *     *   *          *         *  |              
|     *       *    *       *        |              
|   *   *      *      *    *     *  |              
|      *       *          *   *     |              
|   *      *       *    *      *    |              
| *     *    *           *         *|              
|     *         *       *     *     |              
| *   *     *         *       *    *|              
|        *   *  *    *     *       *|              
| *  *     *        *         *     |              
|   *   *      *     * *   * *      |               
+-----------------------------------+  
 )" <<endl;
                            cout << "Looking at the makes you realise that the magnitude of your problems dont seem so large now"<<endl<<endl;
		                    cout << "On your voyage you see a cave which finally convinces you to finally rest for the night" <<endl <<endl;
		                    ending1();


                            break;
                            
                            default: 
                            cout << "Invalid choice" <<endl;
                            break;
   
     
 }
 

    }    
	    else if (numchoice >'2' && numchoice <= '5'){
				  	death();
				  }
		

	
     // if they backout and go back to the village (:()
       if (choicef == 'n' || choicef == 'N'){
		cout << "You decide upon hearing the sounds to not go into the forest without proper inquiry so you make your way"<<endl <<endl;
		cout << " back to the village and inquire more about the \"Heart of Gold\" from the elder" <<endl <<endl;
		cout << "Upon reaching the village you rest for the night and in the morning you head to the elder to inquire about the heart of gold"<<endl <<endl;
		inquireAboutHeart();
		
		
	     }
	     
	 }
	 
}

}
	



// function if they ask about the heart of gold 
 void inquireAboutHeart() {
 	char inventory2;
 	string iinventory[5]={"Protective shield", "Invisibility cloak", "Food and Water", "Map of the Gold Castle"};
 	int size1 = 5;
 	
	cout << "You go to the elder and ask him about the heart of gold and how does one get to it?"<<endl <<endl;
    cout << "\"What is the heart of gold?\" you ask." <<endl <<endl;
    cout << "\"If I tell you, do you take the responsibility of bringing it to us?\" says the elder." <<endl <<endl;
    
    char choice1;
    cout << "What do you say? (A for yes, B for no)"<<endl <<endl;
    cin >> choice1;
	
	
    switch(choice1) {
    	char choose;
        case 'A':
        case 'a':
            cout << "\"I must tell you now there is no turning back,\" says the elder." <<endl <<endl;
            cout << "Elder: Now that you've chosen this path i have no choice but to tell you" <<endl <<endl;
            
            cout << "You: I am very eager to listen" <<endl <<endl;
            cout << "Elder : So deep inside the forest across those snowy peak, there lies a castle called \"The Gold Castle\" " <<endl <<endl;
            cout << "In which lies the \"Heart of Gold\" hence why its called the gold castle nobody in recent times has seen the gold castle but it is there" <<endl <<endl;
            
            cout << "You: Howcome that nobody has seen the castle " <<endl <<endl;
            cout << "Elder: Only people with certain qualities can see it" <<endl <<endl;
            
            cout << "Elder: The heart of gold controls the fate of the people of this village "<<endl <<endl;
            cout << "It was hidden by our ancestors to prevent it from getting in the wrong hands "<<endl <<endl;
            
            cout << "But recently I have been getting these dreams that its about to get in the wrong hands " <<endl <<endl;
            cout << "So I want you to bring it to me" <<endl <<endl;
            
            cout << "I'll give you some things that will keep you safe from dangers of the forest" <<endl <<endl;
            cout << "Press 'B' to see your inventory" <<endl <<endl;
            cin >> inventory2;
            
            if (inventory2 == 'B' || inventory2 == 'b'){
            	
                for (int j=0 ; size1 > j ; j++){
                	cout << iinventory[j] <<endl;
					}
			}
			cout << "Elder: Make sure to use the invisibility cloak when touching the heart of gold" <<endl <<endl;
			cout << "You leave the elder's house and venture into the dark forest, prepared for the unknown." <<endl << endl;
            cout << "After hours of walking, you suddenly hear strange noises and feel an eerie presence."  <<endl << endl;
            cout << "A creature appears before you it’s the Glimmerghost, capable of vanishing into thin air!" <<endl << endl;
            cout << R"(
           .-"      "-.
          /            \
         |,  .-.  .-.  ,|
         | )(_o/  \o_)( |
         |/     /\     \|
         (_     ^^     _)
          \__|IIIIII|__/
           | \IIIIII/ |
           \          /
            `--------`
     )" << endl;
    cout << "The Glimmerghost snarls and prepares to attack!" <<endl << endl;

    char useShield;
    cout << "Press 'U' to use the Protective Shield: ";
    cin >> useShield;

    if (useShield == 'U' || useShield == 'u') {
        cout << "You quickly activate the Protective Shield, forming a glowing barrier around you." <<endl << endl;
        cout << "The Glimmerghost lunges at you, but its attacks are deflected by the shield!"  <<endl << endl;
        cout << "Seeing its attacks fail, the creature becomes disoriented." <<endl << endl;
        cout << "You seize the opportunity, grab your knife, and strike with precision." <<endl << endl;
        cout << "The blade pierces the Glimmerghost, and it lets out a terrifying screech before collapsing to the ground." <<endl << endl;
        cout << "You stand victorious, the forest once again silent." <<endl << endl;
        ending3();
    } else {
        cout << "You hesitated, and the Glimmerghost tries to attacks you almost penetrating barrier but the heat from the barrier burns it aive" <<endl << endl;
        cout << "The barrier also burnt a little bit of your skin on your arms" <<endl <<endl;
        ending3();
    }
    break;
            break;
            
            
            
            
        case 'B':
        case 'b':
            cout << "Elder: \"Then I cannot tell you,\" says the elder."<<endl;
            cout << "Do you want to go straight into the forest without inquiry ( 'Y' for yes, 'N' for no): "<<endl;  
            cin >> choose;
            if (choose == 'y' || choose == 'Y'){
            ignore_forest();
			}
            
            if ( choose == 'N' || choose == 'n'){
            	gamequit();
			}
			break;
			
        default:
            cout << "Invalid choice!"<<endl;
            break;
    }
}





void startGame(){
    cout << "Your journey starts in your village..."<<endl;
    cout << "You hear about the heart of gold which controls the fate of the village" <<endl;
    cout << R"(
                 *******       ********   
               ***********   ************
              ************* *************
              ***************************
               *************************
                ***********************
                 *********************
                  *******************
                    ***************
                     *************
                      ***********
                       *********
                        *******
                         ****
                          **
                           
                        
                    
                            
    )" << endl;
    cout << "What do you do next? ('A' to inquire more about the heart of gold, 'B' to plan to go to the forest without inquiring)"<<endl;

    char choice;
    cin >> choice;

    switch(choice) {
        case 'A':
        case 'a':
            inquireAboutHeart();
            break;
        case 'B':
        case 'b':
            cout << "You decide to head straight into the forest..."<<endl;
            ignore_forest();
            break;
        default:
            cout << "Invalid choice!"<<endl;
            break;
    }
}

int main(){
    displayMainMenu();
    
    char op , op2 , op3;
    cin >> op;

    if (op == 'S' || op == 's'){
    	startGame();
	}
    
    restart();
    displayMainMenu();
    cin >> op2;
    if (op2 == 'S' || op2 == 's'){
    		startGame();
		}
    	
    	  return 0;
}