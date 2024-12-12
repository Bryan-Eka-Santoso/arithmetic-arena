#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    int difficulty, menu, angka1, angka2, angka3, angka4, operator1, operator2, operator3;
    int shop, gold_earned, amount, gold_lucky;
    double hasil1, hasil2, hasil3, jawaban;
    int gold = 0, lucky = 0, devils = 0, angels = 0;
    string operator1_d, operator2_d, operator3_d;
    srand(time(0));


    do {
    cout << "=== Welcome to Arithmetic Arena ===" << endl;
    cout << "1. Play" << endl;
    cout << "2. Shop" << endl;
    cout << "0. Quit" << endl;
    do {
        cout << ">> ";
        cin >> menu;
    } while (menu < 0 || menu > 2);

    switch (menu){
        case 1:{
            int rounds = 1;
            int gold_rounds = 0;

            cout << endl << "== Play ==" << endl;
            cout << "Choose your difficulty: " << endl;
            cout << "1. Easy" << endl;
            cout << "2. Medium" << endl;
            cout << "3. Hard" << endl;
            do {
                cout << ">> ";
                cin >> difficulty;
            } while (difficulty < 1 || difficulty > 3);

            switch (difficulty) {
                case 1:{
                    gold_earned = 0;
                    cout << endl << "= Items =" << endl;
                    cout << "Lucky Pendant: " << lucky << endl;
                    cout << "Devil's Eye: " << devils << endl;
                    cout << "Angel's Shield: " << angels << endl << endl;

                    do {
                            gold_lucky = 1;
                            angka1 = rand() % 10 + 1;
                            angka2 = rand() % 10 + 1;
                            operator1 = rand() % 4 + 1;

                            cout << "= Round " << rounds << " =" << endl;
                            if(rounds == 1){
                                gold_rounds += 10;
                                cout << "Each round gives " << gold_rounds << " gold." << endl;
                            } else if (rounds % 5 == 1){
                                gold_rounds += 10;
                                cout << "Gold reward increased! Each round now gives " << gold_rounds << " gold." << endl;
                            }

                            if(operator1 == 1){
                                hasil1 = angka1 + angka2;
                                operator1_d = "+";
                            } else if (operator1 == 2){
                                hasil1 = angka1 - angka2;
                                operator1_d = "-";
                            } else if (operator1 == 3){
                                hasil1 = angka1 * angka2;
                                operator1_d = "*";
                            } else if (operator1 == 4){
                                hasil1 = angka1 / (angka2 * 1.0);
                                operator1_d = "/";
                            }

                            do {
                            cout << angka1 << " " << operator1_d << " " << angka2 << " = ? " << endl;
                            cout << ">> ";
                            cin >> jawaban;

                            if(jawaban == 777 && lucky > 0){
                                lucky -= 1;
                                gold_lucky *= 3;

                                cout << "You prayed using your lucky pendant" << endl;
                                cout << "This round's gold reward is tripled" << endl;
                                cout << "Lucky pendant remaining: " << lucky << endl << endl;
                            } else if(jawaban == 777 && lucky <= 0) {
                                cout << "You don't have lucky pendant" << endl << endl;
                            }

                            if(jawaban == 666 && devils > 0){
                                devils -= 1;

                                cout << "Through the devil's eye, see through the answer: " << hasil1 << endl;
                                cout << "Devil's eye remaining: " << devils << endl << endl;
                            } else if(jawaban == 666 && devils <= 0) {
                                cout << "You don't have devil's eye" << endl << endl;
                            }

                        } while (jawaban == 777 || jawaban == 666);
                            if(hasil1 == jawaban || fabs(hasil1-jawaban) <= 0.001){
                                cout << "Correct!" << endl << endl;
                                gold_earned += gold_rounds * gold_lucky;
                            } else if (hasil1 != jawaban && angels > 0){
                                angels -= 1;
                                jawaban = hasil1;
                                gold_earned += gold_rounds * gold_lucky;
                                cout << "Incorrect. The correct answer was " << hasil1 << endl;
                                cout << "Saved by an angel's shield" << endl;
                                cout << "Angel's shield remaining: " << angels << endl << endl;
                            }
                        rounds++;
                    } while (hasil1 == jawaban || fabs(hasil1-jawaban) <= 0.001 || angels > 0);
                    rounds -= 2;
                    gold += gold_earned;
                    cout << "Incorrect. The correct answer was " << hasil1 << endl;
                    cout << "Rounds completed: " << rounds << endl;
                    cout << "Gold earned: " << gold_earned << endl;
                    cout << "Current gold: " << gold << endl << endl;
                  break;
                }
                case 2:{
                    gold_earned = 0;
                    cout << endl << "= Items =" << endl;
                    cout << "Lucky Pendant: " << lucky << endl;
                    cout << "Devil's Eye: " << devils << endl;
                    cout << "Angel's Shield: " << angels << endl << endl;

                    do {
                            gold_lucky = 1;
                            angka1 = rand() % 10 + 1;
                            angka2 = rand() % 10 + 1;
                            angka3 = rand() % 10 + 1;
                            operator1 = rand() % 4 + 1;
                            operator2 = rand() % 4 + 1;

                            cout << "= Round " << rounds << " =" << endl;
                            if(rounds == 1){
                                gold_rounds += 10;
                                cout << "Each round gives " << gold_rounds << " gold." << endl;
                            } else if (rounds % 5 == 1){
                                gold_rounds += 10;
                                cout << "Gold reward increased! Each round now gives " << gold_rounds << " gold." << endl;
                            }

                            if(operator1 == 1){
                                hasil1 = angka1 + angka2;
                                operator1_d = "+";
                            } else if (operator1 == 2){
                                hasil1 = angka1 - angka2;
                                operator1_d = "-";
                            } else if (operator1 == 3){
                                hasil1 = angka1 * angka2;
                                operator1_d = "*";
                            } else if (operator1 == 4){
                                hasil1 = angka1 / (angka2 * 1.0);
                                operator1_d = "/";
                            }

                            if(operator2 == 1){
                                hasil2 = hasil1 + angka3;
                                operator2_d = "+";
                            } else if (operator2 == 2){
                                hasil2 = hasil1 - angka3;
                                operator2_d = "-";
                            } else if (operator2 == 3){
                                hasil2 = hasil1 * angka3;
                                operator2_d = "*";
                            } else if (operator2 == 4){
                                hasil2 = hasil1 / (angka3 * 1.0);
                                operator2_d = "/";
                            }

                            do {

                            cout << angka1 << " " << operator1_d << " " << angka2 << " " << operator2_d << " " << angka3 << " = ? " << endl;
                            cout << ">> ";
                            cin >> jawaban;

                            if(jawaban == 777 && lucky > 0){
                                lucky -= 1;
                                gold_lucky *= 3;

                                cout << "You prayed using your lucky pendant" << endl;
                                cout << "This round's gold reward is tripled" << endl;
                                cout << "Lucky pendant remaining: " << lucky << endl << endl;
                            } else if(jawaban == 777 && lucky <= 0) {
                                cout << "You don't have lucky pendant" << endl << endl;
                            }

                            if(jawaban == 666 && devils > 0){
                                devils -= 1;

                                cout << "Through the devil's eye, see through the answer: " << hasil2 << endl;
                                cout << "Devil's eye remaining: " << devils << endl << endl;
                            } else if(jawaban == 666 && devils <= 0) {
                                cout << "You don't have devil's eye" << endl << endl;
                            }

                        } while (jawaban == 777 || jawaban == 666);
                            if(hasil2 == jawaban || fabs(hasil2-jawaban) <= 0.001){
                                cout << "Correct!" << endl << endl;
                                gold_earned += gold_rounds * gold_lucky;
                            } else if (hasil2 != jawaban && angels > 0){
                                angels -= 1;
                                jawaban = hasil2;
                                gold_earned += gold_rounds * gold_lucky;
                                cout << "Incorrect. The correct answer was " << hasil2 << endl;
                                cout << "Saved by an angel's shield" << endl;
                                cout << "Angel's shield remaining: " << angels << endl << endl;
                            }
                        rounds++;
                    } while (hasil2 == jawaban || fabs(hasil2-jawaban) <= 0.001 || angels > 0);
                    rounds -= 2;
                    gold += gold_earned;
                    cout << "Incorrect. The correct answer was " << hasil2 << endl;
                    cout << "Rounds completed: " << rounds << endl;
                    cout << "Gold earned: " << gold_earned << endl;
                    cout << "Current gold: " << gold << endl << endl;
                break;
                }
                case 3:{
                    gold_earned = 0;
                    cout << endl << "= Items =" << endl;
                    cout << "Lucky Pendant: " << lucky << endl;
                    cout << "Devil's Eye: " << devils << endl;
                    cout << "Angel's Shield: " << angels << endl << endl;

                    do {
                            gold_lucky = 1;
                            angka1 = rand() % 10 + 1;
                            angka2 = rand() % 10 + 1;
                            angka3 = rand() % 10 + 1;
                            angka4 = rand() % 10 + 1;
                            operator1 = rand() % 4 + 1;
                            operator2 = rand() % 4 + 1;
                            operator3 = rand() % 4 + 1;

                            cout << "= Round " << rounds << " =" << endl;
                            if(rounds == 1){
                                gold_rounds += 10;
                                cout << "Each round gives " << gold_rounds << " gold." << endl;
                            } else if (rounds % 5 == 1){
                                gold_rounds += 10;
                                cout << "Gold reward increased! Each round now gives " << gold_rounds << " gold." << endl;
                            }

                            if(operator1 == 1){
                                hasil1 = angka1 + angka2;
                                operator1_d = "+";
                            } else if (operator1 == 2){
                                hasil1 = angka1 - angka2;
                                operator1_d = "-";
                            } else if (operator1 == 3){
                                hasil1 = angka1 * angka2;
                                operator1_d = "*";
                            } else if (operator1 == 4){
                                hasil1 = angka1 / (angka2 * 1.0);
                                operator1_d = "/";
                            }

                            if(operator2 == 1){
                                hasil2 = hasil1 + angka3;
                                operator2_d = "+";
                            } else if (operator2 == 2){
                                hasil2 = hasil1 - angka3;
                                operator2_d = "-";
                            } else if (operator2 == 3){
                                hasil2 = hasil1 * angka3;
                                operator2_d = "*";
                            } else if (operator2 == 4){
                                hasil2 = hasil1 / (angka3 * 1.0);
                                operator2_d = "/";
                            }

                            if(operator3 == 1){
                                hasil3 = hasil2 + angka4;
                                operator3_d = "+";
                            } else if (operator3 == 2){
                                hasil3 = hasil2 - angka4;
                                operator3_d = "-";
                            } else if (operator3 == 3){
                                hasil3 = hasil2 * angka4;
                                operator3_d = "*";
                            } else if (operator3 == 4){
                                hasil3 = hasil2 / (angka4 * 1.0);
                                operator3_d = "/";
                            }

                            do {

                            cout << angka1 << " " << operator1_d << " " << angka2 << " " << operator2_d << " " << angka3 << " " << operator3_d << " " << angka4 << " = ? " << endl;
                            cout << ">> ";
                            cin >> jawaban;

                            if(jawaban == 777 && lucky > 0){
                                lucky -= 1;
                                gold_lucky *= 3;

                                cout << "You prayed using your lucky pendant" << endl;
                                cout << "This round's gold reward is tripled" << endl;
                                cout << "Lucky pendant remaining: " << lucky << endl << endl;
                            } else if(jawaban == 777 && lucky <= 0) {
                                cout << "You don't have lucky pendant" << endl << endl;
                            }

                            if(jawaban == 666 && devils > 0){
                                devils -= 1;

                                cout << "Through the devil's eye, see through the answer: " << hasil3 << endl;
                                cout << "Devil's eye remaining: " << devils << endl << endl;
                            } else if(jawaban == 666 && devils <= 0) {
                                cout << "You don't have devil's eye" << endl << endl;
                            }

                        } while (jawaban == 777 || jawaban == 666);
                            if(hasil3 == jawaban || fabs(hasil3-jawaban) <= 0.001){
                                cout << "Correct!" << endl << endl;
                                gold_earned += gold_rounds * gold_lucky;
                            } else if (hasil3 != jawaban && angels > 0){
                                angels -= 1;
                                jawaban = hasil3;
                                gold_earned += gold_rounds * gold_lucky;
                                cout << "Incorrect. The correct answer was " << hasil3 << endl;
                                cout << "Saved by an angel's shield" << endl;
                                cout << "Angel's shield remaining: " << angels << endl << endl;
                            }
                        rounds++;
                    } while (hasil3 == jawaban || fabs(hasil3-jawaban) <= 0.001 || angels > 0);
                    rounds -= 2;
                    gold += gold_earned;
                    cout << "Incorrect. The correct answer was " << hasil3 << endl;
                    cout << "Rounds completed: " << rounds << endl;
                    cout << "Gold earned: " << gold_earned << endl;
                    cout << "Current gold: " << gold << endl << endl;
                break;
                }
                break;
            }
            break;
        }
        case 2:{
            do{
            cout << endl << "== Shop ==" << endl;
            cout << "Gold: " << gold << endl;
            cout << "1. Lucky Pendant: (Price: 50 | Owned: " << lucky << ")" << endl;
            cout << "2. Devil's Eye: (Price: 100 | Owned: " << devils << ")" << endl;
            cout << "3. Angel's Shield: (Price: 200 | Owned: " << angels << ")" << endl;
            cout << "0. Exit " << endl;
            do{
                cout << ">> ";
                cin >> shop;
            } while (shop < 0 || shop > 3);

                switch(shop){
                    case 1:{
                        cout << endl << "Amount: " << endl;

                        do {
                            cout << ">> ";
                            cin >> amount;
                        } while(amount < 0);
                        if (amount == 0){
                            break;
                        }

                        int check_gold = gold - amount * 50;

                        if(check_gold >= 0){
                            lucky += amount;
                            gold -= amount * 50;

                            cout << "Purchased " << amount << " lucky pendant" << endl << endl;
                        } else {
                            cout << "Failed. Your gold is not enough" << endl << endl;
                        }
                    break;
                    }
                    case 2:{
                        cout << endl << "Amount: " << endl;

                        do {
                            cout << ">> ";
                            cin >> amount;
                        } while(amount < 0);
                        if (amount == 0){
                            break;
                        }

                        int check_gold = gold - amount * 100;

                        if(check_gold >= 0){
                            devils += amount;
                            gold -= amount * 100;

                            cout << "Purchased " << amount << " devil's eye" << endl << endl;
                        } else {
                            cout << "Failed. Your gold is not enough" << endl << endl;
                        }
                    break;
                    }
                    case 3:{
                        cout << endl << "Amount: " << endl;

                        do {
                            cout << ">> ";
                            cin >> amount;
                        } while(amount < 0);
                        if (amount == 0){
                            break;
                        }

                        int check_gold = gold - amount * 200;

                        if(check_gold >= 0){
                            angels += amount;
                            gold -= amount * 200;

                            cout << "Purchased " << amount << " angel's shield" << endl << endl;
                        } else {
                            cout << "Failed. Your gold is not enough" << endl << endl;
                        }
                    break;
                    }
                }
            } while(shop != 0);
            break;
        }
        break;
    }
} while(menu != 0);
    return 0;
}
