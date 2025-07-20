#include <stdio.h>
#include <string.h>

// Function to provide advice based on symptoms
void provideAdvice(char *symptom) {
    if (strcmp(symptom, "headache") == 0) {
        printf("Advice: Take paracetamol and rest in a quiet, dark room.\n");
    } else if (strcmp(symptom, "fever") == 0) {
        printf("Advice: Take ibuprofen, stay hydrated, and rest.\n");
    } else if (strcmp(symptom, "cough") == 0) {
        printf("Advice: Take a cough suppressant and drink warm fluids.\n");
    } else if (strcmp(symptom, "stomachache") == 0) {
        printf("Advice: Take an antacid and avoid heavy meals.\n");
    } else {
        printf("Advice: For serious symptoms, please consult a doctor.\n");
    }
}

int main() {
    char symptom[50];

    printf("Enter your symptom (e.g., headache, fever, cough, stomachache): ");
    scanf("%s", symptom);

    provideAdvice(symptom);

    return 0;
}

