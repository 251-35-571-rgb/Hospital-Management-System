#include <stdio.h>
#include "../include/patient.h"
#include "../include/hospital.h"
#include "../include/ui.h"

void hospital_init(void) {
    patients[0] = (Patient){
        .id = 1001,
        .name = "John Doe",
        .age = 30,
        .gender = MALE,
        .phone = "1234567890",
        .address = "123 Main St",
        .blood_group = "A+",
        .is_active = true
    };
    patients[1] = (Patient){
        .id = 1002,
        .name = "Jane Meow",
        .age = 25,
        .gender = FEMALE,
        .phone = "0987654321",
        .address = "456 Elm St",
        .blood_group = "B+",
        .is_active = true
    };
    patients[2] = (Patient){
        .id = 1003,
        .name = "Bob Smith",
        .age = 40,
        .gender = MALE,
        .phone = "1122334455",
        .address = "789 Oak St",
        .blood_group = "AB+",
        .is_active = true
    };
    patient_count = 3;
}

int main() {
    hospital_init();
    patient_receptionist_menu();
    return 0;
}