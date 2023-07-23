#include <utility>
#include <iostream>
#include <sstream>
 #include <algorithm>
#include <fstream>
#include <random>
#include <chrono>
#include <string>
#include "controller.h"
 
using namespace std;

Controller::Controller(int argc, char * argv []) : argc(argc), argv(argv) {
    vector<string> arg_vec;
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();

    bool randomize = true; 

    for (int i = 1; i < argc; i++) {
        string arg = argv[i];
        arg_vec.emplace_back(arg); 
	}


	// setting the seed if specified
    int size = arg_vec.size(); 
    for (int i = 0; i < size; i++) {
        if (arg_vec[i] == "-seed") {
            i++; 
            seed = stoi(arg_vec[i]);
        } if (arg_vec[i] == "-load" || arg_vec[i] == "-board") { // if -load or -board are specified then we ignore the randomize
			randomize = false; 
		}
	}

    stringstream board_oss; 

    if (randomize) {
        vector<int> tileVal = {2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12}; // die roll
        vector<int> tileResource = {0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5}; // 4 bricks(0), 4 energy(1), 4 glass(2), 3 heat(3), 3 wifi(4), 1 park(5)
        default_random_engine rng{seed};
        shuffle(tileResource.begin(), tileResource.end(), rng);
        shuffle(tileVal.begin(), tileVal.end(), rng);
        for (int i = 0; i < 19; i++) {
            board_oss << " " << tileResource[i] << " " << tileVal[i]; 
        }
    }

	for (int i = 0; i < size; i++) {
        if (arg_vec[i] == "-board") {
			i++; 
			ifstream iff{arg_vec[i]};
            if (!iff) {
                cerr << "Error: Could not open file" << std::endl;
                exit(1);
            }
			for (int i = 0; i < 19 * 2; i++) {
				string s; 
				iff >> s; 
				board_oss << " " << s; 
			}
            break; 
		} else if (arg_vec[i] == "-load") {
			i++; 
			ifstream iff{arg_vec[i]};
            if (!iff) {
                cerr << "Error: Could not open file" << std::endl;
                exit(1);
            }
			string s; 
			int count = 5; // we stop until we have read in 5 H's 
            iff >> s; 
            // this->turn = stoi(s)  -> sets the currents player turn 
			while ((iff >> s) and (count > 1)) {
			    if (s == "H") {;count--;}
			}
			board_oss << " " << s; 
			for (int i = 0; i < 19 * 2 - 1; i++) {
				iff >> s; 
				board_oss << " " << s; 
			}
            break; 
		}
    }
    // just cheking the contents of stringstream 
    cout << board_oss.str() << endl; 
    
    // TO DO !!!!
    // convert board_iss.srt into type istringstream and pass it to the board ctor 
    istringstream board_iss{board_oss.str()}; 
    // Board{board_iss}
}

// // In here call a controller function that deals with all the comand line argumenst for loading a board and gett
// /// getting a file
// // than after we have that information, call Model ctor and give it that file. 

// // here determines if reading in file from standard file, provided file, random generated board, 
// // or if loading a game



//this acts like the main function essentially 
void Controller::general() {
    // deal with input 


    
    // Liz: Work in progress. Commented out since not finished

    // Next Day (for me to remember) : 
        // figure out if you can initialize ifstream with string
        // ^ for reading in playerData, want to give it as an istringstream or ifs
        // ^ for board randomization, read into string that has all the data. and then 
        // create a ifs from that string and then give to model. 
        // If can't, then Model and Board should take in an stringstream and when reading in
        // from a file, convert to istringstream by converting to string from ifs and then to 
        // istringstream
    

    
    // CASE 1, 2, 3 will be in an if statement. 

    // CASE 1: creating a model where we're loading a board from a file
    // converting from ifstream to istringstream
    ostringstream oss;
    oss << ifs.rdbuf(); // ifs is the file layout.txt
    string fileContent = oss.str();
    istringstream iss(fileContent);
    model = make_unique<Model>(iss);
    
    // CASE 2: creating a model where we're creating and loading a random generated board
    model = make_unique<Model>(iss); // iss is an istringstream 

    // // CASE 3: creating model where we know we're loading a game
    getline(ifs, turn); // setting field variable
    string playerData;
    getline(ifs, playerData);
    istringstream player1{playerData};
    getline(ifs, playerData);
    istringstream player2{playerData};
    getline(ifs, playerData);
    istringstream player3{playerData};
    getline(ifs, playerData);
    istringstream player4{playerData};
    // ifs now only stores <board>, <geese>, each on seperate line
    model = make_unique<Model>(player1, player2, player3, player4, ifs);
}

void Controller::roll(Color turn) {
    model->roll(turn);
}


/*    
Color turn = Color::DNE;
Model *model
*/ 