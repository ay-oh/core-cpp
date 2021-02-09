#include <iostream>
#include <string>
#include <limits>

int main()
{
    using namespace std;

//    const char my_player1 [] = "son heong min";
//    const string my_player2{ "son heong min" };
//    string player_number = 13;
//    cout << "My player: " << my_player2 << endl;

    /**
     * buffer issue
     */
//    cout << "Enter player name: ";
//    string name;
//    cin >> name;
//
//    cout << "Enter player number: ";
//    string number;
//    cin >> number;
//
//    cout << "name: " << name << ", number: " << number;

    /**
     * @see https://www.cplusplus.com/reference/string/string/getline/
     * José Mário dos Santos Félix Mourinho
     */
//    cout << "Who is head coach for Spurs?\n>>> ";
//    string head_coach;
//    std::getline(std::cin, head_coach);
//

    /**
     * Flush buffer
     * http://www.cplusplus.com/reference/istream/istream/ignore/
     */
//    cout << "Enter Mourinho's age: ";
//    int age;
//    cin >> age;
//
//    // std::cin.ignore(32767, '\n');
//    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//    cout << "Who are you?\n>>> ";
//    string my_name;
//    std::getline(std::cin, my_name);

    /**
     * string append
     */
//    string first_name = "heong min";
//    string last_name("son");
//    string full_name{ last_name + first_name };

//    cout << "full_name: " << full_name << endl;
//    cout << "str.length(): " << full_name.length() << endl;

    return 0;
}
