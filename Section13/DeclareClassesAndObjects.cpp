#include <iostream>
#include <string>
#include <vector>


class Player {
    public:
    //attributes (data)
    std::string name {"Player"};
    int health {100};
    int xp {3};

    //methods (and functions)
    void talk(std::string text_to_say){
        std::cout << name << " says " << text_to_say << std::endl;
        };
    bool is_dead();

};

class Account {
    public:
    //attribytes
    std::string name {"Account"};
    double balance {0.0};

    //methods
    bool deposit(double bal) {
        balance += bal;
        std::cout << "In deposit" << std::endl;
        return true;
    };
    bool withdraw(double bal) {
        balance -= bal;
        std::cout << "In withdraw" << std::endl;
        return true;
    };

};

int main() {

    Account frank_account; //creates an account object
    frank_account.name = "Frank's account";
    frank_account.balance = 5000.0;

    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);




    Account jim_account;

    Player frank; //player object called frank
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi there");
    Player hero;

    Player players[] {frank, hero, {"frank2", 10, 1}};

    std::vector<Player> player_vec {frank};
    player_vec.push_back(hero);

    std::cout << players[2].name << std::endl;
    std::cout << frank.name << std::endl;


    //std::cout << frank_account.balance->deposit << std::endl;


    // Player *enemy {nullptr};
    // enemy = new Player;

    // delete enemy;

    Player *enemy = new Player; //enemy is a pointer to a player object
    (*enemy).name = "Enemy";
    enemy->health = 50;
    enemy->xp = 5;
    enemy->talk("I will destroy you"); //call the talk method for the enemy object


    return 0;
}