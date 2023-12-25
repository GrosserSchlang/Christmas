
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
    string lol = "You forgot the question didn't you lol";
    string note = "Kelton, My favorite thing in the world has been watching you grow up and turn into a literal man. I never thought the day would come were I could have a real conversation with you and not feel like I was talking to some annoying little brat. Nothing makes me happier than seeing you learn and grow. I can't tell you how grateful I am that you help your dad. My biggest fear when I left on my mission was Dad not having the help he needed. I was worried he would continue to burn himself out and be alone while doing it. You stepped up and filled that role and you still do. For that I will always be grateful. Looking at family pictures while I've been home has reminded me how complete you make our family feel. We would feel empty without you, even though you're annoying. Keep pushing, keep growing, and keep dreaming buddy. And remember, you may get taller than me, but I'll always be prettier ;)\n"
                  "\n"
                  "P.S. Dads side of the family isn't the only side we have a legacy on.";
    string pass;
    string opp;

    bool loggedIn = false;

    while (!loggedIn) {
        pass = input("Enter Kelton's Password: ");
        if (pass == "StupidHead") {
            loggedIn = true;
            cout << "Hi Kelton, hope you find the easter eggs" << endl;
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
