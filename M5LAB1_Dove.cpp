// CSC 134
// M5LAB1 - Choose Your Own Adventure
// Hayley Dove
// 04/12/2025


#include <iostream>
using namespace std;

void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_secret_path();


int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. Check out the secret path next to the house" << endl;
  cout << "5. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door();
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    choice_secret_path();
  } else if (5 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  }
}

void choice_back_door() { 
    cout << "You sneak around to check the back of the house." << endl;
    cout << "Do you:" << endl;
    cout << "1. Check the back door" << endl;
    cout << "2. Look for another way in" << endl;
    cout << "Choose: " << endl;
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        cout << "It seems that the door is jammed, like there's something pushed up against it." << endl;
    }
    else if (choice == 2)
    {
        cout << "You find a window that has been broken, it looks like it leads to the basement." << endl;
    }
    

}

void choice_go_home() 
{ 
    cout << "On your way home, you notice a car following you." << endl;
    cout << "Do you:" << endl;
    cout << "1. Take a detour through an unfamiliar neighborhood" << endl;
    cout << "2. Run home as fast as you can" << endl;
    cout << "Choose: " << endl;
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        cout << "Whew! That was a close one! It seems that you have successfully dodged the mysterious vehicle, but which way is home?" << endl;
    }
    else if (choice == 2)
    {
        cout << "It looks like the car is speeding up! The car looks somewhat familiar.. You've seen it before.. But where?" << endl;
    }
    
}

void choice_secret_path()
{
    cout << "You follow a secret path along the side of the house, you see a light off in the distance." << endl;
    cout << "Do you:" << endl;
    cout << "1. Follow the light" << endl;
    cout << "2. Turn around" << endl;
    cout << "Choose:" << endl;
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        cout << "As you approach the light, you notice that it is from a fire at a campsite in the woods. You can see shadow figures sitting around the fire." << endl;
    } else if (choice == 2)
    {
        cout << "You turn around and head back to the house, good choice! Who knows what was waiting in the woods." << endl;
    }
    
}