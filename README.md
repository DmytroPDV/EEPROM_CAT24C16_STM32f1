/*
 * Functions for working with EEPROM via I2C
 * Uses the HAL library for reading and writing data
 */

#include "stm32f1xx_hal.h"

/**
 * @brief Write a single byte to EEPROM
 * @param memAddr Memory address in EEPROM
 * @param data Data to write
 * @return HAL_StatusTypeDef Execution status
 */
HAL_StatusTypeDef EEPROM_WriteByte(uint16_t memAddr, uint8_t data);

/**
 * @brief Read a single byte from EEPROM
 * @param memAddr Memory address in EEPROM
 * @param data Pointer to a variable where the read value will be stored
 * @return HAL_StatusTypeDef Execution status
 */
HAL_StatusTypeDef EEPROM_ReadByte(uint16_t memAddr, uint8_t *data);

/**
 * @brief Write a 16-bit value to EEPROM
 * @param memAddr Memory address in EEPROM
 * @param data 16-bit data to write
 * @return HAL_StatusTypeDef Execution status
 */
HAL_StatusTypeDef EEPROM_WriteUint16(uint16_t memAddr, uint16_t data);

/**
 * @brief Read a 16-bit value from EEPROM
 * @param memAddr Memory address in EEPROM
 * @param data Pointer to a variable where the read value will be stored
 * @return HAL_StatusTypeDef Execution status
 */
HAL_StatusTypeDef EEPROM_ReadUint16(uint16_t memAddr, uint16_t *data);

/**
 * @brief Write a 32-bit value to EEPROM
 * @param memAddr Memory address in EEPROM
 * @param data 32-bit data to write
 * @return HAL_StatusTypeDef Execution status
 */
HAL_StatusTypeDef EEPROM_WriteUint32(uint16_t memAddr, uint32_t data);

/**
 * @brief Read a 32-bit value from EEPROM
 * @param memAddr Memory address in EEPROM
 * @param data Pointer to a variable where the read value will be stored
 * @return HAL_StatusTypeDef Execution status
 */
HAL_StatusTypeDef EEPROM_ReadUint32(uint16_t memAddr, uint32_t *data);

/**
 * @brief Write an array of bytes to EEPROM
 * @param memAddr Starting memory address in EEPROM
 * @param data Pointer to the data buffer
 * @param len Number of bytes to write
 * @return HAL_StatusTypeDef Execution status
 */
HAL_StatusTypeDef EEPROM_WriteBuffer(uint16_t memAddr, uint8_t *data, uint16_t len);

/**
 * @brief Read an array of bytes from EEPROM
 * @param memAddr Starting memory address in EEPROM
 * @param data Pointer to the buffer where the read data will be stored
 * @param len Number of bytes to read
 * @return HAL_StatusTypeDef Execution status
 */
HAL_StatusTypeDef EEPROM_ReadBuffer(uint16_t memAddr, uint8_t *data, uint16_t len);
