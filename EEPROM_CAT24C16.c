// EEPROM_CAT24C16.c
#include "EEPROM_CAT24C16.h"

#include "main.h"  //  HAL I2C

extern I2C_HandleTypeDef hi2c1;  // I2C1 is used, change as needed

// 1 byte write
HAL_StatusTypeDef EEPROM_WriteByte(uint16_t memAddr, uint8_t data) {
    return HAL_I2C_Mem_Write(&hi2c1, (EEPROM_DEV_ADDR << 1), memAddr, I2C_MEMADD_SIZE_8BIT, &data, 1, HAL_MAX_DELAY);
}

// Reading 1 byte
HAL_StatusTypeDef EEPROM_ReadByte(uint16_t memAddr, uint8_t *data) {
    return HAL_I2C_Mem_Read(&hi2c1, (EEPROM_DEV_ADDR << 1), memAddr, I2C_MEMADD_SIZE_8BIT, data, 1, HAL_MAX_DELAY);
}

// Write 2 bytes (uint16_t)
HAL_StatusTypeDef EEPROM_WriteUint16(uint16_t memAddr, uint16_t data) {
    uint8_t buffer[2] = { (data >> 8) & 0xFF, data & 0xFF };
    return HAL_I2C_Mem_Write(&hi2c1, (EEPROM_DEV_ADDR << 1), memAddr, I2C_MEMADD_SIZE_8BIT, buffer, 2, HAL_MAX_DELAY);
}

// Reading 2 bytes (uint16_t)
HAL_StatusTypeDef EEPROM_ReadUint16(uint16_t memAddr, uint16_t *data) {
    uint8_t buffer[2];
    HAL_StatusTypeDef status = HAL_I2C_Mem_Read(&hi2c1, (EEPROM_DEV_ADDR << 1), memAddr, I2C_MEMADD_SIZE_8BIT, buffer, 2, HAL_MAX_DELAY);
    *data = (buffer[0] << 8) | buffer[1];
    return status;
}

// Write 4 bytes (uint32_t)
HAL_StatusTypeDef EEPROM_WriteUint32(uint16_t memAddr, uint32_t data) {
    uint8_t buffer[4] = { (data >> 24) & 0xFF, (data >> 16) & 0xFF, (data >> 8) & 0xFF, data & 0xFF };
    return HAL_I2C_Mem_Write(&hi2c1, (EEPROM_DEV_ADDR << 1), memAddr, I2C_MEMADD_SIZE_8BIT, buffer, 4, HAL_MAX_DELAY);
}

// Reading 4 bytes (uint32_t)
HAL_StatusTypeDef EEPROM_ReadUint32(uint16_t memAddr, uint32_t *data) {
    uint8_t buffer[4];
    HAL_StatusTypeDef status = HAL_I2C_Mem_Read(&hi2c1, (EEPROM_DEV_ADDR << 1), memAddr, I2C_MEMADD_SIZE_8BIT, buffer, 4, HAL_MAX_DELAY);
    *data = (buffer[0] << 24) | (buffer[1] << 16) | (buffer[2] << 8) | buffer[3];
    return status;
}

// Buffer write
HAL_StatusTypeDef EEPROM_WriteBuffer(uint16_t memAddr, uint8_t *data, uint16_t len) {
    return HAL_I2C_Mem_Write(&hi2c1, (EEPROM_DEV_ADDR << 1), memAddr, I2C_MEMADD_SIZE_8BIT, data, len, HAL_MAX_DELAY);
}

// Reading the buffer
HAL_StatusTypeDef EEPROM_ReadBuffer(uint16_t memAddr, uint8_t *data, uint16_t len) {
    return HAL_I2C_Mem_Read(&hi2c1, (EEPROM_DEV_ADDR << 1), memAddr, I2C_MEMADD_SIZE_8BIT, data, len, HAL_MAX_DELAY);
}
