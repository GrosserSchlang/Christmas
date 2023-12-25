#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

std::string input(std::string prompt) {
    std::cout << prompt;
    std::cout.flush();
    std::string response;
    std::getline(std::cin, response);
    return response;
}

int main() {
    vector<string> jokes = {"Why did the gym close down? It just didn't work out.", "Where are average things manufactured? The Satisfactory.", "Want to hear a joke about construction? I'm still working on it.", "Why don’t the other farm animals like playing basketball with pigs? They’re ball hogs.", "Why did the man put his money in the freezer? He wanted cold, hard cash.", "Whoever stole my depression medication — I hope you’re happy now.", "What do you call two monkeys who share an Amazon account? Prime mates.", "What did the cannibal choose as his last meal? Five Guys.", "What do you call a penguin in the White House? Lost.", " I'm reading a book about anti-gravity. It's impossible to put down."};
    vector<string> mems = {"Remember when we all went to disney world with the Thompsons and Burbidges and we all made shirts with the names of the 12 dwarves for the kids.", "Remember when Dad used to climb Mt. Raineer every other weekend.", "Remember our first trip to Hawaii. Our hotel right accross the street from the beach and hanging out in the water untill the sun went down. \nRemember the road to Ohana drive that we took and it got so rained out we had to stop and stay at that random air bnb and we played with the face filters on Moms ipad.", "Remember when we lost the GoPro in the water in Hawaii and Korban completed a whole triathalon to try and help find it.", "GOGGLE BOY!", "Remember the orphanage and the haunted plantation house we stayed at in Guatemala. ", "Don't forget about the time Papa dressed up as the easter bunny and sent Kelton running and screaming in circles around the 61st house.", "Remember all the Thanksgiving/Christmas dinners we had at the fire station with Dad.", "Remember Mom running triathalons!", "Remember our gravel bike parking area at the 61st house, so convenient.", "Remember Ross lake with the Hayes's. And all our other backpacking adventures with them!"};
    string lol = "I used to use your Rodan + Fields face wash and that stuff was amazing. Great choice.";
    string note = "Malorie, I can't describe to you how much more you mean to me the older we get. you hardly feel like the same little sister I grew up with, you've changed so much. The one thing that has always stayed the same is how free I've always felt to tell you how I feel. Even if we haven't always seen things the same way you've always been someone I can talk to when I've really needed it and that has done more for me than I think you realize. You were a pain in my butt growing up but I'm so thankful that you are my sister and that no matter were life takes us I will always be able to count on you to be understanding and accepting. You genuinely complete our family whether you realize it or not. Our memories would feel empty without you in them. Thank you for being a light in our lives Malorie <3";
    string pass;
    string opp;

    bool loggedIn = false;

    while (!loggedIn) {
        pass = input("Enter Malorie's Password: ");
        if (pass == "BlondeGirl1") {
            loggedIn = true;
            cout << "Hi Malorie, hope this doesn't confuse you too much" << endl;
            cout << "Here's what you can do from here\n"
                    "1 Run through some memories\n"
                    "2 Hear a dad joke\n"
                    "3 Hear Something I never told you\n"
                    "4 Get personal\n"
                    "(press the corresponding # on that flimsy keyboard): ";

            // Additional interaction should go inside this loop
            while (true) {
                opp = input("");
                if (opp == "3") {
                    cout << lol << endl;
                } else if (opp == "1") {
                    cout << mems[rand() % 10] << endl;
                } else if (opp == "2") {
                    cout << jokes[rand() % 10] << endl;
                } else if (opp == "4") {
                    cout << note << endl;
                } else {
                    cout << "Invalid option. Try again: ";
                }
            }
        } else {
            cout << "Wrong password, self destructing in 3... 2... Just kidding... Try again." << endl;
        }
    }

    return 0;
}
