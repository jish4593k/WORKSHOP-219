#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Function to generate a random prediction
char* generatePrediction() {
    char* predictions[] = {"red", "red", "red", "purple", "purple", "purple", "gold"};
    int index = rand() % (sizeof(predictions) / sizeof(predictions[0]));
    return predictions[index];
}

// Function to simulate the roulette command
void roulette(char* roundId) {
    int roundLength = strlen(roundId);
    if (roundLength == 36) {
        char* prediction = generatePrediction();

        // Simulate embedding and sending message
        printf("Roulette Predictor\n");
        printf("Color: %s\n", prediction);
        // Add more details if needed

    } else {
        printf("Invalid round id\n");
    }
}

int main() {
    srand((unsigned int)time(NULL));  // Seed for random number generation
    char roundId[] = "12345678-1234-1234-1234-123456789abc";  // Replace with a valid round id
    roulette(roundId);
    return 0;
}
