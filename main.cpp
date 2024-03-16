#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Define structs for Patient, Doctor, and Appointment

struct Patient {
    string name;
    string DOB;
    string address;
    string phone;
    string insurance;
    string medicalHistory;
    string allergies;
    string currentMedications;
};

struct Doctor {
    string name;
    string specialty;
    string phone;
    string officeLocation;
};

struct Appointment {
    string date;
    string time;
    Patient patient;
    Doctor doctor;
};

// Function to add a new patient to the system
void addPatient(Patient &newPatient) {
    cout << "Enter patient name: ";
    cin >> newPatient.name;
    cout << "Enter patient DOB (mm/dd/yyyy): ";
    cin >> newPatient.DOB;
    cout << "Enter patient address: ";
    cin >> newPatient.address;
    cout << "Enter patient phone number: ";
    cin >> newPatient.phone;
    cout << "Enter patient insurance provider: ";
    cin >> newPatient.insurance;
    cout << "Enter patient medical history: ";
    cin >> newPatient.medicalHistory;
    cout << "Enter patient allergies: ";
    cin >> newPatient.allergies;
    cout << "Enter patient current medications: ";
    cin >> newPatient.currentMedications;

    // Write patient information to file
    ofstream outFile;
    outFile.open("patients.txt", ios::app);
    outFile << newPatient.name << "," << newPatient.DOB << "," << newPatient.address << "," << newPatient.phone << "," << newPatient.insurance << "," << newPatient.medicalHistory << "," << newPatient.allergies << "," << newPatient.currentMedications << endl;
    outFile.close();

    cout << "Patient added to system." << endl;
}

// Function to add a new doctor to the system
void addDoctor(Doctor &newDoctor) {
    cout << "Enter doctor name: ";
    cin >> newDoctor.name;
    cout << "Enter doctor specialty: ";
    cin >> newDoctor.specialty;
    cout << "Enter doctor phone number: ";
    cin >> newDoctor.phone;
    cout << "Enter doctor office location: ";
    cin >> newDoctor.officeLocation;

    // Write doctor information to file
    ofstream outFile;
    outFile.open("doctors.txt", ios::app);
    outFile << newDoctor.name << "," << newDoctor.specialty << "," << newDoctor.phone << "," << newDoctor.officeLocation << endl;
    outFile.close();

    cout << "Doctor added to system." << endl;
}

// Function to schedule an appointment
void scheduleAppointment(Appointment &newAppointment) {
    cout << "Enter patient checkup data: ";
    cin >> newAppointment.date;
    cout << "Enter patient checkup time: ";
    cin >> newAppointment.time;
    cout << "Enter patient name: ";
    cin >> newAppointment.patient.name;
    cout << "Enter doctor name: ";
    cin >> newAppointment.doctor.name;

    // Write appointment information to file
    ofstream outFile;
    outFile.open("appointments.txt", ios::app);
    outFile << newAppointment.date << "," << newAppointment.time << "," << newAppointment.patient.name << "," << newAppointment.doctor.name << endl;
    outFile.close();

    cout << "Appointment scheduled." << endl;
}

int main() {
    Patient patient;
    Doctor doctor;
    Appointment appointment;

    // Example usage
    addPatient(patient);
    addDoctor(doctor);
    scheduleAppointment(appointment);

    return 0;
}
