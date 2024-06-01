#include <iostream>
using namespace std;
//double power(double T, int B) {
//    double result = 1.0;
//    if (B >= 0) {
//        for (int i = 0; i < B; ++i) {
//            result *= T;
//        }
//    }
//    else {
//        for (int i = 0; i < -B; ++i) {
//            result /= T;
//        }
//    }
//    return result;
//}
//int sum_in_range(int start, int end) {
//    int sum = 0;
//    int lower = (start < end) ? start : end;
//    int upper = (start < end) ? end : start;
//
//    for (int i = lower; i <= upper; ++i) {
//        sum += i;
//    }
//    return sum;
//}
void print_card(int rank, int suit) {
    string ranks[] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A" };
    string suits[] = { "Hearts", "Diamonds", "Clubs", "Spades" };

    cout << "Card: " << ranks[rank] << " of " << suits[suit] << endl;
}

int main() {
    /*double T;
    int B;

    cout << "Enter the base of the exponent: ";
    cin >> T;
    cout << "Enter the exponent: ";
    cin >> B;

    double result = power(T, B);
    cout << "Result: " << result << endl;*/
    
    /*int start, end;
    cout << "Enter the first integer: ";
    cin >> start;
    cout << "Enter the second integer: ";
    cin >> end;

    int result = sum_in_range(start, end);
    cout << "The sum of numbers in the range between " << start << " and " << end << " is equal to: " << result << endl;*/
    {
        int rank, suit;
        cout << "Enter rank of the card (0-12): ";
        cin >> rank;
        cout << "Enter suit of the card (0-3): ";
        cin >> suit;

        if (rank >= 0 && rank <= 12 && suit >= 0 && suit <= 3) {
            print_card(rank, suit);
        }
        else {
            cout << "Invalid input. Rank should be between 0 and 12, and suit should be between 0 and 3." << endl;
        }

    }

    

}