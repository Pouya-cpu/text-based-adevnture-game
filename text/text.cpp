#include <iostream>
#include <string>
#include <thread>
using namespace std;

int main() {


	string choose = "Choose a possiblity: ";
	char choice1;
	char choice1a;
	char choice1b;
	char choice1c;
	
	string beginning = "The world was at the brink of the war. The cuban missile crisis was at its peak. America was just hours from invading cuba. You are american president. What do you do?";

	//Choices
	string FirstChoice1 = "A) Go ahead with invading cuba and risk nulear annihalation of the whole planet";
	string FirstChoice2 = "B) Give it one more shot and try to negotiate with Soviets.";
	string FirstChoice3 = "C) Propose a blockade on ships headed to Cuba";

	//continuation of the story when you choose A
	string SecondChoice1a = "A) Don't do anything. The military is already doing stuff.";
	string SecondChoice1b = "B) Order troops in Europe to begin preparing for invasion of the Eastern Bloc";
	string SecondChoice1c = "C) Attack now!";
	//continuation of the story when you choose B
	string SecondChoice2a = "A) Propose to pull US missiles out of Turkey and Soviets will pull missiles out of Cuba. "; 
	string SecondChoice2b = "B) Give strong warning to Soviets that if they don't pull out of cuba they have to pay a big price. ";
	string SecondChoice2c = "C) Let's try not to blow up The planet. OK?";
	//continuation of the story when you choose C
	string SecondChoice3a = "A) intensify the blockade";
	string SecondChoice3b = "B) Try to sink ships";
	string SecondChoice3c = "C) Try assasinating Castro";



	
	cout << beginning << "\n";
	cout << FirstChoice1 << "\n";
	cout << FirstChoice2 << "\n";
	cout << FirstChoice3 << "\n";
   
	
	 cout << choose;
	 cin >> choice1;
FirstChoice1 = to_string(choice1);
	FirstChoice2 = to_string(choice1);
	FirstChoice3 = to_string(choice1);
	 if (choice1 == 'A') {

		

		cout << "Military is just one hour from invading!" << "\n";
		cout << "OK. So you want to destroy the world. How do you prepare for invasion?" << "\n";
		//continuation of the story when you choose A
		cout << SecondChoice1a << "\n";
		cout << SecondChoice1b << "\n";
		cout << SecondChoice1c << "\n";
		cout << choose;
		cin >> choice1a;
		if (choice1a == 'A') {
		cout << "You are a lazy boy you know?" << "\n";
}
		else if(choice1a == 'B') {
		cout << "Ok Sir. I will prepare the order and our nuke shelter." << "\n";
}
		else if (choice1a == 'C'){
		cout << "Ok Sir. I will order the millitary right now." << "\n";

		}
		else {
			cout << "Ah ah. You are choosing the wrong one Mr.President.";

		}
	}
	 
    

	 
	else if (choice1 == 'B') {

		cout << "OK Mr.President. We will try to contact the Russians." << "\n";
		
		cout << "Sir. Mr.Khruschev is on the line. What do you propose?" << "\n" << "\n";
		cout << SecondChoice2a << "\n";
		cout << SecondChoice2b << "\n";
		cout << SecondChoice2c << "\n";
		cout << choose;
		cin >> choice1a;

		if (choice1a == 'A') {
			cout << "You talk to Khruschev. He agrees. " << "\n";
			cout << "Congratulations. You saved the world from nuclear annihalation";
		}
		else if (choice1a == 'B') {
			cout << "Khruschev felt threatend. He hung up and orderd the Soviet military to begin their invasion of the Western Europe." << "\n";
			cout << "congratualtions. You just dragged the world to another devastating war after 17 years of peace. Ahhhh.";
		}
		else if (choice1a == 'C') {
		cout << "Khruschev complains that YOU started everything but after some discussion you convince him to pull out of Cuba." << "\n";
		cout << "YAAY! You saved world!";
}
		
		else {
			cout << "Ah ah. You are choosing the wrong one Mr.President.";

		}
	}

	   else if (choice1 == 'C') {

		cout << "Right sir. We will send the order to the navy right now." << "\n";
			

		cout << "What should we do after That?" << "\n" << "\n";
		cout << SecondChoice3a << "\n";
		cout << SecondChoice3b << "\n";
		cout << SecondChoice3c << "\n";
		cout << choose;
		cin >> choice1a;
		if(choice1a == 'A'){
		cout << "" << "\n";
}
		else if (choice1a == 'B'){
		cout << "" << "\n";
}
		else if (choice1a == 'C')
		cout << "vnjvnl" << "\n";
		
	}
	 
	   else {
		 cout << "Ah ah. You are choosing the wrong one Mr.President.";

	 }



	 cout << "The End";
cin.get();

	 return 0;

	 
}
























