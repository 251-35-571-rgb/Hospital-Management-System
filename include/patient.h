/**
 * @file patient.h
 * @brief Patient management functions for Healthcare Management System
 * 
 * This header declares all patient-related CRUD operations.
 */

#ifndef PATIENT_H
#define PATIENT_H

#include "hospital.h"

/**
* Generates a unique patient ID.
* @return The generated patient ID.
*/
int patient_generate_id(void);

/**
 * Adds a new patient to the system.
 */
void patient_add(void);

/**
 * Searches for a patient by ID.
 */
void patient_search_by_id(void);

/**
 * Searches for a patient by name.
 */
void patient_search_by_name(void);

/**
 * Searches for a patient by phone number.
 */
void patient_search_by_phone(void);

/**
 * Handles the search choice for patient.
 */
 void patient_search_by(void);

/**
 * Updates a patient information by ID.
 */
void patient_update_using_id(void);

/**
 * Deletes a patient by ID.
 */
void patient_delete_by_id(void);

/**
 * Displays the patient management menu and handles user input.
 */
 void patient_receptionist_menu(void);

/**
 * Displays all patients in the system.
 */
 void patient_view_all(void);

#endif